
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sversion; } ;
struct parisc_device {int hw_path; int irq; TYPE_1__ id; } ;


 int FUNC_0 (void*,int,int *) ;

__attribute__((used)) static void FUNC_1(struct parisc_device *VAR_0, void *VAR_1)
{
 int VAR_2;

 switch (VAR_0->id.sversion) {
  case 0x74: VAR_2 = 7; break;
  case 0x7B: VAR_2 = 13; break;
  case 0x81: VAR_2 = 14; break;
  case 0x82: VAR_2 = 9; break;
  case 0x83: VAR_2 = 20; break;
  case 0x84: VAR_2 = 26; break;
  case 0x87: VAR_2 = 18; break;
  case 0x8A: VAR_2 = 8; break;
  case 0x8C: VAR_2 = 5; break;
  case 0x8D: VAR_2 = (VAR_0->hw_path == 13) ? 16 : 17; break;

  default: return;
 }

 FUNC_0(VAR_1, VAR_2, &VAR_0->irq);
}
