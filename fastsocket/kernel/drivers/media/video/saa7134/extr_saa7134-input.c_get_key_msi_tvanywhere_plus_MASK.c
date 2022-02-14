
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u32 ;
struct saa7134_dev {int dummy; } ;
struct IR_i2c {TYPE_2__* c; } ;
struct TYPE_4__ {TYPE_1__* adapter; } ;
struct TYPE_3__ {struct saa7134_dev* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct IR_i2c *VAR_4, u32 *VAR_5,
           u32 *VAR_6)
{
 unsigned char VAR_7;
 int VAR_8;


 struct saa7134_dev *VAR_9 = VAR_4->c->adapter->algo_data;
 if (VAR_9 == ((void*)0)) {
  FUNC_2("get_key_msi_tvanywhere_plus: "
      "ir->c->adapter->algo_data is NULL!\n");
  return -VAR_0;
 }



 FUNC_3(VAR_1, VAR_2);
 FUNC_5(VAR_1, VAR_2);

 VAR_8 = FUNC_4(VAR_3 >> 2);




 if (VAR_8 & 0x40)
  return 0;



 if (1 != FUNC_1(VAR_4->c, &VAR_7, 1)) {
  FUNC_2("read error\n");
  return -VAR_0;
 }



 if (VAR_7 == 0xff)
  return 0;



 FUNC_0("get_key_msi_tvanywhere_plus: Key = 0x%02X\n", VAR_7);
 *VAR_5 = VAR_7;
 *VAR_6 = VAR_7;
 return 1;
}
