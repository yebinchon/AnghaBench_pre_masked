
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cx231xx*,int ,int*) ;
 int FUNC_1 (struct cx231xx*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

int FUNC_4(struct cx231xx *VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;
 u8 VAR_8 = 0;
 u8 VAR_9 = 0;
 int VAR_10 = 0;


 VAR_8 = (u8) (VAR_6 & 0xff);
 VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_3, &VAR_9);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = (u8) ((VAR_6 & 0x300) >> 8);
 VAR_8 |= 0x40;
 VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_0, 0x0f);
 if (VAR_7 < 0)
  return VAR_7;


 while (VAR_9 != 0x18) {
  VAR_7 = FUNC_1(VAR_5, VAR_1, 0x18);
  if (VAR_7 < 0) {
   FUNC_2(
   ": Init Super Block failed in send cmd\n");
   break;
  }

  VAR_7 = FUNC_0(VAR_5, VAR_1, &VAR_9);
  VAR_9 &= 0xff;
  if (VAR_7 < 0) {
   FUNC_2(
   ": Init Super Block failed in receive cmd\n");
   break;
  }
  VAR_10++;
  if (VAR_10 == 10) {
   FUNC_2(
   ": Init Super Block force break in loop !!!!\n");
   VAR_7 = -1;
   break;
  }
 }

 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = FUNC_1(VAR_5, VAR_4, 0x40);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(5);


 VAR_7 = FUNC_1(VAR_5, VAR_4, 0x00);

 return VAR_7;
}
