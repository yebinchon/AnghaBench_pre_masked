
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_oob_ops {scalar_t__ oobretlen; int * datbuf; int * oobbuf; scalar_t__ ooblen; scalar_t__ ooboffs; int mode; } ;
struct mtd_info {int (* read_oob ) (struct mtd_info*,int ,struct mtd_oob_ops*) ;} ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtd_info*,int ,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_2, loff_t VAR_3, uint8_t *VAR_4)
{
 struct mtd_oob_ops VAR_5;
 int VAR_6;

 VAR_5.mode = VAR_0;
 VAR_5.ooboffs = 0;
 VAR_5.ooblen = VAR_1;
 VAR_5.oobbuf = VAR_4;
 VAR_5.datbuf = ((void*)0);

 VAR_6 = VAR_2->read_oob(VAR_2, VAR_3, &VAR_5);
 if (VAR_6 < 0 || VAR_5.oobretlen != VAR_1)
  return -1;

 return 0;
}
