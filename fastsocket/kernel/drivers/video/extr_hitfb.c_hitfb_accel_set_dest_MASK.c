
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline void FUNC_1(int VAR_5, u16 VAR_6, u16 VAR_7,
     u16 VAR_8, u16 VAR_9)
{
 u32 VAR_10 = VAR_4 * VAR_7 + VAR_6;
 if (VAR_5)
  VAR_10 <<= 1;

 FUNC_0(VAR_8-1, VAR_3);
 FUNC_0(VAR_9-1, VAR_0);

 FUNC_0(VAR_10 & 0xffff, VAR_2);
 FUNC_0(VAR_10 >> 16, VAR_1);

}
