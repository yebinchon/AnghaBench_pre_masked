
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct OperationConfig {int dummy; } ;
struct GlobalConfig {int showerror; TYPE_1__* first; TYPE_1__* last; int parallel_max; int styled_output; int errors; } ;
struct TYPE_4__ {struct GlobalConfig* global; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_9 ;

__attribute__((used)) static CURLcode FUNC_6(struct GlobalConfig *VAR_10)
{
  CURLcode VAR_11 = VAR_1;







  VAR_10->showerror = -1;
  VAR_10->errors = VAR_9;
  VAR_10->styled_output = VAR_4;
  VAR_10->parallel_max = VAR_3;


  VAR_10->first = VAR_10->last = FUNC_5(sizeof(struct OperationConfig));
  if(VAR_10->first) {

    VAR_11 = FUNC_1(VAR_2);
    if(!VAR_11) {

      VAR_11 = FUNC_3();

      if(!VAR_11) {

        FUNC_0(VAR_10->first);
        VAR_10->first->global = VAR_10;
      }
      else {
        FUNC_4(VAR_9, "error retrieving curl library information\n");
        FUNC_2(VAR_10->first);
      }
    }
    else {
      FUNC_4(VAR_9, "error initializing curl library\n");
      FUNC_2(VAR_10->first);
    }
  }
  else {
    FUNC_4(VAR_9, "error initializing curl\n");
    VAR_11 = VAR_0;
  }

  return VAR_11;
}
