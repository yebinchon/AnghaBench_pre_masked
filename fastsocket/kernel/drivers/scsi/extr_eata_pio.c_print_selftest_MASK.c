
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned char**,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static unsigned int FUNC_4(unsigned int VAR_7)
{
 unsigned char VAR_8[512];




 FUNC_3("eata_pio: executing controller self test & setup...\n");
 while (FUNC_0(VAR_7 + VAR_2) & VAR_3);
 FUNC_2(VAR_0, VAR_7 + VAR_6);
 do {
  while (FUNC_0(VAR_7 + VAR_2) & VAR_3)
                 ;
  if (FUNC_0(VAR_7 + VAR_2) & VAR_4) {
   FUNC_1(VAR_7 + VAR_1, &VAR_8, 256);






  }
 } while (FUNC_0(VAR_7 + VAR_2) & (VAR_3 | VAR_4));

 return (!(FUNC_0(VAR_7 + VAR_2) & VAR_5));
}
