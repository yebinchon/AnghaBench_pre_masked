
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (char const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(int VAR_4, const char *VAR_5,
      unsigned int VAR_6,
      unsigned int VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;

 switch (VAR_4) {
 case 0:
  VAR_8 = FUNC_0(VAR_0);
  break;
 case 1:
  VAR_8 = FUNC_0(VAR_1);
  break;
 case 2:
  VAR_8 = FUNC_0(VAR_2);
  break;
 case 3:
  VAR_8 = FUNC_0(VAR_3);
  break;
 default:
  return;
 }

 if (VAR_8 & 0x00800000u)
  VAR_9 = VAR_6;
 else
  VAR_9 = VAR_7 / FUNC_1(VAR_8 & 0xff, 256);

 FUNC_2(VAR_5, VAR_9);
}
