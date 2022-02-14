
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpu; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(int VAR_4)
{
 int VAR_5;
        unsigned long VAR_6;

        FUNC_3(&VAR_3, VAR_6);
        VAR_5 = VAR_2[VAR_4 - VAR_1].cpu;


 if (VAR_5 == VAR_0)
        {
  FUNC_4(&VAR_3, VAR_6);
  return FUNC_2();
        }



 if (FUNC_0(VAR_5, VAR_2[VAR_4 - VAR_1].mask))
  goto out;


 VAR_5 = FUNC_1(VAR_2[VAR_4 - VAR_1].mask);
 VAR_2[VAR_4 - VAR_1].cpu = VAR_5;
out:
 FUNC_4(&VAR_3, VAR_6);
 return VAR_5;
}
