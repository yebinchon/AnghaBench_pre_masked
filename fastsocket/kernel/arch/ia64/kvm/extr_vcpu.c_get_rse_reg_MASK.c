
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_pt_regs {int cr_ifs; int loadrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 () ;
 unsigned long* FUNC_3 (unsigned long*) ;
 unsigned long FUNC_4 (unsigned long*) ;
 int FUNC_5 (int ,unsigned long) ;
 unsigned long* FUNC_6 (unsigned long*,long) ;
 long FUNC_7 (long,long,long) ;

__attribute__((used)) static void FUNC_8(struct kvm_pt_regs *VAR_5, unsigned long VAR_6,
     unsigned long *VAR_7, int *VAR_8)
{
 unsigned long *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 unsigned long *VAR_13 = (void *) VAR_4 + VAR_0;
 unsigned long VAR_14;
 unsigned long VAR_15, VAR_16;
 long VAR_17 = (VAR_5->cr_ifs) & 0x7f;
 long VAR_18 = (((VAR_5->cr_ifs >> 14) & 0xf) << 3);
 long VAR_19 = (VAR_5->cr_ifs >> 18) & 0x7f;
 long VAR_20 = VAR_6 - 32;

 if (VAR_20 < VAR_18)
  VAR_20 = FUNC_7(VAR_18, VAR_19, VAR_20);

 VAR_15 = FUNC_1(VAR_3);
 VAR_16 = VAR_15&(~(0x3));
 FUNC_5(VAR_3, VAR_16);

 VAR_12 = (unsigned long *)FUNC_1(VAR_1);
 VAR_9 = VAR_13 + (VAR_5->loadrs >> 19);

 VAR_10 = FUNC_6(VAR_9, -VAR_17 + VAR_20);
 VAR_14 = 1UL << FUNC_4(VAR_10);
 VAR_11 = FUNC_3(VAR_10);

 if (VAR_10 >= VAR_12) {
  FUNC_0();
  FUNC_2();
  VAR_12 = (unsigned long *)FUNC_1(VAR_1);
 }
 *VAR_7 = *VAR_10;
 if (VAR_8) {
  if (VAR_12 < VAR_11)
   *VAR_8 = (int)!!(FUNC_1(VAR_2)
       & VAR_14);
  else
   *VAR_8 = (int)!!((*VAR_11) & VAR_14);
  FUNC_5(VAR_3, VAR_15);
 }
}
