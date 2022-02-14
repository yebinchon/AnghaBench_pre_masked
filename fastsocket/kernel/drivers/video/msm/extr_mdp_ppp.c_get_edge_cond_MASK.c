
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mdp_regs {int edge; int op; } ;
struct TYPE_4__ {scalar_t__ format; } ;
struct TYPE_6__ {int h; int y; int w; int x; } ;
struct TYPE_5__ {int h; int w; } ;
struct mdp_blit_req {int flags; TYPE_1__ src; TYPE_3__ src_rect; TYPE_2__ dst_rect; } ;
typedef int int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int,int,int ,int*,int*,int*,int*) ;
 int FUNC_2 (int**,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mdp_blit_req *VAR_17, struct mdp_regs *VAR_18)
{
 int32_t VAR_19[4];
 int32_t VAR_20[4];
 int32_t VAR_21[4];
 int32_t VAR_22[4];
 int32_t VAR_23[4];
 uint32_t VAR_24, VAR_25;

 FUNC_2(&VAR_19, 0, sizeof(int32_t) * 4);
 FUNC_2(&VAR_20, 0, sizeof(int32_t) * 4);
 FUNC_2(&VAR_21, 0, sizeof(int32_t) * 4);
 FUNC_2(&VAR_22, 0, sizeof(int32_t) * 4);
 FUNC_2(&VAR_23, 0, sizeof(int32_t) * 4);
 VAR_18->edge = 0;

 if (VAR_17->flags & VAR_10) {
  VAR_24 = VAR_17->dst_rect.h;
  VAR_25 = VAR_17->dst_rect.w;
 } else {
  VAR_24 = VAR_17->dst_rect.w;
  VAR_25 = VAR_17->dst_rect.h;
 }

 if (VAR_18->op & (VAR_16 | VAR_15)) {
  FUNC_1(VAR_17->src_rect.h, VAR_17->src_rect.y, VAR_25,
         &VAR_19[VAR_3], &VAR_19[VAR_0],
         &VAR_20[VAR_3], &VAR_20[VAR_0]);
  FUNC_1(VAR_17->src_rect.w, VAR_17->src_rect.x, VAR_24,
         &VAR_19[VAR_1], &VAR_19[VAR_2],
         &VAR_20[VAR_1], &VAR_20[VAR_2]);
 } else {
  VAR_19[VAR_1] = VAR_17->src_rect.x;
  VAR_19[VAR_2] = VAR_17->src_rect.x + VAR_17->src_rect.w - 1;
  VAR_19[VAR_3] = VAR_17->src_rect.y;
  VAR_19[VAR_0] = VAR_17->src_rect.y + VAR_17->src_rect.h - 1;
  VAR_20[VAR_1] = 0;
  VAR_20[VAR_3] = 0;
  VAR_20[VAR_2] = 0;
  VAR_20[VAR_0] = 0;
 }

 VAR_21[VAR_1] = VAR_19[VAR_1];
 VAR_21[VAR_2] = VAR_19[VAR_2];
 VAR_21[VAR_3] = VAR_19[VAR_3];
 VAR_21[VAR_0] = VAR_19[VAR_0];

 VAR_22[VAR_1] = VAR_17->src_rect.x;
 VAR_22[VAR_2] = VAR_17->src_rect.x + VAR_17->src_rect.w - 1;
 VAR_22[VAR_3] = VAR_17->src_rect.y;
 VAR_22[VAR_0] = VAR_17->src_rect.y + VAR_17->src_rect.h - 1;

 if (FUNC_0(VAR_17->src.format)) {
  VAR_21[VAR_1] = VAR_21[VAR_1] >> 1;
  VAR_21[VAR_2] = (VAR_21[VAR_2] + 1) >> 1;

  VAR_22[VAR_1] = VAR_22[VAR_1] >> 1;
  VAR_22[VAR_2] = VAR_22[VAR_2] >> 1;
 }

 if (VAR_17->src.format == VAR_13 ||
     VAR_17->src.format == VAR_14) {
  VAR_21[VAR_3] = (VAR_21[VAR_3] - 1) >> 1;
  VAR_21[VAR_0] = (VAR_21[VAR_0] + 1)
         >> 1;
  VAR_22[VAR_3] = (VAR_22[VAR_3] + 1) >> 1;
  VAR_22[VAR_0] = VAR_22[VAR_0] >> 1;
 }

 VAR_23[VAR_1] = VAR_22[VAR_1] -
      VAR_21[VAR_1];
 VAR_23[VAR_2] = VAR_21[VAR_2] -
      VAR_22[VAR_2];
 VAR_23[VAR_3] = VAR_22[VAR_3] -
      VAR_21[VAR_3];
 VAR_23[VAR_0] = VAR_21[VAR_0] -
      VAR_22[VAR_0];

 if (VAR_23[VAR_1] < 0 || VAR_23[VAR_1] > 3 ||
     VAR_23[VAR_2] < 0 || VAR_23[VAR_2] > 3 ||
     VAR_23[VAR_3] < 0 || VAR_23[VAR_3] > 3 ||
     VAR_23[VAR_0] < 0 || VAR_23[VAR_0] > 3 ||
     VAR_20[VAR_1] < 0 || VAR_20[VAR_1] > 3 ||
     VAR_20[VAR_2] < 0 || VAR_20[VAR_2] > 3 ||
     VAR_20[VAR_3] < 0 || VAR_20[VAR_3] > 3 ||
     VAR_20[VAR_0] < 0 || VAR_20[VAR_0] > 3)
  return -1;

 VAR_18->edge |= (VAR_23[VAR_1] & 3) << VAR_6;
 VAR_18->edge |= (VAR_23[VAR_2] & 3) << VAR_8;
 VAR_18->edge |= (VAR_23[VAR_3] & 3) << VAR_11;
 VAR_18->edge |= (VAR_23[VAR_0] & 3) << VAR_4;
 VAR_18->edge |= (VAR_20[VAR_1] & 3) << VAR_7;
 VAR_18->edge |= (VAR_20[VAR_2] & 3) << VAR_9;
 VAR_18->edge |= (VAR_20[VAR_3] & 3) << VAR_12;
 VAR_18->edge |= (VAR_20[VAR_0] & 3) << VAR_5;
 return 0;
}
