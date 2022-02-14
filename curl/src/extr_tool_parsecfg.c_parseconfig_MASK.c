
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct OperationConfig {struct GlobalConfig* global; struct OperationConfig* next; struct OperationConfig* prev; TYPE_1__* url_list; } ;
struct GlobalConfig {struct OperationConfig* last; struct OperationConfig* first; } ;
struct TYPE_2__ {scalar_t__ url; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char,int) ;
 scalar_t__ FUNC_2 (char) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct OperationConfig*) ;
 char* FUNC_4 (char*,char*,int ,...) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,int ) ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int*,struct GlobalConfig*,struct OperationConfig*) ;
 char* FUNC_11 () ;
 void* FUNC_12 (int) ;
 char* FUNC_13 (int *) ;
 char* FUNC_14 (int) ;
 int VAR_12 ;
 int * VAR_13 ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (struct GlobalConfig*,char*,char const*,int,char*,...) ;

int FUNC_19(const char *VAR_14, struct GlobalConfig *VAR_15)
{
  FILE *VAR_16 = ((void*)0);
  bool VAR_17 = VAR_1;
  int VAR_18 = 0;
  struct OperationConfig *VAR_19 = VAR_15->first;
  char *VAR_20 = ((void*)0);

  if(!VAR_14 || !*VAR_14) {


    char *VAR_21 = FUNC_11();

    if(VAR_21) {
      VAR_20 = FUNC_4("%s%s.curlrc", VAR_21, VAR_0);
      if(!VAR_20) {
        FUNC_9(VAR_21);
        return 1;
      }
      VAR_14 = VAR_20;
    }
    FUNC_0(VAR_21);
  }

  if(!VAR_16 && VAR_14) {
    if(FUNC_15(VAR_14, "-"))
      VAR_16 = FUNC_7(VAR_14, VAR_2);
    else
      VAR_16 = VAR_13;
  }

  if(VAR_16) {
    char *VAR_22;
    char *VAR_23;
    char *VAR_24;
    char *VAR_25;
    int VAR_26 = 0;
    bool VAR_27;

    while(((void*)0) != (VAR_23 = FUNC_13(VAR_16))) {
      int VAR_28;
      bool VAR_29 = VAR_1;
      VAR_26++;
      VAR_22 = VAR_23;


      while(*VAR_22 && FUNC_2(*VAR_22))
        VAR_22++;

      switch(*VAR_22) {
      case '#':
      case '/':
      case '\r':
      case '\n':
      case '*':
      case '\0':
        FUNC_0(VAR_23);
        continue;
      }


      VAR_24 = VAR_22;


      VAR_27 = VAR_24[0]=='-'?VAR_11:VAR_1;

      while(*VAR_22 && !FUNC_2(*VAR_22) && !FUNC_1(*VAR_22, VAR_27))
        VAR_22++;


      if(*VAR_22)
        *VAR_22++ = '\0';






      while(*VAR_22 && (FUNC_2(*VAR_22) || FUNC_1(*VAR_22, VAR_27)))
        VAR_22++;


      if(*VAR_22 == '\"') {

        VAR_22++;
        VAR_25 = FUNC_12(FUNC_16(VAR_22) + 1);
        if(!VAR_25) {

          FUNC_0(VAR_23);
          VAR_18 = 1;
          break;
        }
        VAR_29 = VAR_11;
        (void)FUNC_17(VAR_22, VAR_25);
      }
      else {
        VAR_25 = VAR_22;
        while(*VAR_22 && !FUNC_2(*VAR_22))
          VAR_22++;

        if(*VAR_22) {
          *VAR_22 = '\0';


          VAR_22++;

          while(*VAR_22 && FUNC_2(*VAR_22))
            VAR_22++;

          switch(*VAR_22) {
          case '\0':
          case '\r':
          case '\n':
          case '#':
            break;
          default:
            FUNC_18(VAR_19->global, "%s:%d: warning: '%s' uses unquoted "
                  "white space in the line that may cause side-effects!\n",
                  VAR_14, VAR_26, VAR_24);
          }
        }
        if(!*VAR_25)


          VAR_25 = ((void*)0);
      }




      VAR_28 = FUNC_10(VAR_24, VAR_25, &VAR_17, VAR_15, VAR_19);

      if(!VAR_28 && VAR_25 && *VAR_25 && !VAR_17)

        VAR_28 = VAR_4;

      if(VAR_28 == VAR_7) {
        if(VAR_19->url_list && VAR_19->url_list->url) {

          VAR_19->next = FUNC_12(sizeof(struct OperationConfig));
          if(VAR_19->next) {

            FUNC_3(VAR_19->next);


            VAR_19->next->global = VAR_15;


            VAR_15->last = VAR_19->next;


            VAR_19->next->prev = VAR_19;
            VAR_19 = VAR_19->next;
          }
          else
            VAR_28 = VAR_8;
        }
      }

      if(VAR_28 != VAR_9 && VAR_28 != VAR_7) {

        if(!FUNC_15(VAR_14, "-")) {
          VAR_14 = "<stdin>";
        }
        if(VAR_28 != VAR_5 &&
           VAR_28 != VAR_6 &&
           VAR_28 != VAR_10 &&
           VAR_28 != VAR_3) {
          const char *VAR_30 = FUNC_14(VAR_28);
          FUNC_18(VAR_19->global, "%s:%d: warning: '%s' %s\n",
                VAR_14, VAR_26, VAR_24, VAR_30);
        }
      }

      if(VAR_29)
        FUNC_0(VAR_25);

      FUNC_0(VAR_23);
    }
    if(VAR_16 != VAR_13)
      FUNC_6(VAR_16);
  }
  else
    VAR_18 = 1;

  FUNC_9(VAR_20);
  return VAR_18;
}
