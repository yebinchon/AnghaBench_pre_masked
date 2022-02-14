
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct pvr2_hdw {int* cmd_buffer; int ctl_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct pvr2_hdw*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_3(struct pvr2_hdw *VAR_2,
   u8 VAR_3,u8 *VAR_4,u16 VAR_5,u8 *VAR_6,u16 VAR_7)
{
 u8 VAR_8[4];
 unsigned int VAR_9;

 if (!(VAR_7 || VAR_5)) {

  return 0;
 }


 if ((VAR_5 != 0) || (VAR_7 == 0)) return -VAR_0;

 if (VAR_7 < 3) {







  if (VAR_7 > 0) VAR_6[0] = 0;
  if (VAR_7 > 1) VAR_6[1] = 0;
  return 0;
 }


 FUNC_1(VAR_2->ctl_lock); do {
  VAR_2->cmd_buffer[0] = VAR_1;
  VAR_9 = FUNC_2(VAR_2,
      VAR_2->cmd_buffer,1,
      VAR_2->cmd_buffer,4);
  VAR_8[0] = VAR_2->cmd_buffer[0];
  VAR_8[1] = VAR_2->cmd_buffer[1];
  VAR_8[2] = VAR_2->cmd_buffer[2];
  VAR_8[3] = VAR_2->cmd_buffer[3];
 } while (0); FUNC_0(VAR_2->ctl_lock);


 if (VAR_9 != 0) return VAR_9;



 VAR_6[2] = 0xc1;
 if (VAR_8[0] != 1) {

  VAR_6[0] = 0;
  VAR_6[1] = 0;
 } else {
  u16 VAR_10;


  VAR_10 = VAR_8[1];
  VAR_10 <<= 8;
  VAR_10 |= VAR_8[2];
  VAR_10 >>= 1;
  VAR_10 &= ~0x0003;
  VAR_10 |= 0x8000;
  VAR_6[0] = (VAR_10 >> 8) & 0xffu;
  VAR_6[1] = VAR_10 & 0xffu;
 }

 return 0;
}
