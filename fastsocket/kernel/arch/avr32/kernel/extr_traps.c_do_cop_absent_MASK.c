
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(u32 VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 if ((VAR_2 & 0xfdf00000) == 0xf1900000)

  VAR_3 = 0;
 else
  VAR_3 = (VAR_2 >> 13) & 0x7;


 VAR_4 = FUNC_0(VAR_0);
 VAR_4 |= (1 << (24 + VAR_3));
 FUNC_1(VAR_0, VAR_4);

 VAR_4 = FUNC_0(VAR_0);
 if (!(VAR_4 & (1 << (24 + VAR_3))))
  return -VAR_1;

 return 0;
}
