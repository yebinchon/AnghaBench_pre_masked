
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct imon_context {int product; scalar_t__ rc_type; int kc_lock; void* kc; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (struct imon_context*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,int,int,int) ;

__attribute__((used)) static void FUNC_6(struct imon_context *VAR_5, unsigned char *VAR_6)
{
 int VAR_7 = 0;
 char VAR_8 = 0x00, VAR_9 = 0x00;
 u16 VAR_10, VAR_11;
 u32 VAR_12 = VAR_0;
 unsigned long VAR_13;
 if (VAR_5->product != 0xffdc) {

  VAR_6[5] = VAR_6[6] = VAR_6[7] = 0;
  VAR_10 = 500;

  VAR_11 = VAR_4 ? VAR_4 : 28;
  VAR_8 = VAR_6[2];
  VAR_9 = VAR_6[3];

  if (VAR_5->rc_type == VAR_2 && VAR_3) {
   if ((VAR_6[1] == 0) && ((VAR_8 != 0) || (VAR_9 != 0))) {
    VAR_7 = FUNC_5((int)VAR_8, (int)VAR_9,
      VAR_10, VAR_11);
    if (!VAR_7) {
     FUNC_3(&VAR_5->kc_lock,
         VAR_13);
     VAR_5->kc = VAR_1;
     FUNC_4(&VAR_5->kc_lock,
              VAR_13);
     return;
    }
    VAR_6[2] = VAR_7 & 0xFF;
    VAR_6[3] = (VAR_7 >> 8) & 0xFF;
    VAR_12 = FUNC_1(*((u32 *)VAR_6));
   }
  } else {




   if (FUNC_0(VAR_9) > FUNC_0(VAR_8)) {
    VAR_6[2] = (VAR_9 > 0) ? 0x7F : 0x80;
    VAR_6[3] = 0;
    if (VAR_9 > 0)
     VAR_12 = 0x01007f00;
    else
     VAR_12 = 0x01008000;
   } else {
    VAR_6[2] = 0;
    VAR_6[3] = (VAR_8 > 0) ? 0x7F : 0x80;
    if (VAR_8 > 0)
     VAR_12 = 0x0100007f;
    else
     VAR_12 = 0x01000080;
   }
  }
 } else {
  VAR_10 = 10;

  VAR_11 = VAR_4 ? VAR_4 : 15;


  VAR_8 = (VAR_6[1] & 0x08) | (VAR_6[1] & 0x10) >> 2 |
   (VAR_6[1] & 0x20) >> 4 | (VAR_6[1] & 0x40) >> 6;
  if (VAR_6[0] & 0x02)
   VAR_8 |= ~0x10+1;

  VAR_9 = (VAR_6[2] & 0x08) | (VAR_6[2] & 0x10) >> 2 |
   (VAR_6[2] & 0x20) >> 4 | (VAR_6[2] & 0x40) >> 6;
  if (VAR_6[0] & 0x01)
   VAR_9 |= ~0x10+1;

  VAR_6[0] = 0x01;
  VAR_6[1] = VAR_6[4] = VAR_6[5] = VAR_6[6] = VAR_6[7] = 0;

  if (VAR_5->rc_type == VAR_2 && VAR_3) {
   VAR_7 = FUNC_5((int)VAR_8, (int)VAR_9,
     VAR_10, VAR_11);
   if (!VAR_7) {
    FUNC_3(&VAR_5->kc_lock, VAR_13);
    VAR_5->kc = VAR_1;
    FUNC_4(&VAR_5->kc_lock, VAR_13);
    return;
   }
   VAR_6[2] = VAR_7 & 0xFF;
   VAR_6[3] = (VAR_7 >> 8) & 0xFF;
   VAR_12 = FUNC_1(*((u32 *)VAR_6));
  } else {




   if (FUNC_0(VAR_9) > FUNC_0(VAR_8)) {
    VAR_6[2] = (VAR_9 > 0) ? 0x7F : 0x80;
    VAR_6[3] = 0;
    if (VAR_9 > 0)
     VAR_12 = 0x01007f00;
    else
     VAR_12 = 0x01008000;
   } else {
    VAR_6[2] = 0;
    VAR_6[3] = (VAR_8 > 0) ? 0x7F : 0x80;
    if (VAR_8 > 0)
     VAR_12 = 0x0100007f;
    else
     VAR_12 = 0x01000080;
   }
  }
 }

 if (VAR_12) {
  FUNC_3(&VAR_5->kc_lock, VAR_13);
  VAR_5->kc = FUNC_2(VAR_5, VAR_12);
  FUNC_4(&VAR_5->kc_lock, VAR_13);
 }
}
