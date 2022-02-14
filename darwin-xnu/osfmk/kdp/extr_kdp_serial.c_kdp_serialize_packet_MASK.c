
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (unsigned char,void (*) (char)) ;
 scalar_t__ FUNC_1 (int ,unsigned char*,unsigned int) ;

void FUNC_2(unsigned char *VAR_2, unsigned int VAR_3, void (*VAR_4)(char))
{
 unsigned int VAR_5;
 unsigned char VAR_6;
 uint32_t VAR_7;


 VAR_7 = (uint32_t) FUNC_1(0, VAR_2, VAR_3);
 VAR_4(VAR_1);
 FUNC_0((VAR_7 >> 0), VAR_4);
 FUNC_0((VAR_7 >> 8), VAR_4);
 FUNC_0((VAR_7 >> 16), VAR_4);
 FUNC_0((VAR_7 >> 24), VAR_4);

 VAR_4(VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = *VAR_2++;
  FUNC_0(VAR_6, VAR_4);
 }
 VAR_4(VAR_0);
}
