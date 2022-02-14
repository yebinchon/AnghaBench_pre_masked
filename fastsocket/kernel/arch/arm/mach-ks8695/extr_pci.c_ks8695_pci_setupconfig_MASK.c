
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7;

 VAR_7 = VAR_2 | (VAR_6 & ~3);
 VAR_7 |= FUNC_1(VAR_5) << 11 ;
 VAR_7 |= FUNC_0(VAR_5) << 8;
 VAR_7 |= VAR_4 << 16;

 if (VAR_4 == 0) {

  FUNC_2(VAR_7, VAR_1 + VAR_0);
 } else {

  FUNC_2(VAR_7 | VAR_3, VAR_1 + VAR_0);
 }
}
