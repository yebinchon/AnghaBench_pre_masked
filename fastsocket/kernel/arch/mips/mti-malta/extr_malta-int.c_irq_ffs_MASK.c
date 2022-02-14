
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_1(unsigned int VAR_1)
{



 unsigned int VAR_2 = 7;
 unsigned int VAR_3;

 VAR_3 = VAR_1 & 0xf000;
 VAR_3 = VAR_3 < 1;
 VAR_3 = VAR_3 << 2;
 VAR_2 = VAR_2 - VAR_3;
 VAR_1 = VAR_1 << VAR_3;

 VAR_3 = VAR_1 & 0xc000;
 VAR_3 = VAR_3 < 1;
 VAR_3 = VAR_3 << 1;
 VAR_2 = VAR_2 - VAR_3;
 VAR_1 = VAR_1 << VAR_3;

 VAR_3 = VAR_1 & 0x8000;
 VAR_3 = VAR_3 < 1;

 VAR_2 = VAR_2 - VAR_3;


 return VAR_2;

}
