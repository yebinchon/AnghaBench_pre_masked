
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfb_info {unsigned int ramdac_ctrl; unsigned int ramdac_powerdown; } ;


 unsigned int FUNC_0 (int,struct cfb_info*) ;
 int FUNC_1 (unsigned int,int,struct cfb_info*) ;

__attribute__((used)) static void FUNC_2(struct cfb_info *VAR_0)
{
 unsigned int VAR_1;
 unsigned int VAR_2 = VAR_0->ramdac_ctrl | VAR_0->ramdac_powerdown;

 FUNC_1(0x56, 0x3ce, VAR_0);
 VAR_1 = FUNC_0(0x3cf, VAR_0);
 FUNC_1(VAR_1 | 4, 0x3cf, VAR_0);
 FUNC_1(VAR_2, 0x3c6, VAR_0);
 FUNC_1(VAR_1, 0x3cf, VAR_0);
}
