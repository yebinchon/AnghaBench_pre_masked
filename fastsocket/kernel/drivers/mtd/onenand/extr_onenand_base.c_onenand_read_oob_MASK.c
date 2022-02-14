
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int dummy; } ;
struct mtd_oob_ops {int mode; scalar_t__ datbuf; } ;
struct mtd_info {struct onenand_chip* priv; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_0 (struct onenand_chip*) ;
 int FUNC_1 (struct mtd_info*,int ) ;
 int FUNC_2 (struct mtd_info*,int ,struct mtd_oob_ops*) ;
 int FUNC_3 (struct mtd_info*,int ,struct mtd_oob_ops*) ;
 int FUNC_4 (struct mtd_info*,int ,struct mtd_oob_ops*) ;
 int FUNC_5 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_2, loff_t VAR_3,
       struct mtd_oob_ops *VAR_4)
{
 struct onenand_chip *VAR_5 = VAR_2->priv;
 int VAR_6;

 switch (VAR_4->mode) {
 case 129:
 case 130:
  break;
 case 128:

 default:
  return -VAR_0;
 }

 FUNC_1(VAR_2, VAR_1);
 if (VAR_4->datbuf)
  VAR_6 = FUNC_0(VAR_5) ?
   FUNC_2(VAR_2, VAR_3, VAR_4) :
   FUNC_4(VAR_2, VAR_3, VAR_4);
 else
  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
 FUNC_5(VAR_2);

 return VAR_6;
}
