
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct yuv_playback_info {int decode_height; int v_filter_1; int v_filter_2; int reg_289c; int reg_2968; int reg_2964; int reg_2960; int reg_295c; int reg_2958; int reg_2954; int reg_2950; int reg_2948; int reg_2940; int reg_296c; int reg_291c; int reg_2918; int reg_2924; int reg_2920; int reg_292c; int reg_2928; int reg_2938; int reg_2930; int reg_294c; int reg_2944; int reg_293c; int reg_2934; } ;
struct yuv_frame_info {int src_h; int dst_h; int src_y; int dst_y; scalar_t__ interlaced_uv; scalar_t__ interlaced_y; scalar_t__ offset_y; scalar_t__ interlaced; int tru_h; } ;
struct ivtv {struct yuv_playback_info yuv_info; } ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (struct ivtv*,int,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct ivtv *VAR_0, struct yuv_frame_info *VAR_1)
{
 struct yuv_playback_info *VAR_2 = &VAR_0->yuv_info;
 u32 VAR_3;
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 u32 VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
 u32 VAR_22;
 u32 VAR_23, VAR_24;
 u32 VAR_25, VAR_26;
 u32 VAR_27, VAR_28;
 int VAR_29, VAR_30;

 FUNC_0
     ("Adjust to height %d src_h %d dst_h %d src_y %d dst_y %d\n",
      VAR_1->tru_h, VAR_1->src_h, VAR_1->dst_h, VAR_1->src_y, VAR_1->dst_y);


 FUNC_1("Scaling mode Y: %s\n",
         VAR_1->interlaced_y ? "Interlaced" : "Progressive");

 FUNC_1("Scaling mode UV: %s\n",
         VAR_1->interlaced_uv ? "Interlaced" : "Progressive");


 FUNC_0("Source video: %s\n",
   VAR_1->interlaced ? "Interlaced" : "Progressive");



 if (VAR_1->src_y < 8) {
  VAR_26 = VAR_1->src_y;
  VAR_25 = 0;
 } else {
  VAR_26 = 8;
  VAR_25 = VAR_1->src_y - 8;
 }

 VAR_24 = VAR_26;
 VAR_23 = VAR_25;

 if (VAR_1->offset_y)
  VAR_24 += 16;

 if (VAR_1->interlaced_y)
  VAR_4 = (VAR_1->dst_h << 16) | (VAR_1->src_h + VAR_24);
 else
  VAR_4 = (VAR_1->dst_h << 16) | ((VAR_1->src_h + VAR_24) << 1);

 if (VAR_1->interlaced_uv)
  VAR_5 = (VAR_1->dst_h << 16) | ((VAR_1->src_h + VAR_26) >> 1);
 else
  VAR_5 = (VAR_1->dst_h << 16) | (VAR_1->src_h + VAR_26);

 VAR_27 = (VAR_24 * ((VAR_1->dst_h << 16) / VAR_1->src_h)) >> 14;
 VAR_28 = (VAR_26 * ((VAR_1->dst_h << 16) / VAR_1->src_h)) >> 14;

 if (VAR_1->dst_h / 2 >= VAR_1->src_h && !VAR_1->interlaced_y) {
  VAR_3 = (VAR_1->src_h * 0x00400000) / VAR_1->dst_h;
  if ((VAR_1->src_h * 0x00400000) - (VAR_3 * VAR_1->dst_h) >= VAR_1->dst_h / 2)
   VAR_3++;
  VAR_6 = VAR_3 >> 2;
  VAR_7 = VAR_3 >> 3;
  VAR_8 = VAR_3;
  VAR_11 = VAR_3 >> 1;
  VAR_27 >>= 3;
  VAR_28 >>= 3;
  VAR_21 = 0x00000000;
 } else if (VAR_1->dst_h >= VAR_1->src_h) {
  VAR_3 = (VAR_1->src_h * 0x00400000) / VAR_1->dst_h;
  VAR_3 = (VAR_3 >> 1) + (VAR_3 & 1);
  VAR_6 = VAR_3 >> 2;
  VAR_7 = VAR_3 >> 2;
  VAR_8 = VAR_3;
  VAR_11 = VAR_3 >> 1;
  VAR_21 = 0x00000000;
  if (VAR_1->interlaced_y) {
   VAR_27 >>= 3;
  } else {
   VAR_21++;
   VAR_27 >>= 2;
  }
  if (VAR_1->interlaced_uv)
   VAR_7 >>= 1;
  VAR_28 >>= 3;
 } else if (VAR_1->dst_h >= VAR_1->src_h / 2) {
  VAR_3 = (VAR_1->src_h * 0x00200000) / VAR_1->dst_h;
  VAR_3 = (VAR_3 >> 1) + (VAR_3 & 1);
  VAR_6 = VAR_3 >> 2;
  VAR_7 = VAR_3 >> 2;
  VAR_8 = VAR_3;
  VAR_11 = VAR_3;
  VAR_21 = 0x00000101;
  if (VAR_1->interlaced_y) {
   VAR_27 >>= 2;
  } else {
   VAR_21++;
   VAR_27 >>= 1;
  }
  if (VAR_1->interlaced_uv)
   VAR_7 >>= 1;
  VAR_28 >>= 2;
 } else {
  VAR_3 = (VAR_1->src_h * 0x00100000) / VAR_1->dst_h;
  VAR_3 = (VAR_3 >> 1) + (VAR_3 & 1);
  VAR_6 = VAR_3 >> 2;
  VAR_7 = VAR_3 >> 2;
  VAR_8 = VAR_3;
  VAR_11 = VAR_3;
  VAR_27 >>= 1;
  VAR_28 >>= 2;
  VAR_21 = 0x00000102;
 }



 if (VAR_1->src_h == VAR_1->dst_h) {
  VAR_9 = 0x00020000;
  VAR_10 = 0x00100000;
  VAR_12 = 0x00040000;
  VAR_13 = 0x000b0000;
 } else {
  VAR_9 = 0x00000FF0;
  VAR_10 = 0x00000FF0;
  VAR_12 = 0x00000FF0;
  VAR_13 = 0x00000FF0;
 }


 VAR_14 = 0x00010000 + VAR_23;
 if (VAR_1->interlaced_y)
  VAR_14 += 0x00010000;
 VAR_15 = VAR_14 + 1;

 VAR_16 = 0x00010000 + (VAR_23 >> 1);
 if (VAR_1->interlaced_uv)
  VAR_16 += 0x00010000;
 VAR_17 = VAR_16 + 1;

 if (VAR_2->decode_height == 480)
  VAR_22 = 0x011e0017;
 else
  VAR_22 = 0x01500017;

 if (VAR_1->dst_y < 0)
  VAR_22 = (VAR_22 - ((VAR_1->dst_y & ~1)<<15))-(VAR_1->dst_y >>1);
 else
  VAR_22 = (VAR_22 + ((VAR_1->dst_y & ~1)<<15))+(VAR_1->dst_y >>1);



 VAR_18 = ((VAR_24 + VAR_1->src_h + VAR_23) - 1) |
  (((VAR_26 + VAR_1->src_h + VAR_25 - 1) & ~1) << 15);


 if (VAR_1->src_h == VAR_1->dst_h) {
  VAR_19 = 1;
 } else {
  VAR_19 = 2 + ((VAR_1->dst_h << 1) / VAR_1->src_h);
  VAR_19 = (VAR_19 >> 1) + (VAR_19 & 1);
 }
 VAR_20 = (VAR_19 << 16) + VAR_19 + (VAR_19 >> 1);
 VAR_19 = (VAR_19 << 16) + VAR_19 + (VAR_19 * 46 / 94);




 VAR_19 = 0x00010001 + ((VAR_19 & 0x0000FFFF) - (VAR_19 >> 16));
 VAR_20 = 0x00010001 + ((VAR_20 & 0x0000FFFF) - (VAR_20 >> 16));




 if ((VAR_19 != 0x00010001) && (VAR_1->dst_h / 2 <= VAR_1->src_h))
  VAR_19 = (VAR_19 & 0xFFFF0000) + ((VAR_19 & 0x0000FFFF) / 2);

 if (!VAR_1->interlaced_y)
  VAR_19 -= 0x00010001;
 if (!VAR_1->interlaced_uv)
  VAR_20 -= 0x00010001;

 VAR_19 += ((VAR_27 << 16) | VAR_27);
 VAR_20 += ((VAR_28 << 16) | VAR_28);


 if (VAR_1->src_h == VAR_1->dst_h) {

  VAR_29 = 0;
  VAR_30 = 1;
 } else {

  VAR_29 = ((VAR_1->src_h << 16) / VAR_1->dst_h) >> 15;
  VAR_29 = (VAR_29 >> 1) + (VAR_29 & 1);

  VAR_29 += !VAR_29;
  VAR_30 = VAR_29;
 }

 FUNC_3(VAR_9, 0x02934);
 FUNC_3(VAR_10, 0x0293c);
 FUNC_1("Update reg 0x2934 %08x->%08x 0x293c %08x->%08x\n",
         VAR_2->reg_2934, VAR_9, VAR_2->reg_293c, VAR_10);
 FUNC_3(VAR_12, 0x02944);
 FUNC_3(VAR_13, 0x0294c);
 FUNC_1("Update reg 0x2944 %08x->%08x 0x294c %08x->%08x\n",
         VAR_2->reg_2944, VAR_12, VAR_2->reg_294c, VAR_13);





 FUNC_3(VAR_8, 0x02938);
 FUNC_3(VAR_8, 0x02930);
 FUNC_1("Update reg 0x2930 %08x->%08x 0x2938 %08x->%08x\n",
         VAR_2->reg_2930, VAR_8, VAR_2->reg_2938, VAR_8);

 FUNC_3(VAR_7, 0x02928);
 FUNC_3(VAR_7 + 0x514, 0x0292C);
 FUNC_1("Update reg 0x2928 %08x->%08x 0x292c %08x->%08x\n",
         VAR_2->reg_2928, VAR_7, VAR_2->reg_292c, VAR_7 + 0x514);

 FUNC_3(VAR_6, 0x02920);
 FUNC_3(VAR_6 + 0x514, 0x02924);
 FUNC_1("Update reg 0x2920 %08x->%08x 0x2924 %08x->%08x\n",
         VAR_2->reg_2920, VAR_6, VAR_2->reg_2924, VAR_6 + 0x514);

 FUNC_3(VAR_4, 0x02918);
 FUNC_3(VAR_5, 0x0291C);
 FUNC_1("Update reg 0x2918 %08x->%08x 0x291C %08x->%08x\n",
         VAR_2->reg_2918, VAR_4, VAR_2->reg_291c, VAR_5);

 FUNC_3(VAR_21, 0x0296c);
 FUNC_1("Update reg 0x296c %08x->%08x\n",
         VAR_2->reg_296c, VAR_21);

 FUNC_3(VAR_11, 0x02948);
 FUNC_3(VAR_11, 0x02940);
 FUNC_1("Update reg 0x2940 %08x->%08x 0x2948 %08x->%08x\n",
         VAR_2->reg_2940, VAR_11, VAR_2->reg_2948, VAR_11);

 FUNC_3(VAR_14, 0x02950);
 FUNC_3(VAR_15, 0x02954);
 FUNC_1("Update reg 0x2950 %08x->%08x 0x2954 %08x->%08x\n",
         VAR_2->reg_2950, VAR_14, VAR_2->reg_2954, VAR_15);

 FUNC_3(VAR_16, 0x02958);
 FUNC_3(VAR_17, 0x0295C);
 FUNC_1("Update reg 0x2958 %08x->%08x 0x295C %08x->%08x\n",
         VAR_2->reg_2958, VAR_16, VAR_2->reg_295c, VAR_17);

 FUNC_3(VAR_18, 0x02960);
 FUNC_1("Update reg 0x2960 %08x->%08x \n",
         VAR_2->reg_2960, VAR_18);

 FUNC_3(VAR_19, 0x02964);
 FUNC_3(VAR_20, 0x02968);
 FUNC_1("Update reg 0x2964 %08x->%08x 0x2968 %08x->%08x\n",
         VAR_2->reg_2964, VAR_19, VAR_2->reg_2968, VAR_20);

 FUNC_3(VAR_22, 0x0289c);
 FUNC_1("Update reg 0x289c %08x->%08x\n",
         VAR_2->reg_289c, VAR_22);


 if (VAR_29 != VAR_2->v_filter_1) {
  FUNC_2(VAR_0, -1, VAR_29, -1);
  VAR_2->v_filter_1 = VAR_29;
 }


 if (VAR_30 != VAR_2->v_filter_2) {
  FUNC_2(VAR_0, -1, -1, VAR_30);
  VAR_2->v_filter_2 = VAR_30;
 }
}
