
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wMilliseconds; int wMonth; int wSecond; int wMinute; int wHour; int wYear; int wDay; } ;


 int AutoSyncTime ;
 int * MthStr ;
 TYPE_1__ SYSTime ;
 int ShowAllHeader ;
 int fprintf (int ,char*,...) ;
 int sscanf (char*,char*,char*,int *,char*,int *,int *,int *,int *) ;
 int stderr ;
 scalar_t__ strcmp (int ,char*) ;
 int strlen (char*) ;
 scalar_t__ strncmp (char*,char*,int) ;

size_t SyncTime_CURL_WriteHeader(void *ptr, size_t size, size_t nmemb,
                                 void *stream)
{
  char TmpStr1[26], TmpStr2[26];

  (void)stream;

  if(ShowAllHeader == 1)
    fprintf(stderr, "%s", (char *)(ptr));

  if(strncmp((char *)(ptr), "Date:", 5) == 0) {
    if(ShowAllHeader == 0)
      fprintf(stderr, "HTTP Server. %s", (char *)(ptr));

    if(AutoSyncTime == 1) {
      *TmpStr1 = 0;
      *TmpStr2 = 0;
      if(strlen((char *)(ptr)) > 50)

        AutoSyncTime = 0;
      else {
        int RetVal = sscanf((char *)(ptr), "Date: %s %hu %s %hu %hu:%hu:%hu",
                            TmpStr1, &SYSTime.wDay, TmpStr2, &SYSTime.wYear,
                            &SYSTime.wHour, &SYSTime.wMinute,
                            &SYSTime.wSecond);

        if(RetVal == 7) {
          int i;
          SYSTime.wMilliseconds = 500;
          for(i = 0; i<12; i++) {
            if(strcmp(MthStr[i], TmpStr2) == 0) {
              SYSTime.wMonth = i + 1;
              break;
            }
          }
          AutoSyncTime = 3;
        }
        else {
          AutoSyncTime = 0;
        }
      }
    }
  }

  if(strncmp((char *)(ptr), "X-Cache: HIT", 12) == 0) {
    fprintf(stderr, "ERROR: HTTP Server data is cached."
            " Server Date is no longer valid.\n");
    AutoSyncTime = 0;
  }
  return (nmemb*size);
}
