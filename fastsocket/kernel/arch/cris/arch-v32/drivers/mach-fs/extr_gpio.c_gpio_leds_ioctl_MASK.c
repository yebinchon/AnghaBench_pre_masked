
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 int VAR_0 ;

 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int
FUNC_3(unsigned int VAR_1, unsigned long VAR_2)
{
 unsigned char VAR_3;
 unsigned char VAR_4;

 switch (FUNC_2(VAR_1)) {
 case 128:
  VAR_3 = ((unsigned char) VAR_2) & 1;
  VAR_4 = (((unsigned char) VAR_2) >> 1) & 1;
  FUNC_0(VAR_3);
  FUNC_1(VAR_4);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
