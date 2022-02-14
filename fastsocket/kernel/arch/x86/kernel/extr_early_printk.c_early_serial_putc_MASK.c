
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_3(unsigned char VAR_4)
{
 unsigned VAR_5 = 0xffff;

 while ((FUNC_1(VAR_3 + VAR_0) & VAR_2) == 0 && --VAR_5)
  FUNC_0();
 FUNC_2(VAR_4, VAR_3 + VAR_1);
 return VAR_5 ? 0 : -1;
}
