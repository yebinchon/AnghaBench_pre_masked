
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(int VAR_6)
{
 u32 VAR_7 = (1 << 8) | (1 << 9);
 if (VAR_6 & VAR_3) VAR_7 |= (1 << 6);
 if (VAR_6 & VAR_2) VAR_7 |= (1 << 7);
 if (VAR_6 & VAR_1) VAR_7 |= (1 << 10);

 FUNC_0(VAR_5, VAR_7, VAR_4, VAR_0);
}
