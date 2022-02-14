
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* cb ) (void*) ;void* context; } ;
typedef TYPE_1__ main_async_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void (*) (void*)) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(void* VAR_8, void (*VAR_9)(void*))
{
 FUNC_0(VAR_9);
 FUNC_2(VAR_3, VAR_0);
 ++VAR_6;
 if (VAR_6 > VAR_5)
 {
  VAR_5 = (VAR_5 * 3 + 1) / 2;
  VAR_2 = (main_async_t*)FUNC_4(VAR_2, sizeof(main_async_t) * VAR_5);


  VAR_7 = VAR_6 - 1;
 }
 VAR_2[VAR_7].context = VAR_8;
 VAR_2[VAR_7].cb = VAR_9;
 VAR_7 = (VAR_7 + 1) % VAR_5;
 FUNC_1(VAR_3);
 FUNC_3(VAR_1 &VAR_4);
}
