
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_count; scalar_t__ init_count; scalar_t__ count; scalar_t__ attr; } ;
typedef TYPE_1__ ee_sema_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

void FUNC_4(double VAR_1)
{

 if (VAR_0){
         int VAR_2,VAR_3;
         for (VAR_2=0;VAR_2<VAR_1 * 100.0;VAR_2++){

   ee_sema_t VAR_4;
                 VAR_4.attr = 0;
                 VAR_4.count = 0;
                 VAR_4.init_count = 0;
                 VAR_4.max_count = 1;
                 VAR_3 = FUNC_0(&VAR_4);
                 if (VAR_3 <= 0) {

                         return;
                 }

                 FUNC_3(VAR_3);
                 FUNC_2(VAR_3);
                 FUNC_1(VAR_3);
         }
 }
}
