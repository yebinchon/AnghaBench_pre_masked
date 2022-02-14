
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ full; } ;
struct dce6_wm_params {int disp_clk; int num_heads; int vtaps; int bytes_per_pixel; int src_width; int active_time; scalar_t__ interlaced; TYPE_1__ vsc; } ;
struct TYPE_9__ {scalar_t__ full; } ;
typedef TYPE_2__ fixed20_12 ;


 int FUNC_0 (struct dce6_wm_params*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (TYPE_2__,TYPE_2__) ;
 scalar_t__ FUNC_3 (TYPE_2__,TYPE_2__) ;
 int FUNC_4 (TYPE_2__) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static u32 FUNC_6(struct dce6_wm_params *VAR_0)
{

 u32 VAR_1 = 2000;
 u32 VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = (512 * 8 * 1000) / VAR_2;
 u32 VAR_4 = (128 * 4 * 1000) / VAR_2;
 u32 VAR_5 = 40000000 / VAR_0->disp_clk;
 u32 VAR_6 = ((VAR_0->num_heads + 1) * VAR_3) +
  (VAR_0->num_heads * VAR_4);
 u32 VAR_7 = VAR_1 + VAR_6 + VAR_5;
 u32 VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12 = 12288;
 fixed20_12 VAR_13, VAR_14, VAR_15;

 if (VAR_0->num_heads == 0)
  return 0;

 VAR_13.full = FUNC_1(2);
 VAR_14.full = FUNC_1(1);
 if ((VAR_0->vsc.full > VAR_13.full) ||
     ((VAR_0->vsc.full > VAR_14.full) && (VAR_0->vtaps >= 3)) ||
     (VAR_0->vtaps >= 5) ||
     ((VAR_0->vsc.full >= VAR_13.full) && VAR_0->interlaced))
  VAR_8 = 4;
 else
  VAR_8 = 2;

 VAR_13.full = FUNC_1(VAR_2);
 VAR_14.full = FUNC_1(VAR_0->num_heads);
 VAR_13.full = FUNC_2(VAR_13, VAR_14);

 VAR_14.full = FUNC_1(VAR_1 + 512);
 VAR_15.full = FUNC_1(VAR_0->disp_clk);
 VAR_14.full = FUNC_2(VAR_14, VAR_15);

 VAR_15.full = FUNC_1(VAR_12);
 VAR_14.full = FUNC_2(VAR_15, VAR_14);

 VAR_11 = FUNC_5(FUNC_4(VAR_13), FUNC_4(VAR_14));

 VAR_14.full = FUNC_1(1000);
 VAR_15.full = FUNC_1(VAR_0->disp_clk);
 VAR_14.full = FUNC_2(VAR_15, VAR_14);
 VAR_15.full = FUNC_1(VAR_0->bytes_per_pixel);
 VAR_14.full = FUNC_3(VAR_14, VAR_15);

 VAR_9 = FUNC_5(VAR_11, FUNC_4(VAR_14));

 VAR_13.full = FUNC_1(VAR_8 * VAR_0->src_width * VAR_0->bytes_per_pixel);
 VAR_14.full = FUNC_1(1000);
 VAR_15.full = FUNC_1(VAR_9);
 VAR_14.full = FUNC_2(VAR_15, VAR_14);
 VAR_13.full = FUNC_2(VAR_13, VAR_14);
 VAR_10 = FUNC_4(VAR_13);

 if (VAR_10 < VAR_0->active_time)
  return VAR_7;
 else
  return VAR_7 + (VAR_10 - VAR_0->active_time);

}
