
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_hardware {int d11core; } ;
struct brcms_c_info {int macintmask; int defmacintmask; struct brcms_hardware* hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;

void FUNC_2(struct brcms_c_info *VAR_1)
{
 struct brcms_hardware *VAR_2 = VAR_1->hw;
 VAR_1->macintmask = VAR_1->defmacintmask;
 FUNC_1(VAR_2->d11core, FUNC_0(VAR_0), VAR_1->macintmask);
}
