
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pclk_khz; int mclk_khz; int nvclk_khz; int mem_page_miss; int mem_latency; int memory_width; int enable_video; int pix_bpp; int enable_mp; } ;
typedef TYPE_1__ nv4_sim_state ;
struct TYPE_6__ {int valid; int graphics_lwm; int graphics_burst_size; int video_lwm; int video_burst_size; } ;
typedef TYPE_2__ nv4_fifo_info ;



__attribute__((used)) static void FUNC_0(nv4_fifo_info * VAR_0, nv4_sim_state * VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;

 VAR_0->valid = 1;
 VAR_21 = VAR_1->pclk_khz;
 VAR_20 = VAR_1->mclk_khz;
 VAR_22 = VAR_1->nvclk_khz;
 VAR_3 = VAR_1->mem_page_miss;
 VAR_4 = VAR_1->mem_latency;
 VAR_5 = VAR_1->memory_width >> 6;
 VAR_6 = VAR_1->enable_video;
 VAR_7 = VAR_1->pix_bpp;
 VAR_23 = VAR_1->enable_mp;
 VAR_35 = 0;
 VAR_31 = 0;
 VAR_17 = 128;
 VAR_10 = 2;
 VAR_8 = 2;
 VAR_8 += 2;
 VAR_8 += 1;
 VAR_9 = 5;
 VAR_9 += 3;
 VAR_9 += 1;
 VAR_9 += VAR_4;
 VAR_9 += 1;
 VAR_9 += 1;
 VAR_9 += 1;
 VAR_9 += 1;
 VAR_15 = 3;
 VAR_8 += 2;
 VAR_8 += 1;
 VAR_8 += 1;
 VAR_8 += 1;
 if (VAR_23)
  VAR_9 += 4;
 VAR_8 += 0;
 VAR_10 += 0;
 VAR_14 = 0;
 VAR_13 = 0;
 while (VAR_14 != 1) {
  VAR_0->valid = 1;
  VAR_14 = 1;
  VAR_16 = VAR_9 + VAR_15;
  VAR_24 = VAR_16 * 1000 * 1000 / VAR_20;
  VAR_25 = VAR_8 * 1000 * 1000 / VAR_22;
  VAR_26 = VAR_8 * 1000 * 1000 / VAR_21;
  if (VAR_6) {
   VAR_27 = VAR_21 * 2;
   VAR_28 = VAR_21 * VAR_7 / 8;
   VAR_11 = 2;
   VAR_11 += 1;
   VAR_12 = 2;
   VAR_29 =
       (VAR_11 * VAR_3) * 1000 * 1000 / VAR_20;
   if (VAR_22 * 2 > VAR_20 * VAR_5)
    VAR_32 =
        VAR_17 * 1000 * 1000 / 16 / VAR_22;
   else
    VAR_32 =
        VAR_17 * 1000 * 1000 / (8 * VAR_5) /
        VAR_20;
   VAR_30 = VAR_29 + VAR_24 + VAR_25 + VAR_26 + VAR_32;
   VAR_31 = VAR_30 * VAR_27 / (1000 * 1000);
   VAR_31++;
   VAR_13 = 128;
   if (VAR_31 > 128)
    VAR_13 = 64;
   if (VAR_31 > (256 - 64))
    VAR_13 = 32;
   if (VAR_22 * 2 > VAR_20 * VAR_5)
    VAR_32 =
        VAR_13 * 1000 * 1000 / 16 / VAR_22;
   else
    VAR_32 =
        VAR_13 * 1000 * 1000 / (8 * VAR_5) /
        VAR_20;
   VAR_33 =
       VAR_12 * VAR_3 * 1000 * 1000 / VAR_20;
   VAR_34 =
       VAR_30 + VAR_32 + VAR_33 + VAR_24 + VAR_25 +
       VAR_26;
   VAR_35 = VAR_34 * VAR_28 / (1000 * 1000);
   VAR_35++;
  } else {
   VAR_28 = VAR_21 * VAR_7 / 8;
   VAR_12 = 2;
   VAR_12 += 1;
   VAR_33 =
       VAR_12 * VAR_3 * 1000 * 1000 / VAR_20;
   VAR_34 = VAR_33 + VAR_24 + VAR_25 + VAR_26;
   VAR_35 = VAR_34 * VAR_28 / (1000 * 1000);
   VAR_35++;
  }
  VAR_18 = VAR_35 + VAR_17 - 512;
  VAR_19 = VAR_18 * VAR_21 / VAR_20;
  VAR_19 = VAR_19 * VAR_7 / 8;
  if ((VAR_19 < VAR_18) && (VAR_18 > 0)) {
   VAR_0->valid = 0;
   VAR_14 = 0;
   if (VAR_15 == 0)
    VAR_14 = 1;
   VAR_15--;
  } else if (VAR_6) {
   if ((VAR_35 > 511) || (VAR_31 > 255)) {
    VAR_0->valid = 0;
    VAR_14 = 0;
    if (VAR_15 == 0)
     VAR_14 = 1;
    VAR_15--;
   }
  } else {
   if (VAR_35 > 519) {
    VAR_0->valid = 0;
    VAR_14 = 0;
    if (VAR_15 == 0)
     VAR_14 = 1;
    VAR_15--;
   }
  }
  if (VAR_35 < 384)
   VAR_35 = 384;
  if (VAR_31 < 128)
   VAR_31 = 128;
  VAR_2 = (int)(VAR_35);
  VAR_0->graphics_lwm = VAR_2;
  VAR_0->graphics_burst_size = 128;
  VAR_2 = (int)((VAR_31 + 15));
  VAR_0->video_lwm = VAR_2;
  VAR_0->video_burst_size = VAR_13;
 }
}
