
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct cam_data {int lowlevel_data; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* transferCmd ) (int ,int*,int*) ;} ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct cam_data *VAR_0, u16 VAR_1,
          u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5,
          u8 VAR_6, u8 VAR_7, u8 VAR_8, u8 VAR_9,
          u8 VAR_10, u8 VAR_11, u8 VAR_12, u8 VAR_13)
{
 int VAR_14;
 u8 VAR_15[8], VAR_16[8];

 VAR_15[0] = VAR_1>>8;
 VAR_15[1] = VAR_1&0xff;
 VAR_15[2] = VAR_2;
 VAR_15[3] = VAR_3;
 VAR_15[4] = VAR_4;
 VAR_15[5] = VAR_5;
 VAR_15[6] = 8;
 VAR_15[7] = 0;
 VAR_16[0] = VAR_6;
 VAR_16[1] = VAR_7;
 VAR_16[2] = VAR_8;
 VAR_16[3] = VAR_9;
 VAR_16[4] = VAR_10;
 VAR_16[5] = VAR_11;
 VAR_16[6] = VAR_12;
 VAR_16[7] = VAR_13;

 VAR_14 = VAR_0->ops->transferCmd(VAR_0->lowlevel_data, VAR_15, VAR_16);
 if (VAR_14)
  FUNC_0("%x - failed\n", VAR_1);

 return VAR_14;
}
