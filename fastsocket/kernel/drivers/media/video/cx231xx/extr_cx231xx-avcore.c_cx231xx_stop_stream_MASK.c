
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct cx231xx*,int ,int ,int*,int) ;
 int FUNC_2 (struct cx231xx*,int ,int ,int*,int) ;

int FUNC_3(struct cx231xx *VAR_3, u32 VAR_4)
{
 u8 VAR_5[4] = { 0x0, 0x0, 0x0, 0x0 };
 u32 VAR_6 = 0;
 int VAR_7 = 0;

 FUNC_0("cx231xx_stop_stream():: ep_mask = %x\n", VAR_4);
 VAR_7 =
     FUNC_1(VAR_3, VAR_1, VAR_0, VAR_5, 4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = *((u32 *) VAR_5);
 VAR_6 &= (~VAR_4);
 VAR_5[0] = (u8) VAR_6;
 VAR_5[1] = (u8) (VAR_6 >> 8);
 VAR_5[2] = (u8) (VAR_6 >> 16);
 VAR_5[3] = (u8) (VAR_6 >> 24);

 VAR_7 = FUNC_2(VAR_3, VAR_2, VAR_0,
     VAR_5, 4);

 return VAR_7;
}
