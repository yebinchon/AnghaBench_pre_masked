
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxc_w1_device {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u8 FUNC_3(void *VAR_2)
{
 u8 VAR_3;
 unsigned int VAR_4 = 0;
 struct mxc_w1_device *VAR_5 = VAR_2;

 FUNC_1(0x80, (VAR_5->regs + VAR_0));

 while (1) {
  VAR_3 = FUNC_0(VAR_5->regs + VAR_0);

  if (((VAR_3 >> 7) & 0x1) == 0 ||
      VAR_4 > VAR_1)
   break;
  else
   VAR_4++;

  FUNC_2(100);
 }
 return (VAR_3 >> 7) & 0x1;
}
