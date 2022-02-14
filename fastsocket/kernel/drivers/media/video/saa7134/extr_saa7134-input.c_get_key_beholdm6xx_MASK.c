
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct saa7134_dev {int dummy; } ;
struct IR_i2c {TYPE_2__* c; } ;
struct TYPE_4__ {int addr; TYPE_1__* adapter; } ;
struct TYPE_3__ {struct saa7134_dev* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct IR_i2c *VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 unsigned char VAR_7[12];
 u32 VAR_8;

 struct saa7134_dev *VAR_9 = VAR_4->c->adapter->algo_data;


 FUNC_2(VAR_1, VAR_2);
 FUNC_4(VAR_1, VAR_2);

 VAR_8 = FUNC_3(VAR_3 >> 2);

 if (0x400000 & ~VAR_8)
  return 0;

 VAR_4->c->addr = 0x5a >> 1;

 if (12 != FUNC_0(VAR_4->c, VAR_7, 12)) {
  FUNC_1("read error\n");
  return -VAR_0;
 }

 if (VAR_7[9] != (unsigned char)(~VAR_7[8]))
  return 0;

 *VAR_6 = ((VAR_7[10] << 16) | (VAR_7[11] << 8) | (VAR_7[9] << 0));
 *VAR_5 = *VAR_6;

 return 1;
}
