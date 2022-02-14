
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {scalar_t__ ctl_mirror; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(struct saa7134_dev *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3,VAR_4;

 FUNC_7(FUNC_4(VAR_1), VAR_2 & 0xff);
 FUNC_7(FUNC_5(VAR_1), VAR_2 >> 8);

 VAR_4 = (VAR_0->ctl_mirror) ? 0x02 : 0x00;
 if (VAR_2 < 2048) {

  FUNC_6("yscale LPI yscale=%d\n",VAR_2);
  FUNC_7(FUNC_3(VAR_1), 0x00 | VAR_4);
  FUNC_7(FUNC_2(VAR_1), 0x40);
  FUNC_7(FUNC_0(VAR_1), 0x40);
 } else {

  VAR_3 = 0x40 * 1024 / VAR_2;
  FUNC_6("yscale ACM yscale=%d val=0x%x\n",VAR_2,VAR_3);
  FUNC_7(FUNC_3(VAR_1), 0x01 | VAR_4);
  FUNC_7(FUNC_2(VAR_1), VAR_3);
  FUNC_7(FUNC_0(VAR_1), VAR_3);
 }
 FUNC_7(FUNC_1(VAR_1), 0x80);
}
