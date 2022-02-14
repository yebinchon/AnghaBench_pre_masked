
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char addr; } ;
struct bttv {scalar_t__ i2c_rc; TYPE_1__ i2c_client; } ;


 int FUNC_0 (TYPE_1__*,unsigned char*,int) ;

int FUNC_1(struct bttv *VAR_0, unsigned char VAR_1, unsigned char VAR_2,
      unsigned char VAR_3, int VAR_4)
{
 unsigned char VAR_5[2];
 int VAR_6 = VAR_4 ? 2 : 1;

 if (0 != VAR_0->i2c_rc)
  return -1;
 VAR_0->i2c_client.addr = VAR_1 >> 1;
 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_3;
 if (VAR_6 != FUNC_0(&VAR_0->i2c_client, VAR_5, VAR_6))
  return -1;
 return 0;
}
