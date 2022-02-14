
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mdp_regs {int phasex_init; int phasey_init; int phasex_step; int phasey_step; int op; } ;
struct mdp_info {int dummy; } ;
struct TYPE_4__ {int w; int h; } ;
struct TYPE_3__ {int h; int w; } ;
struct mdp_blit_req {int flags; TYPE_2__ src_rect; TYPE_1__ dst_rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mdp_info const*,int ,int) ;
 int * VAR_10 ;
 int * VAR_11 ;
 scalar_t__ FUNC_1 (int,int,int,int*,int*) ;

__attribute__((used)) static int FUNC_2(const struct mdp_info *VAR_12, struct mdp_blit_req *VAR_13,
        struct mdp_regs *VAR_14)
{
 uint32_t VAR_15, VAR_16, VAR_17, VAR_18;
 uint32_t VAR_19, VAR_20;
 uint32_t VAR_21;
 uint32_t VAR_22, VAR_23;

 if (VAR_13->flags & VAR_5) {
  VAR_22 = VAR_13->dst_rect.h;
  VAR_23 = VAR_13->dst_rect.w;
 } else {
  VAR_22 = VAR_13->dst_rect.w;
  VAR_23 = VAR_13->dst_rect.h;
 }
 if ((VAR_13->src_rect.w == VAR_22) && (VAR_13->src_rect.h == VAR_23) &&
     !(VAR_13->flags & VAR_0)) {
  VAR_14->phasex_init = 0;
  VAR_14->phasey_init = 0;
  VAR_14->phasex_step = 0;
  VAR_14->phasey_step = 0;
  return 0;
 }

 if (FUNC_1(VAR_13->src_rect.w, VAR_22, 1, &VAR_15,
    &VAR_17) ||
     FUNC_1(VAR_13->src_rect.h, VAR_23, 1, &VAR_16,
    &VAR_18))
  return -1;

 VAR_19 = (VAR_22 * 10) / VAR_13->src_rect.w;
 VAR_20 = (VAR_23 * 10) / VAR_13->src_rect.h;

 if (VAR_19 > 8)
  VAR_21 = VAR_4;
 else if (VAR_19 > 6)
  VAR_21 = VAR_3;
 else if (VAR_19 > 4)
  VAR_21 = VAR_2;
 else
  VAR_21 = VAR_1;
 if (VAR_21 != VAR_8) {
  FUNC_0(VAR_12, VAR_10[VAR_21], 64);
  VAR_8 = VAR_21;
 }

 if (VAR_20 > 8)
  VAR_21 = VAR_4;
 else if (VAR_20 > 6)
  VAR_21 = VAR_3;
 else if (VAR_20 > 4)
  VAR_21 = VAR_2;
 else
  VAR_21 = VAR_1;
 if (VAR_21 != VAR_9) {
  FUNC_0(VAR_12, VAR_11[VAR_21], 64);
  VAR_9 = VAR_21;
 }

 VAR_14->phasex_init = VAR_15;
 VAR_14->phasey_init = VAR_16;
 VAR_14->phasex_step = VAR_17;
 VAR_14->phasey_step = VAR_18;
 VAR_14->op |= (VAR_7 | VAR_6);
 return 0;

}
