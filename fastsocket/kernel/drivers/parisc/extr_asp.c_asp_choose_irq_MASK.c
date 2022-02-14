
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sversion; } ;
struct parisc_device {int hw_path; int aux_irq; TYPE_1__ id; int irq; } ;


 int FUNC_0 (void*,int,int *) ;

__attribute__((used)) static void FUNC_1(struct parisc_device *VAR_0, void *VAR_1)
{
 int VAR_2;

 switch (VAR_0->id.sversion) {
 case 0x71: VAR_2 = 9; break;
 case 0x72: VAR_2 = 8; break;
 case 0x73: VAR_2 = 1; break;
 case 0x74: VAR_2 = 7; break;
 case 0x75: VAR_2 = (VAR_0->hw_path == 4) ? 5 : 6; break;
 case 0x76: VAR_2 = 10; break;
 case 0x77: VAR_2 = 11; break;
 case 0x7a: VAR_2 = 13; break;
 case 0x7b: VAR_2 = 13; break;
 case 0x7c: VAR_2 = 3; break;
 case 0x7d: VAR_2 = 4; break;
 case 0x7f: VAR_2 = 13; break;
 default: return;
 }

 FUNC_0(VAR_1, VAR_2, &VAR_0->irq);

 switch (VAR_0->id.sversion) {
 case 0x73: VAR_2 = 2; break;
 case 0x76: VAR_2 = 0; break;
 default: return;
 }

 FUNC_0(VAR_1, VAR_2, &VAR_0->aux_irq);
}
