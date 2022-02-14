
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct iblock_dev {int * ibd_bio_set; int * ibd_bd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iblock_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct iblock_dev*) ;

__attribute__((used)) static void FUNC_4(struct se_device *VAR_3)
{
 struct iblock_dev *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->ibd_bd != ((void*)0))
  FUNC_2(VAR_4->ibd_bd, VAR_2|VAR_1|VAR_0);
 if (VAR_4->ibd_bio_set != ((void*)0))
  FUNC_1(VAR_4->ibd_bio_set);
 FUNC_3(VAR_4);
}
