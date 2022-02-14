
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wanted; int dev; } ;
typedef TYPE_1__ ppa_struct ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(ppa_struct *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;
 FUNC_1(&VAR_0, VAR_2);
 VAR_3 = VAR_1->wanted;
 VAR_1->wanted = 0;
 FUNC_2(&VAR_0, VAR_2);
 if (!VAR_3)
  FUNC_0(VAR_1->dev);
}
