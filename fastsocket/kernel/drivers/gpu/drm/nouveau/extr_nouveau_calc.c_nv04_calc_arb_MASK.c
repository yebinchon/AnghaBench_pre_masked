
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv_sim_state {int pclk_khz; int mclk_khz; int nvclk_khz; int mem_page_miss; int mem_latency; int memory_width; int bpp; } ;
struct nv_fifo_info {int lwm; int burst; } ;



__attribute__((used)) static void
FUNC_0(struct nv_fifo_info *VAR_0, struct nv_sim_state *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25;

 VAR_17 = VAR_1->pclk_khz;
 VAR_16 = VAR_1->mclk_khz;
 VAR_18 = VAR_1->nvclk_khz;
 VAR_2 = VAR_1->mem_page_miss;
 VAR_3 = VAR_1->mem_latency;
 VAR_4 = VAR_1->memory_width >> 6;
 VAR_5 = VAR_1->bpp;
 VAR_13 = 128;

 VAR_8 = 2;
 VAR_6 = 10;
 VAR_7 = 13 + VAR_3;
 VAR_11 = 3;
 VAR_10 = 0;

 while (!VAR_10) {
  VAR_10 = 1;

  VAR_12 = VAR_7 + VAR_11;
  VAR_19 = VAR_12 * 1000 * 1000 / VAR_16;
  VAR_20 = VAR_6 * 1000 * 1000 / VAR_18;
  VAR_21 = VAR_6 * 1000 * 1000 / VAR_17;

  VAR_22 = VAR_17 * VAR_5 / 8;
  VAR_9 = 2;
  VAR_9 += 1;
  VAR_23 = VAR_9 * VAR_2 * 1000 * 1000 / VAR_16;
  VAR_24 = VAR_23 + VAR_19 + VAR_20 + VAR_21;
  VAR_25 = VAR_24 * VAR_22 / (1000 * 1000);
  VAR_25++;

  VAR_14 = VAR_25 + VAR_13 - 512;
  VAR_15 = VAR_14 * VAR_17 / VAR_16;
  VAR_15 = VAR_15 * VAR_5 / 8;
  if ((VAR_15 < VAR_14 && VAR_14 > 0) || VAR_25 > 519) {
   VAR_10 = !VAR_11;
   VAR_11--;
  }
  if (VAR_25 < 384)
   VAR_25 = 384;

  VAR_0->lwm = VAR_25;
  VAR_0->burst = VAR_13;
 }
}
