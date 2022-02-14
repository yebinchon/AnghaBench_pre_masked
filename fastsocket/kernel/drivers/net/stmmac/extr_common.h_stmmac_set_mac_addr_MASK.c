
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(unsigned long VAR_0, u8 VAR_1[6],
    unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = (VAR_1[5] << 8) | VAR_1[4];
 FUNC_0(VAR_4, VAR_0 + VAR_2);
 VAR_4 = (VAR_1[3] << 24) | (VAR_1[2] << 16) | (VAR_1[1] << 8) | VAR_1[0];
 FUNC_0(VAR_4, VAR_0 + VAR_3);

 return;
}
