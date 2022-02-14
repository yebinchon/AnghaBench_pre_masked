
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curl_slist {int dummy; } ;
struct OperationConfig {TYPE_1__* global; } ;
typedef int hdrbuf ;
struct TYPE_2__ {int errors; } ;
typedef int FILE ;



 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct curl_slist**,char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char*,char const*,int) ;

__attribute__((used)) static int FUNC_7(struct OperationConfig *VAR_3,
                              const char *VAR_4, FILE *VAR_5,
                              struct curl_slist **VAR_6)
{
  size_t VAR_7 = 0;
  size_t VAR_8 = 0;
  bool VAR_9 = VAR_0;
  int VAR_10 = 1;
  char VAR_11[999];

  for(;;) {
    int VAR_12 = FUNC_3(VAR_5);
    if(VAR_12 == 128 || (!VAR_8 && !FUNC_0(VAR_12))) {

      while(VAR_7 && FUNC_0(VAR_11[VAR_7 - 1]))
        VAR_7--;
      if(VAR_7) {
        VAR_11[VAR_7] = '\0';
        if(FUNC_4(VAR_6, VAR_11)) {
          FUNC_2(VAR_3->global->errors,
                  "Out of memory for field headers!\n");
          return -1;
        }
        VAR_7 = 0;
      }
    }

    switch(VAR_12) {
    case 128:
      if(FUNC_1(VAR_5)) {
        FUNC_2(VAR_3->global->errors,
                "Header file %s read error: %s\n", VAR_4, FUNC_5(VAR_2));
        return -1;
      }
      return 0;
    case '\r':
      continue;
    case '\n':
      VAR_8 = 0;
      VAR_9 = VAR_0;
      VAR_10++;
      continue;
    case '#':
      if(!VAR_8)
        VAR_9 = VAR_1;
      break;
    }

    VAR_8++;
    if(!VAR_9) {
      if(VAR_7 == sizeof(VAR_11) - 1) {
        FUNC_6(VAR_3->global, "File %s line %d: header too long (truncated)\n",
              VAR_4, VAR_10);
        VAR_12 = ' ';
      }
      if(VAR_7 <= sizeof(VAR_11) - 1)
        VAR_11[VAR_7++] = (char) VAR_12;
    }
  }

}
