
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char u32 ;
struct saa7134_dev {int dummy; } ;
struct IR_i2c {TYPE_2__* c; } ;
struct TYPE_5__ {TYPE_1__* adapter; } ;
struct TYPE_4__ {struct saa7134_dev* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_1 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct IR_i2c *VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 unsigned char VAR_9;


 struct saa7134_dev *VAR_10 = VAR_4->c->adapter->algo_data;

 if (VAR_10 == ((void*)0)) {
  FUNC_2("get_key_flydvb_trio: "
      "ir->c->adapter->algo_data is NULL!\n");
  return -VAR_0;
 }


 FUNC_4(VAR_1, VAR_2);
 FUNC_6(VAR_1, VAR_2);

 VAR_7 = FUNC_5(VAR_3 >> 2);

 if (0x40000 & ~VAR_7)
  return 0;


 if (VAR_9 == 0xFF)
  return 0;



 VAR_9 = 0;

 while (1 != FUNC_1(VAR_4->c, &VAR_9, 1)) {
  if ((VAR_8++) < 10) {




   FUNC_3(10);
   continue;
  }
  FUNC_2("send wake up byte to pic16C505 (IR chip)"
      "failed %dx\n", VAR_8);
  return -VAR_0;
 }
 if (1 != FUNC_0(VAR_4->c, &VAR_9, 1)) {
  FUNC_2("read error\n");
  return -VAR_0;
 }

 *VAR_5 = VAR_9;
 *VAR_6 = VAR_9;
 return 1;
}
