
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_2 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_3, unsigned int VAR_4,
     unsigned int VAR_5, int VAR_6, int VAR_7, u32 *VAR_8)
{
 unsigned long VAR_9;
 int VAR_10, VAR_11;

 if ((VAR_4 > 255) || (VAR_5 > 255) || (VAR_6 > 255)) {
  *VAR_8 = -1;
  return -VAR_0;
 }

 VAR_10 = FUNC_2(VAR_5);
 VAR_11 = FUNC_1(VAR_5);

 if (VAR_10 & 0x10)
  return VAR_1;

 FUNC_7(&VAR_2, VAR_9);

 FUNC_6((u8)(0xF0 | (VAR_11 << 1)), 0xCF8);
 FUNC_6((u8)VAR_4, 0xCFA);

 switch (VAR_7) {
 case 1:
  *VAR_8 = FUNC_3(FUNC_0(VAR_10, VAR_6));
  break;
 case 2:
  *VAR_8 = FUNC_5(FUNC_0(VAR_10, VAR_6));
  break;
 case 4:
  *VAR_8 = FUNC_4(FUNC_0(VAR_10, VAR_6));
  break;
 }

 FUNC_6(0, 0xCF8);

 FUNC_8(&VAR_2, VAR_9);

 return 0;
}
