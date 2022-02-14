
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {scalar_t__ PDIO0; scalar_t__ PDIO; scalar_t__ PRAMDAC0; scalar_t__ PRAMDAC; scalar_t__ PCRTC0; scalar_t__ PCRTC; scalar_t__ PCIO0; scalar_t__ PCIO; } ;



__attribute__((used)) static void FUNC_0(struct nvidia_par *VAR_0, int VAR_1)
{
 if (VAR_1) {
  VAR_0->PCIO = VAR_0->PCIO0 + 0x2000;
  VAR_0->PCRTC = VAR_0->PCRTC0 + 0x800;
  VAR_0->PRAMDAC = VAR_0->PRAMDAC0 + 0x800;
  VAR_0->PDIO = VAR_0->PDIO0 + 0x2000;
 } else {
  VAR_0->PCIO = VAR_0->PCIO0;
  VAR_0->PCRTC = VAR_0->PCRTC0;
  VAR_0->PRAMDAC = VAR_0->PRAMDAC0;
  VAR_0->PDIO = VAR_0->PDIO0;
 }
}
