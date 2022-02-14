
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition {int cylinders; } ;
struct mtd_blktrans_dev {int dummy; } ;
struct hd_geometry {int heads; int cylinders; int sectors; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mtd_blktrans_dev *VAR_1, struct hd_geometry *VAR_2)
{
 struct partition *VAR_3 = (struct partition*)VAR_1;

 VAR_2->heads = 1;
 VAR_2->sectors = VAR_0;
 VAR_2->cylinders = VAR_3->cylinders;

 return 0;
}
