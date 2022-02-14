
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sam9_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct device*,char*,unsigned int,unsigned long,int) ;
 struct sam9_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (struct sam9_rtc*,int ) ;
 int FUNC_3 (struct sam9_rtc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, unsigned int VAR_5,
   unsigned long VAR_6)
{
 struct sam9_rtc *VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = 0;
 u32 VAR_9 = FUNC_2(VAR_7, VAR_3);

 FUNC_0(VAR_4, "ioctl: cmd=%08x, arg=%08lx, mr %08x\n", VAR_5, VAR_6, VAR_9);

 switch (VAR_5) {
 case 131:
  FUNC_3(VAR_7, VAR_3, VAR_9 & ~VAR_0);
  break;
 case 130:
  FUNC_3(VAR_7, VAR_3, VAR_9 | VAR_0);
  break;
 case 129:
  FUNC_3(VAR_7, VAR_3, VAR_9 & ~VAR_1);
  break;
 case 128:
  FUNC_3(VAR_7, VAR_3, VAR_9 | VAR_1);
  break;
 default:
  VAR_8 = -VAR_2;
  break;
 }

 return VAR_8;
}
