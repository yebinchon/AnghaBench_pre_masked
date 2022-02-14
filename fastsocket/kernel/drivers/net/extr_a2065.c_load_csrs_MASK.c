
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_regs {int rdp; int rap; } ;
struct lance_private {int busmaster_regval; struct lance_init_block* lance_init_block; struct lance_regs* ll; } ;
struct lance_init_block {int dummy; } ;


 int FUNC_0 (struct lance_init_block volatile*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1 (struct lance_private *VAR_4)
{
 volatile struct lance_regs *VAR_5 = VAR_4->ll;
 volatile struct lance_init_block *VAR_6 = VAR_4->lance_init_block;
 int VAR_7;

 VAR_7 = FUNC_0 (VAR_6);

 VAR_5->rap = VAR_1;
 VAR_5->rdp = (VAR_7 & 0xFFFF);
 VAR_5->rap = VAR_2;
 VAR_5->rdp = VAR_7 >> 16;
 VAR_5->rap = VAR_3;
 VAR_5->rdp = VAR_4->busmaster_regval;


 VAR_5->rap = VAR_0;
}
