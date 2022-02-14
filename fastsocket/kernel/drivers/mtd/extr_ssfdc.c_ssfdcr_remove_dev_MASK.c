
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssfdcr_record {struct ssfdcr_record* logic_block_map; } ;
struct mtd_blktrans_dev {int devnum; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mtd_blktrans_dev*) ;
 int FUNC_2 (struct ssfdcr_record*) ;

__attribute__((used)) static void FUNC_3(struct mtd_blktrans_dev *VAR_1)
{
 struct ssfdcr_record *VAR_2 = (struct ssfdcr_record *)VAR_1;

 FUNC_0(VAR_0, "SSFDC_RO: remove_dev (i=%d)\n", VAR_1->devnum);

 FUNC_1(VAR_1);
 FUNC_2(VAR_2->logic_block_map);
 FUNC_2(VAR_2);
}
