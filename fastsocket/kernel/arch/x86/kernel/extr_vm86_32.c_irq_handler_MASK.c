
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int tsk; scalar_t__ sig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;

 FUNC_2(&VAR_3, VAR_8);
 VAR_7 = 1 << VAR_5;
 if ((VAR_2 & VAR_7) || !VAR_4[VAR_5].tsk)
  goto out;
 VAR_2 |= VAR_7;
 if (VAR_4[VAR_5].sig)
  FUNC_1(VAR_4[VAR_5].sig, VAR_4[VAR_5].tsk, 1);




 FUNC_0(VAR_5);
 FUNC_3(&VAR_3, VAR_8);
 return VAR_0;

out:
 FUNC_3(&VAR_3, VAR_8);
 return VAR_1;
}
