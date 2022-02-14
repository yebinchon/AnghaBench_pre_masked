
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_char ;


 int FUNC_0 (unsigned int) ;
 int* VAR_0 ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static inline void
FUNC_2(unsigned int VAR_1, signed int VAR_2, u_char * VAR_3, int VAR_4)
{
 int VAR_5;
 register u_char VAR_6, VAR_7;

 FUNC_1(0x1c, VAR_1+2);
 FUNC_1(0x14, VAR_1+2);
 FUNC_1(VAR_2|0x80, VAR_1);
 FUNC_1(0x16, VAR_1+2);
 for (VAR_5=0; VAR_5<VAR_4; VAR_5++) {
  FUNC_1(0x17, VAR_1+2);
  VAR_6 = (FUNC_0(VAR_1+1) >> 3) & 0x17;
  FUNC_1(0x16,VAR_1+2);
  VAR_7 = (FUNC_0(VAR_1+1) >> 3) & 0x17;
  *(VAR_3++)=VAR_0[VAR_6] | (VAR_0[VAR_7] << 4);
 }
 FUNC_1(0x14,VAR_1+2);
 FUNC_1(0x1c,VAR_1+2);
 return;
}
