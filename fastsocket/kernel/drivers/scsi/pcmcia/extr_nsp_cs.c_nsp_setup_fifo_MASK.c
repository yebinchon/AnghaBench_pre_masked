
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int BaseAddress; unsigned char TransferMode; } ;
typedef TYPE_1__ nsp_hw_data ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (unsigned int,int ,unsigned char) ;

__attribute__((used)) static void FUNC_1(nsp_hw_data *VAR_4, int VAR_5)
{
 unsigned int VAR_6 = VAR_4->BaseAddress;
 unsigned char VAR_7;



 if (VAR_5 != VAR_1) {
  VAR_7 = VAR_3 | VAR_0;
 } else {
  VAR_7 = 0;
 }

 VAR_7 |= VAR_4->TransferMode;

 FUNC_0(VAR_6, VAR_2, VAR_7);
}
