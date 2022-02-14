
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline int FUNC_2(unsigned char VAR_3,
      unsigned int VAR_4, int VAR_5)
{
 u32 VAR_6;

 FUNC_1(VAR_0, ~VAR_2);
 if (VAR_3 == 0)



  VAR_6 = (1 << (22 + FUNC_0(VAR_4))) | (5 << 9);
 else



  VAR_6 = (VAR_3 << 26) | (FUNC_0(VAR_4) << 22) |
      (1 << 15) | (5 << 9);

 FUNC_1(VAR_1, VAR_6);

 return 0;
}
