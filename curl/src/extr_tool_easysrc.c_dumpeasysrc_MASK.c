
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct curl_slist {char const* data; struct curl_slist* next; } ;
struct GlobalConfig {char* libcurl; } ;
struct TYPE_8__ {struct curl_slist* first; } ;
struct TYPE_7__ {struct curl_slist* first; } ;
struct TYPE_6__ {struct curl_slist* first; } ;
struct TYPE_5__ {struct curl_slist* first; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,char*,...) ;
 char** VAR_7 ;
 char** VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (struct GlobalConfig*,char*,char*) ;

void FUNC_6(struct GlobalConfig *VAR_10)
{
  struct curl_slist *VAR_11;
  char *VAR_12 = VAR_10->libcurl;

  FILE *VAR_13;
  bool VAR_14 = VAR_0;
  if(FUNC_4(VAR_12, "-")) {
    VAR_13 = FUNC_2(VAR_12, VAR_1);
    VAR_14 = VAR_2;
  }
  else
    VAR_13 = VAR_9;
  if(!VAR_13)
    FUNC_5(VAR_10, "Failed to open %s to write libcurl code!\n", VAR_12);
  else {
    int VAR_15;
    const char *VAR_16;

    for(VAR_15 = 0; ((VAR_16 = VAR_8[VAR_15]) != ((void*)0)); VAR_15++)
      FUNC_3(VAR_13, "%s\n", VAR_16);


    if(VAR_6) {
      for(VAR_11 = VAR_6->first; VAR_11; VAR_11 = VAR_11->next)
        FUNC_3(VAR_13, "  %s\n", VAR_11->data);
    }


    if(VAR_5) {
      FUNC_3(VAR_13, "\n");

      for(VAR_11 = VAR_5->first; VAR_11; VAR_11 = VAR_11->next)
        FUNC_3(VAR_13, "  %s\n", VAR_11->data);
    }

    FUNC_3(VAR_13, "\n");
    if(VAR_4) {
      for(VAR_11 = VAR_4->first; VAR_11; VAR_11 = VAR_11->next) {
        if(VAR_11->data[0]) {
          FUNC_3(VAR_13, "  %s\n", VAR_11->data);
        }
        else {
          FUNC_3(VAR_13, "\n");
        }
      }
    }

    if(VAR_3) {
      for(VAR_11 = VAR_3->first; VAR_11; VAR_11 = VAR_11->next)
        FUNC_3(VAR_13, "  %s\n", VAR_11->data);
    }

    for(VAR_15 = 0; ((VAR_16 = VAR_7[VAR_15]) != ((void*)0)); VAR_15++)
      FUNC_3(VAR_13, "%s\n", VAR_16);

    if(VAR_14)
      FUNC_1(VAR_13);
  }

  FUNC_0();
}
