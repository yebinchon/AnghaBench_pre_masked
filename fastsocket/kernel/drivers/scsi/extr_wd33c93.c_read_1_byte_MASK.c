
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wd33c93_regs ;
typedef int uchar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const,int ) ;
 int FUNC_2 (int const,int ,int) ;
 int FUNC_3 (int const,int) ;

__attribute__((used)) static inline uchar
FUNC_4(const wd33c93_regs VAR_8)
{
 uchar VAR_9;
 uchar VAR_10 = 0;

 FUNC_2(VAR_8, VAR_6, VAR_3 | VAR_2 | VAR_4);
 FUNC_3(VAR_8, VAR_5 | 0x80);
 do {
  VAR_9 = FUNC_0(VAR_8);
  if (VAR_9 & VAR_0)
   VAR_10 = FUNC_1(VAR_8, VAR_7);
 } while (!(VAR_9 & VAR_1));
 return VAR_10;
}
