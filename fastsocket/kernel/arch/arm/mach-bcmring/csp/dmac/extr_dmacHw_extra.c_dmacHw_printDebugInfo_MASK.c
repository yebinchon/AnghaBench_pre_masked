
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dmacHw_HANDLE_t ;
struct TYPE_3__ {int channel; int module; } ;
typedef TYPE_1__ dmacHw_CBLK_t ;


 int FUNC_0 (void*,int (*) (char const*)) ;
 int FUNC_1 (int ,int ,int (*) (char const*)) ;
 TYPE_1__* FUNC_2 (int ) ;

void FUNC_3(dmacHw_HANDLE_t VAR_0,
      void *VAR_1,
      int (*VAR_2) (const char *, ...)
    ) {
 dmacHw_CBLK_t *VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_3->module, VAR_3->channel, VAR_2);
 FUNC_0(VAR_1, VAR_2);
}
