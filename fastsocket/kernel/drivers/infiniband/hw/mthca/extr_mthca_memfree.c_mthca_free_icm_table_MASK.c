
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_icm_table {int num_icm; int coherent; scalar_t__* icm; scalar_t__ virt; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mthca_icm_table*) ;
 int FUNC_1 (struct mthca_dev*,scalar_t__,int) ;
 int FUNC_2 (struct mthca_dev*,scalar_t__,int ) ;

void FUNC_3(struct mthca_dev *VAR_2, struct mthca_icm_table *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_icm; ++VAR_4)
  if (VAR_3->icm[VAR_4]) {
   FUNC_1(VAR_2,
     VAR_3->virt + VAR_4 * VAR_1,
     VAR_1 / VAR_0);
   FUNC_2(VAR_2, VAR_3->icm[VAR_4], VAR_3->coherent);
  }

 FUNC_0(VAR_3);
}
