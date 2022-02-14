
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_2, unsigned int VAR_3,
      unsigned int VAR_4, int VAR_5, int VAR_6, u32 VAR_7)
{
 unsigned long VAR_8;

 if ((VAR_3 > 255) || (VAR_4 > 255) || (VAR_5 > 4095))
  return -VAR_0;

 FUNC_4(&VAR_1, VAR_8);

 FUNC_2(FUNC_0(VAR_3, VAR_4, VAR_5), 0xCF8);

 switch (VAR_6) {
 case 1:
  FUNC_1((u8)VAR_7, 0xCFC + (VAR_5 & 3));
  break;
 case 2:
  FUNC_3((u16)VAR_7, 0xCFC + (VAR_5 & 2));
  break;
 case 4:
  FUNC_2((u32)VAR_7, 0xCFC);
  break;
 }

 FUNC_5(&VAR_1, VAR_8);

 return 0;
}
