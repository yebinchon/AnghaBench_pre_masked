
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t cpu; int fpexc; int fpscr; } ;
union vfp_state {TYPE_1__ hard; } ;
typedef int u32 ;
struct thread_info {size_t cpu; union vfp_state vfpstate; } ;
struct notifier_block {int dummy; } ;
typedef size_t __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 union vfp_state** VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (union vfp_state*,int ,int) ;
 int FUNC_4 (union vfp_state*,int) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_7, unsigned long VAR_8, void *VAR_9)
{
 struct thread_info *VAR_10 = VAR_9;
 union vfp_state *VAR_11;
 __u32 VAR_12 = VAR_10->cpu;

 if (FUNC_2(VAR_8 == VAR_5)) {
  u32 VAR_13 = FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_13 & ~VAR_1);
  return VAR_3;
 }

 VAR_11 = &VAR_10->vfpstate;
 if (VAR_8 == VAR_4) {



  FUNC_3(VAR_11, 0, sizeof(union vfp_state));

  VAR_11->hard.fpexc = VAR_1;
  VAR_11->hard.fpscr = VAR_2;




  FUNC_1(VAR_0, FUNC_0(VAR_0) & ~VAR_1);
 }


 if (VAR_6[VAR_12] == VAR_11)
  VAR_6[VAR_12] = ((void*)0);

 return VAR_3;
}
