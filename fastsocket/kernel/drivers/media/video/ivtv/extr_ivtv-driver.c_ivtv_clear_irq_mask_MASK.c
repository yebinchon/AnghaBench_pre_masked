
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ivtv {int irqmask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct ivtv *VAR_1, u32 VAR_2)
{
 VAR_1->irqmask &= ~VAR_2;
 FUNC_0(VAR_1->irqmask, VAR_0);
}
