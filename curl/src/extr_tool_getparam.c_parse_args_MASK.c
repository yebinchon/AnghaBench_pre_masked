
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct OperationConfig {struct OperationConfig* next; struct OperationConfig* prev; struct GlobalConfig* global; TYPE_1__* url_list; } ;
struct GlobalConfig {int errors; struct OperationConfig* last; struct OperationConfig* first; } ;
typedef char* argv_item_t ;
struct TYPE_2__ {scalar_t__ url; } ;
typedef scalar_t__ ParameterError ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct OperationConfig*) ;
 scalar_t__ FUNC_1 (char*,char*,int*,struct GlobalConfig*,struct OperationConfig*) ;
 int FUNC_2 (int ,char*,char const*,...) ;
 struct OperationConfig* FUNC_3 (int) ;
 char* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,char*) ;

ParameterError FUNC_6(struct GlobalConfig *VAR_9, int VAR_10,
                          argv_item_t VAR_11[])
{
  int VAR_12;
  bool VAR_13;
  char *VAR_14 = ((void*)0);
  ParameterError VAR_15 = VAR_6;
  struct OperationConfig *VAR_16 = VAR_9->first;

  for(VAR_12 = 1, VAR_13 = VAR_8; VAR_12 < VAR_10 && !VAR_15; VAR_12++) {
    VAR_14 = VAR_11[VAR_12];

    if(VAR_13 && ('-' == VAR_11[VAR_12][0])) {
      bool VAR_17;
      char *VAR_18 = VAR_11[VAR_12];

      if(!FUNC_5("--", VAR_11[VAR_12]))


        VAR_13 = VAR_0;
      else {
        char *VAR_19 = (VAR_12 < (VAR_10 - 1)) ? VAR_11[VAR_12 + 1] : ((void*)0);

        VAR_15 = FUNC_1(VAR_18, VAR_19, &VAR_17, VAR_9, VAR_16);
        if(VAR_15 == VAR_4) {


          VAR_15 = VAR_6;

          if(VAR_16->url_list && VAR_16->url_list->url) {

            VAR_16->next = FUNC_3(sizeof(struct OperationConfig));
            if(VAR_16->next) {

              FUNC_0(VAR_16->next);


              VAR_16->next->global = VAR_9;


              VAR_9->last = VAR_16->next;


              VAR_16->next->prev = VAR_16;
              VAR_16 = VAR_16->next;
            }
            else
              VAR_15 = VAR_5;
          }
        }
        else if(!VAR_15 && VAR_17)
          VAR_12++;
      }
    }
    else {
      bool VAR_20;


      VAR_15 = FUNC_1((char *)"--url", VAR_11[VAR_12], &VAR_20, VAR_9,
                            VAR_16);
    }
  }

  if(VAR_15 && VAR_15 != VAR_2 &&
     VAR_15 != VAR_3 &&
     VAR_15 != VAR_7 &&
     VAR_15 != VAR_1) {
    const char *VAR_21 = FUNC_4(VAR_15);

    if(VAR_14 && FUNC_5(":", VAR_14))
      FUNC_2(VAR_9->errors, "option %s: %s\n", VAR_14, VAR_21);
    else
      FUNC_2(VAR_9->errors, "%s\n", VAR_21);
  }

  return VAR_15;
}
