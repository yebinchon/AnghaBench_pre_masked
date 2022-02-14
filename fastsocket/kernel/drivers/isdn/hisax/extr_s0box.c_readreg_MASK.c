
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (unsigned int) ;
 int* VAR_0 ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static inline u_char
FUNC_2(unsigned int VAR_1, signed int VAR_2, u_char VAR_3) {
 register u_char VAR_4, VAR_5;

 FUNC_1(0x1c,VAR_1+2);
 FUNC_1(0x14,VAR_1+2);
 FUNC_1((VAR_2+VAR_3)|0x80,VAR_1);
 FUNC_1(0x16,VAR_1+2);
 FUNC_1(0x17,VAR_1+2);
 VAR_4 = (FUNC_0(VAR_1+1) >> 3) & 0x17;
 FUNC_1(0x16,VAR_1+2);
 VAR_5 = (FUNC_0(VAR_1+1) >> 3) & 0x17;
 FUNC_1(0x14,VAR_1+2);
 FUNC_1(0x1c,VAR_1+2);
 return VAR_0[VAR_4] | (VAR_0[VAR_5] << 4);
}
