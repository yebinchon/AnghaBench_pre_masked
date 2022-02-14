
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_work {int dummy; } ;
struct sas_ha_struct {int lock; } ;


 int FUNC_0 (struct sas_ha_struct*,struct sas_work*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,unsigned long*) ;

__attribute__((used)) static void FUNC_4(int VAR_0, unsigned long *VAR_1,
       struct sas_work *VAR_2,
       struct sas_ha_struct *VAR_3)
{
 if (!FUNC_3(VAR_0, VAR_1)) {
  unsigned long VAR_4;

  FUNC_1(&VAR_3->lock, VAR_4);
  FUNC_0(VAR_3, VAR_2);
  FUNC_2(&VAR_3->lock, VAR_4);
 }
}
