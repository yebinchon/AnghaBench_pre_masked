
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct OperationConfig {struct OperationConfig* next; int url_list; } ;
struct GlobalConfig {int errors; scalar_t__ libcurl; struct OperationConfig* first; struct OperationConfig* current; } ;
typedef int argv_item_t ;
typedef scalar_t__ ParameterError ;
typedef scalar_t__ CURLcode ;
typedef int CURLSH ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct GlobalConfig*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (struct OperationConfig*,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct GlobalConfig*,int,int *) ;
 int FUNC_11 (int *,struct GlobalConfig*) ;
 scalar_t__ FUNC_12 (struct GlobalConfig*,int *,scalar_t__) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;

CURLcode FUNC_17(struct GlobalConfig *VAR_16, int VAR_17, argv_item_t VAR_18[])
{
  CURLcode VAR_19 = VAR_1;







  if((VAR_17 == 1) ||
     (!FUNC_3(VAR_18[1], "-q") &&
      !FUNC_3(VAR_18[1], "--disable"))) {
    FUNC_11(((void*)0), VAR_16);


    if((VAR_17 < 2) && (!VAR_16->first->url_list)) {
      FUNC_8(VAR_16->errors, ((void*)0));
      VAR_19 = VAR_0;
    }
  }

  if(!VAR_19) {

    ParameterError VAR_20 = FUNC_10(VAR_16, VAR_17, VAR_18);
    if(VAR_20) {
      VAR_19 = VAR_1;


      if(VAR_20 == VAR_12)
        FUNC_14();

      else if(VAR_20 == VAR_14)
        FUNC_9();

      else if(VAR_20 == VAR_15)
        FUNC_16();

      else if(VAR_20 == VAR_11)
        FUNC_15();
      else if(VAR_20 == VAR_13)
        VAR_19 = VAR_3;
      else
        VAR_19 = VAR_0;
    }
    else {

      if(VAR_16->libcurl) {

        VAR_19 = FUNC_6();
      }



      if(!VAR_19) {
        size_t VAR_21 = 0;
        struct OperationConfig *VAR_22 = VAR_16->first;
        CURLSH *VAR_23 = FUNC_1();
        if(!VAR_23) {

          if(VAR_16->libcurl) {

            FUNC_5();
          }

          return VAR_2;
        }

        FUNC_2(VAR_23, VAR_4, VAR_6);
        FUNC_2(VAR_23, VAR_4, VAR_7);
        FUNC_2(VAR_23, VAR_4, VAR_9);
        FUNC_2(VAR_23, VAR_4, VAR_5);
        FUNC_2(VAR_23, VAR_4, VAR_8);


        do {
          VAR_19 = FUNC_7(VAR_22, VAR_21++);

          VAR_22 = VAR_22->next;
        } while(!VAR_19 && VAR_22);


        VAR_16->current = VAR_16->first;


        VAR_19 = FUNC_12(VAR_16, VAR_23, VAR_19);

        FUNC_0(VAR_23);

        if(VAR_16->libcurl) {

          FUNC_5();


          FUNC_4(VAR_16);
        }

      }
      else
        FUNC_8(VAR_16->errors, "out of memory\n");
    }
  }

  return VAR_19;
}
