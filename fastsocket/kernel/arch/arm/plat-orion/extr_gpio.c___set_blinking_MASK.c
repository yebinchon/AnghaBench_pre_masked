
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static inline void FUNC_3(unsigned VAR_0, int VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(FUNC_0(VAR_0));
 if (VAR_1)
  VAR_2 |= 1 << (VAR_0 & 31);
 else
  VAR_2 &= ~(1 << (VAR_0 & 31));
 FUNC_2(VAR_2, FUNC_0(VAR_0));
}
