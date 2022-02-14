
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* start ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_4 = -VAR_0;

 FUNC_0(&VAR_3);
 if (!VAR_1) {
  VAR_4 = VAR_2->start();
  VAR_1 = !VAR_4;
 }
 FUNC_1(&VAR_3);
 return VAR_4;
}
