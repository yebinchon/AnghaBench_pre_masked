
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 long VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

unsigned char *FUNC_2(unsigned long VAR_4, unsigned long VAR_5)
{
 long VAR_6;

 VAR_6 = (long)VAR_5 - (long)(VAR_4 + VAR_2);
 if (FUNC_1(VAR_6 < -33554432 || VAR_6 > 33554428)) {



  FUNC_0(1);
  return ((void*)0);
 }
 VAR_6 = (VAR_6 >> 2) & VAR_0;
 VAR_3 = VAR_1 | VAR_6;
 return (unsigned char *)&VAR_3;
}
