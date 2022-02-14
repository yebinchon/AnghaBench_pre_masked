
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct my_timming {unsigned int HTotal; unsigned int VTotal; unsigned int HSyncEnd; unsigned int HSyncStart; unsigned int delay; unsigned int VSyncEnd; unsigned int VSyncStart; int HDisplay; unsigned int VDisplay; int pixclock; } ;
struct mavenregs {unsigned int hcorr; unsigned int* regs; int htotal; int vlines; int mode; } ;
struct maven_data {scalar_t__ version; struct matrox_fb_info* primary_head; } ;
struct matrox_fb_info {TYPE_1__* outputs; } ;
struct TYPE_2__ {int mode; } ;


 int FUNC_0 (int ,int,unsigned int*,unsigned int*,unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned int,struct mavenregs*) ;
 int FUNC_3 (struct maven_data*,struct mavenregs*) ;

__attribute__((used)) static inline int FUNC_4(struct maven_data* VAR_3,
  struct my_timming* VAR_4,
  struct mavenregs* VAR_5) {
 unsigned int VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;
 struct matrox_fb_info *VAR_10 = VAR_3->primary_head;

 VAR_5->mode = VAR_10->outputs[1].mode;
 if (VAR_5->mode != VAR_1) {
  unsigned int VAR_11;
  unsigned int VAR_12;
  unsigned int VAR_13;
  unsigned int VAR_14;
  unsigned int VAR_15;

  FUNC_3(VAR_3, VAR_5);

  if (FUNC_2(VAR_4->HTotal, VAR_4->VTotal, VAR_5) == 0)
   return -VAR_0;

  VAR_11 = VAR_4->HTotal - VAR_4->HSyncEnd;
  VAR_15 = VAR_4->HSyncEnd - VAR_4->HSyncStart;
  VAR_14 = VAR_4->HTotal - VAR_15 - VAR_4->delay;
  VAR_12 = VAR_4->VTotal - VAR_4->VSyncEnd;
  VAR_13 = VAR_4->VSyncEnd - VAR_4->VSyncStart;

  if (VAR_5->hcorr < VAR_4->HTotal)
   VAR_14 += VAR_5->hcorr;
  if (VAR_14 > VAR_4->HTotal)
   VAR_14 -= VAR_4->HTotal;
  if (VAR_14 + 2 > VAR_4->HTotal)
   VAR_14 = 0;



  VAR_5->regs[0x96] = VAR_5->hcorr;
  VAR_5->regs[0x97] = VAR_5->hcorr >> 8;

  VAR_5->regs[0x98] = 0x00; VAR_5->regs[0x99] = 0x00;

  VAR_5->regs[0x9A] = VAR_11;
  VAR_5->regs[0x9B] = VAR_11 >> 8;

  VAR_5->regs[0x9C] = 0x04;
  VAR_5->regs[0x9D] = 0x00;

  VAR_5->regs[0xA0] = VAR_5->htotal;
  VAR_5->regs[0xA1] = VAR_5->htotal >> 8;

  VAR_5->regs[0xA2] = VAR_4->VTotal - VAR_4->VSyncStart - 1;
  VAR_5->regs[0xA3] = (VAR_4->VTotal - VAR_4->VSyncStart - 1) >> 8;

  if (VAR_3->version == VAR_2) {
   VAR_5->regs[0xA4] = 0x04;
   VAR_5->regs[0xA5] = 0x00;
  } else {
   VAR_5->regs[0xA4] = 0x01;
   VAR_5->regs[0xA5] = 0x00;
  }

  VAR_5->regs[0xA6] = 0x00;
  VAR_5->regs[0xA7] = 0x00;

  VAR_5->regs[0xA8] = VAR_4->VTotal - 1;
  VAR_5->regs[0xA9] = (VAR_4->VTotal - 1) >> 8;

  VAR_5->regs[0xAA] = VAR_14;
  VAR_5->regs[0xAB] = VAR_14 >> 8;

  VAR_5->regs[0xAC] = VAR_4->VTotal - 2;
  VAR_5->regs[0xAD] = (VAR_4->VTotal - 2) >> 8;

  VAR_5->regs[0xAE] = 0x01;
  VAR_5->regs[0xAF] = 0x00;
  {
   int VAR_16;
   int VAR_17;
   unsigned int VAR_18 = 4 + VAR_11 + VAR_4->HDisplay;
   unsigned int VAR_19;
   int VAR_20;



   if (VAR_4->HTotal)
    VAR_16 = 94208 / (VAR_4->HTotal);
   else
    VAR_16 = 0x81;
   if (VAR_16 > 0x81)
    VAR_16 = 0x81;
   if (VAR_16 < 0x41)
    VAR_16 = 0x41;
   VAR_16--;
   VAR_17 = 98304 - 128 - ((VAR_11 + VAR_4->HDisplay - 8) * VAR_16);
   if (VAR_17 < 0)
    VAR_17 = 0;
   VAR_17 = VAR_17 >> 8;
   if (VAR_17 > 0xFF)
    VAR_17 = 0xFF;
   VAR_20 = 1;
   do {
    VAR_19 = ((0x3C0000 * VAR_20 - 0x8000)/ VAR_16 + 0x05E7) >> 8;
    VAR_20++;
   } while (VAR_19 < VAR_18);
   if (VAR_19 >= VAR_5->htotal + 2) {
    VAR_19 = VAR_18;
   }

   VAR_5->regs[0x90] = VAR_16;
   VAR_5->regs[0xC2] = VAR_17;

   VAR_5->regs[0x9E] = VAR_19;
   VAR_5->regs[0x9F] = VAR_19 >> 8;
  }
  {
   int VAR_21;
   int VAR_22;


   if (VAR_4->VTotal) {

    u64 VAR_23;
    u32 VAR_24;
    u32 VAR_25;

    VAR_24 = VAR_5->vlines * (VAR_5->htotal + 2);
    VAR_25 = (VAR_4->VTotal - 1) * (VAR_5->htotal + 2) + VAR_5->hcorr + 2;

    VAR_23 = ((u64)VAR_24) << 15;
    FUNC_1(VAR_23, VAR_25);
    VAR_21 = VAR_23;



   } else
    VAR_21 = 0x8000;
   if (VAR_21 > 0x8000)
    VAR_21 = 0x8000;
   VAR_22 = (VAR_13 + VAR_12 + VAR_4->VDisplay) * VAR_21;
   VAR_22 = (VAR_22 >> 16) - 146;
   if (VAR_22 < 0)
    VAR_22 = 0;
   if (VAR_22 > 0xFF)
    VAR_22 = 0xFF;
   VAR_21--;
   VAR_5->regs[0x91] = VAR_21;
   VAR_5->regs[0x92] = VAR_21 >> 8;
   VAR_5->regs[0xBE] = VAR_22;
  }
  VAR_5->regs[0xB0] = 0x08;
  return 0;
 }

 FUNC_0(VAR_4->pixclock, 450000, &VAR_7, &VAR_8, &VAR_9);
 VAR_5->regs[0x80] = VAR_7;
 VAR_5->regs[0x81] = VAR_8;
 VAR_5->regs[0x82] = VAR_9 | 0x80;

 VAR_5->regs[0xB3] = 0x01;
 VAR_5->regs[0x94] = 0xB2;


 VAR_5->regs[0x96] = VAR_4->HTotal;
 VAR_5->regs[0x97] = VAR_4->HTotal >> 8;

 VAR_5->regs[0x98] = 0x00;
 VAR_5->regs[0x99] = 0x00;

 VAR_6 = VAR_4->HSyncEnd - VAR_4->HSyncStart;
 VAR_5->regs[0x9A] = VAR_6;
 VAR_5->regs[0x9B] = VAR_6 >> 8;

 VAR_6 = VAR_4->HTotal - VAR_4->HSyncStart;
 VAR_5->regs[0x9C] = VAR_6;
 VAR_5->regs[0x9D] = VAR_6 >> 8;

 VAR_6 += VAR_4->HDisplay;
 VAR_5->regs[0x9E] = VAR_6;
 VAR_5->regs[0x9F] = VAR_6 >> 8;

 VAR_6 = VAR_4->HTotal + 1;
 VAR_5->regs[0xA0] = VAR_6;
 VAR_5->regs[0xA1] = VAR_6 >> 8;

 VAR_6 = VAR_4->VSyncEnd - VAR_4->VSyncStart - 1;
 VAR_5->regs[0xA2] = VAR_6;
 VAR_5->regs[0xA3] = VAR_6 >> 8;

 VAR_6 = VAR_4->VTotal - VAR_4->VSyncStart;
 VAR_5->regs[0xA4] = VAR_6;
 VAR_5->regs[0xA5] = VAR_6 >> 8;

 VAR_6 = VAR_4->VTotal - 1;
 VAR_5->regs[0xA6] = VAR_6;
 VAR_5->regs[0xA7] = VAR_6 >> 8;

 VAR_5->regs[0xA8] = VAR_6;
 VAR_5->regs[0xA9] = VAR_6 >> 8;

 VAR_6 = VAR_4->HTotal - VAR_4->delay;
 VAR_5->regs[0xAA] = VAR_6;
 VAR_5->regs[0xAB] = VAR_6 >> 8;

 VAR_6 = VAR_4->VTotal - 2;
 VAR_5->regs[0xAC] = VAR_6;
 VAR_5->regs[0xAD] = VAR_6 >> 8;

 VAR_5->regs[0xAE] = 0x00;
 VAR_5->regs[0xAF] = 0x00;

 VAR_5->regs[0xB0] = 0x03;
 VAR_5->regs[0xB1] = 0xA0;
 VAR_5->regs[0x8C] = 0x20;
 VAR_5->regs[0x8D] = 0x04;
 VAR_5->regs[0xB9] = 0x1A;
 VAR_5->regs[0xBF] = 0x22;

 return 0;
}
