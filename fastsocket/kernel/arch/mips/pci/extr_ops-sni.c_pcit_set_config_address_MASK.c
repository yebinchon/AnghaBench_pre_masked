
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 if ((VAR_3 > 255) || (VAR_4 > 255) || (VAR_2 > 255))
  return VAR_0;

 FUNC_0((1 << 31) | ((VAR_2 & 0xff) << 16) | ((VAR_3 & 0xff) << 8) | (VAR_4 & 0xfc), 0xcf8);
 return VAR_1;
}
