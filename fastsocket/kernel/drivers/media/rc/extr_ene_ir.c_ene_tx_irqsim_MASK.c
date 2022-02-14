
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ene_device {int hw_lock; } ;


 int FUNC_0 (struct ene_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct ene_device *VAR_1 = (struct ene_device *)VAR_0;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->hw_lock, VAR_2);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->hw_lock, VAR_2);
}
