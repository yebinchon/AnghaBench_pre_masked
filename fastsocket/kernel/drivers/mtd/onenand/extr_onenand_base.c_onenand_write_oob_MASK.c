
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_oob_ops {int mode; scalar_t__ datbuf; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct mtd_info*,int ) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct mtd_info*,int ,struct mtd_oob_ops*) ;
 int FUNC_3 (struct mtd_info*,int ,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_2, loff_t VAR_3,
        struct mtd_oob_ops *VAR_4)
{
 int VAR_5;

 switch (VAR_4->mode) {
 case 129:
 case 130:
  break;
 case 128:

 default:
  return -VAR_0;
 }

 FUNC_0(VAR_2, VAR_1);
 if (VAR_4->datbuf)
  VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
 else
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_2);

 return VAR_5;
}
