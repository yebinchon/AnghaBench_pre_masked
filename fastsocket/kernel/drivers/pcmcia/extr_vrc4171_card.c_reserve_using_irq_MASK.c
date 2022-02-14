
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_1(int VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_4 &= 0x0f;
 VAR_2 &= ~(1 << VAR_4);

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 = (VAR_4 & 0xf0) >> 4;
 VAR_2 &= ~(1 << VAR_4);
}
