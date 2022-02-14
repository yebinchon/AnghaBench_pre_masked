
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quatech_port {unsigned char shadowLSR; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;

__attribute__((used)) static void FUNC_0(struct quatech_port *VAR_4,
         unsigned char VAR_5)
{

 VAR_4->shadowLSR =
     VAR_5 & (VAR_2 | VAR_3 | VAR_1 |
      VAR_0);
 return;
}
