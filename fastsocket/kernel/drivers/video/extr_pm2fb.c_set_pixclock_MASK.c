
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm2fb_par {int type; } ;


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


 int FUNC_0 (struct pm2fb_par*,int) ;
 int FUNC_1 (struct pm2fb_par*,int ) ;
 int FUNC_2 (struct pm2fb_par*,int ) ;
 int FUNC_3 (struct pm2fb_par*,int ,int) ;
 int FUNC_4 (struct pm2fb_par*,int ,int) ;
 int FUNC_5 (int,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_6 (struct pm2fb_par*,int,unsigned char) ;
 int FUNC_7 (int,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct pm2fb_par *VAR_10, u32 VAR_11)
{
 int VAR_12;
 unsigned char VAR_13, VAR_14, VAR_15;

 switch (VAR_10->type) {
 case 129:
  FUNC_5(VAR_11, &VAR_13, &VAR_14, &VAR_15);
  FUNC_0(VAR_10, 10);
  FUNC_3(VAR_10, VAR_3, 0);
  FUNC_3(VAR_10, VAR_1, VAR_13);
  FUNC_3(VAR_10, VAR_2, VAR_14);
  FUNC_3(VAR_10, VAR_3, 8|VAR_15);
  FUNC_2(VAR_10, VAR_4);
  FUNC_8();
  for (VAR_12 = 256; VAR_12; VAR_12--)
   if (FUNC_1(VAR_10, VAR_5) & VAR_0)
    break;
  break;
 case 128:
  FUNC_7(VAR_11/2, &VAR_13, &VAR_14, &VAR_15);
  FUNC_0(VAR_10, 8);
  FUNC_4(VAR_10, VAR_9, VAR_8 >> 8);
  FUNC_6(VAR_10, VAR_8, VAR_13);
  FUNC_6(VAR_10, VAR_6, VAR_14);
  FUNC_6(VAR_10, VAR_7, VAR_15);
  FUNC_4(VAR_10, VAR_9, 0);
  break;
 }
}
