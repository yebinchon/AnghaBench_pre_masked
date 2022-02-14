
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_frame_info {int dummy; } ;
struct task_struct {int dummy; } ;
struct pt_regs {unsigned long ar_rsc; unsigned long ar_bspstore; unsigned long ar_rnat; unsigned long ar_ccv; unsigned long ar_unat; unsigned long ar_fpsr; unsigned long ar_pfs; unsigned long ar_csd; unsigned long ar_ssd; unsigned long cr_iip; unsigned long cr_ifs; unsigned long cr_ipsr; unsigned long pr; int loadrs; } ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct task_struct*,struct pt_regs*,struct unw_frame_info*,unsigned long*,int) ;
 int FUNC_1 (struct task_struct*,struct pt_regs*,unsigned long) ;
 unsigned long FUNC_2 (struct task_struct*,struct pt_regs*,unsigned long*) ;
 int FUNC_3 (struct pt_regs*) ;
 struct pt_regs* FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct unw_frame_info*,int ,unsigned long*,int) ;

__attribute__((used)) static int
FUNC_6(struct task_struct *VAR_7, struct unw_frame_info *VAR_8,
  unsigned long VAR_9, unsigned long *VAR_10, int VAR_11)
{
 struct pt_regs *VAR_12;
 unsigned long VAR_13, VAR_14;
 unsigned long *VAR_15 = ((void*)0);

 VAR_12 = FUNC_4(VAR_7);
 if (VAR_9 >= 133 && VAR_9 <= 132) {
  switch (VAR_9) {
  case 133:

   if (VAR_11)
    VAR_12->ar_rsc = *VAR_10 | (3 << 2);
   else
    *VAR_10 = VAR_12->ar_rsc;
   return 0;
  case 141:
   VAR_14 = FUNC_2(VAR_7, VAR_12, &VAR_13);
   if (VAR_11) {
    if (*VAR_10 != VAR_14) {
     if (FUNC_3(VAR_12))
      FUNC_1(VAR_7,
               VAR_12,
               VAR_13);




     VAR_12->loadrs = 0;
     VAR_12->ar_bspstore = *VAR_10;
    }
   } else
    *VAR_10 = VAR_14;
   return 0;
  case 142:
   VAR_15 = &VAR_12->ar_bspstore;
   break;
  case 134:
   VAR_15 = &VAR_12->ar_rnat;
   break;
  case 140:
   VAR_15 = &VAR_12->ar_ccv;
   break;
  case 131:
   VAR_15 = &VAR_12->ar_unat;
   break;
  case 137:
   VAR_15 = &VAR_12->ar_fpsr;
   break;
  case 135:
   VAR_15 = &VAR_12->ar_pfs;
   break;
  case 136:
   return FUNC_5(VAR_8, VAR_6, VAR_10,
          VAR_11);
  case 138:
   return FUNC_5(VAR_8, VAR_5, VAR_10,
          VAR_11);
  case 139:
   VAR_15 = &VAR_12->ar_csd;
   break;
  case 132:
   VAR_15 = &VAR_12->ar_ssd;
  }
 } else if (VAR_9 >= 129 && VAR_9 <= 128) {
  switch (VAR_9) {
  case 129:
   VAR_15 = &VAR_12->cr_iip;
   break;
  case 130:
   VAR_14 = FUNC_2(VAR_7, VAR_12, &VAR_13);
   if (VAR_11) {
    if (((VAR_13 ^ *VAR_10) & VAR_4) != 0) {
     if (FUNC_3(VAR_12))
      FUNC_1(VAR_7,
               VAR_12,
               VAR_13);
     VAR_12->cr_ifs = ((VAR_12->cr_ifs & ~VAR_4)
            | (*VAR_10 & VAR_4));
    }
   } else
    *VAR_10 = VAR_13;
   return 0;
  case 128:
   if (VAR_11) {
    unsigned long VAR_16 = *VAR_10;

    if ((VAR_16 & VAR_2) == VAR_2)
     VAR_16 &= ~VAR_2;
    VAR_12->cr_ipsr = ((VAR_16 & VAR_3)
            | (VAR_12->cr_ipsr & ~VAR_3));
   } else
    *VAR_10 = (VAR_12->cr_ipsr & VAR_3);
   return 0;
  }
 } else if (VAR_9 == VAR_0)
  return FUNC_0(VAR_7, VAR_12, VAR_8,
           VAR_10, VAR_11);
 else if (VAR_9 == VAR_1)
  VAR_15 = &VAR_12->pr;
 else
  return -1;

 if (VAR_11)
  *VAR_15 = *VAR_10;
 else
  *VAR_10 = *VAR_15;

 return 0;
}
