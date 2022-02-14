
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm2fb_par {int type; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 int FUNC_1 (struct pm2fb_par*,int) ;
 int FUNC_2 (struct pm2fb_par*,int ,int) ;
 int FUNC_3 (struct pm2fb_par*,int ,int) ;
 int FUNC_4 (struct pm2fb_par*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct pm2fb_par *VAR_10, u32 VAR_11)
{
 u32 VAR_12;
 u32 VAR_13 = VAR_11;

 FUNC_0("video = 0x%x\n", VAR_11);







 VAR_13 &= ~(VAR_2 | VAR_6);
 VAR_13 |= VAR_0 | VAR_4;

 FUNC_1(VAR_10, 3);
 FUNC_3(VAR_10, VAR_8, VAR_13);

 switch (VAR_10->type) {
 case 129:
  VAR_12 = VAR_3;
  if ((VAR_11 & VAR_2) == VAR_1)
   VAR_12 |= 4;
  if ((VAR_11 & VAR_6) == VAR_5)
   VAR_12 |= 8;
  FUNC_2(VAR_10, VAR_7, VAR_12);
  break;
 case 128:
  VAR_12 = 0;
  if ((VAR_11 & VAR_2) == VAR_1)
   VAR_12 |= 1;
  if ((VAR_11 & VAR_6) == VAR_5)
   VAR_12 |= 4;
  FUNC_4(VAR_10, VAR_9, VAR_12);
  break;
 }
}
