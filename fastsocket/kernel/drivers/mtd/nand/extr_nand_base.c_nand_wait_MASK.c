
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int state; int options; int (* read_byte ) (struct mtd_info*) ;scalar_t__ (* dev_ready ) (struct mtd_info*) ;int (* cmdfunc ) (struct mtd_info*,int ,int,int) ;} ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 unsigned long VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mtd_info*,int ,int,int) ;
 int FUNC_4 (struct mtd_info*,int ,int,int) ;
 scalar_t__ FUNC_5 (struct mtd_info*) ;
 int FUNC_6 (struct mtd_info*) ;
 int FUNC_7 (struct mtd_info*) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct mtd_info *VAR_10, struct nand_chip *VAR_11)
{

 unsigned long VAR_12 = VAR_8;
 int VAR_13, VAR_14 = VAR_11->state;

 if (VAR_14 == VAR_0)
  VAR_12 += (VAR_1 * 400) / 1000;
 else
  VAR_12 += (VAR_1 * 20) / 1000;

 FUNC_1(VAR_9, VAR_2);



 FUNC_2(100);

 if ((VAR_14 == VAR_0) && (VAR_11->options & VAR_6))
  VAR_11->cmdfunc(VAR_10, VAR_5, -1, -1);
 else
  VAR_11->cmdfunc(VAR_10, VAR_4, -1, -1);

 while (FUNC_8(VAR_8, VAR_12)) {
  if (VAR_11->dev_ready) {
   if (VAR_11->dev_ready(VAR_10))
    break;
  } else {
   if (VAR_11->read_byte(VAR_10) & VAR_7)
    break;
  }
  FUNC_0();
 }
 FUNC_1(VAR_9, VAR_3);

 VAR_13 = (int)VAR_11->read_byte(VAR_10);
 return VAR_13;
}
