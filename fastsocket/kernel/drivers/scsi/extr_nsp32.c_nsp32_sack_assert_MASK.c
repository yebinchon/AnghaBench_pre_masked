
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int BaseAddress; } ;
typedef TYPE_1__ nsp32_hw_data ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(nsp32_hw_data *VAR_4)
{
 unsigned int VAR_5 = VAR_4->BaseAddress;
 unsigned char VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_3);
 VAR_6 |= (VAR_2 | VAR_1 | VAR_0);
 FUNC_1(VAR_5, VAR_3, VAR_6);
}
