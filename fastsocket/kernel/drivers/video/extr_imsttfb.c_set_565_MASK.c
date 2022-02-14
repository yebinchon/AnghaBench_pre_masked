
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imstt_par {scalar_t__ ramdac; int* cmap_regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void
FUNC_1 (struct imstt_par *VAR_8)
{
 if (VAR_8->ramdac == VAR_1) {
  VAR_8->cmap_regs[VAR_3] = 0; FUNC_0();
  VAR_8->cmap_regs[VAR_4] = VAR_0; FUNC_0();
  VAR_8->cmap_regs[VAR_2] = 0x03; FUNC_0();
 } else {
  VAR_8->cmap_regs[VAR_5] = VAR_7; FUNC_0();
  VAR_8->cmap_regs[VAR_6] = 0x45; FUNC_0();
 }
}
