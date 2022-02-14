
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct saa7146_dev {int dummy; } ;
struct budget {int i2c_adap; struct saa7146_dev* dev; } ;
struct budget_av {struct budget budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int const,int const) ;
 int FUNC_3 (int) ;
 int* VAR_2 ;
 int FUNC_4 (struct saa7146_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct budget_av *VAR_3)
{
 struct budget *VAR_4 = &VAR_3->budget;
 struct saa7146_dev *VAR_5 = VAR_4->dev;
 const u8 *VAR_6 = VAR_2;

 FUNC_4(VAR_5, 0, VAR_1);
 FUNC_3(200);

 if (FUNC_2(&VAR_4->i2c_adap, 0x4a, 0x01, 0x08) != 1) {
  FUNC_0(1, "saa7113 not found on KNC card\n");
  return -VAR_0;
 }

 FUNC_0(1, "saa7113 detected and initializing\n");

 while (*VAR_6 != 0xff) {
  FUNC_2(&VAR_4->i2c_adap, 0x4a, *VAR_6, *(VAR_6 + 1));
  VAR_6 += 2;
 }

 FUNC_0(1, "saa7113  status=%02x\n", FUNC_1(&VAR_4->i2c_adap, 0x4a, 0x1f));

 return 0;
}
