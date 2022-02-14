
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u64 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {int std; int slicer_line_delay; int slicer_line_offset; struct v4l2_subdev sd; } ;
struct cx18 {struct cx18_av_state av_state; } ;


 int FUNC_0 (struct v4l2_subdev*,char*,int const,int const,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cx18*,int) ;
 int FUNC_2 (struct cx18*,int) ;
 int FUNC_3 (struct cx18*,int,int) ;
 int FUNC_4 (int,int const) ;

void FUNC_5(struct cx18 *VAR_6)
{
 struct cx18_av_state *VAR_7 = &VAR_6->av_state;
 struct v4l2_subdev *VAR_8 = &VAR_7->sd;
 v4l2_std_id VAR_9 = VAR_7->std;





 const int VAR_10 = 0x21f;

 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;
 int VAR_18, VAR_19, VAR_20;
 u32 VAR_21, VAR_22, VAR_23;


 if (VAR_9 & ~VAR_1)
  FUNC_3(VAR_6, 0x49f, 0x11);
 else
  FUNC_3(VAR_6, 0x49f, 0x14);
 if (VAR_9 & VAR_0) {
  VAR_17 = 48;
  VAR_14 = 38;
  VAR_15 = 579;
  VAR_11 = 132;
  VAR_12 = 720;
  VAR_13 = 93;
  VAR_18 = 2;
  if (VAR_9 & VAR_2) {
   VAR_19 = 1;
   VAR_20 = 0x20;

   VAR_16 = 688700;
  } else if (VAR_9 == VAR_5) {
   VAR_19 = 1;
   VAR_20 = 0x20;

   VAR_16 = 556422;
  } else {
   VAR_19 = 0;
   VAR_20 = 0;


   VAR_16 = 672314;
  }
 } else {
  VAR_17 = 38;
  VAR_14 = 26;
  VAR_15 = 481;
  VAR_12 = 720;
  VAR_11 = 122;
  VAR_18 = 1;
  VAR_19 = 1;
  if (VAR_9 == VAR_3) {
   VAR_13 = 90;
   VAR_18 = 2;
   VAR_20 = 0x20;

   VAR_16 = 688700;
  } else if (VAR_9 == VAR_4) {

   VAR_13 = 97;
   VAR_20 = 0x20;

   VAR_16 = 555421;
  } else {
   VAR_13 = 90;
   VAR_20 = 0x66;

   VAR_16 = 556032;
  }
 }


 VAR_21 = FUNC_1(VAR_6, 0x108);
 VAR_22 = FUNC_2(VAR_6, 0x10c) & 0x1ffffff;
 VAR_23 = FUNC_1(VAR_6, 0x109);
 FUNC_0(VAR_8, "PLL regs = int: %u, frac: %u, post: %u\n",
       VAR_21, VAR_22, VAR_23);

 if (VAR_23) {
  int VAR_24, VAR_25;
  u64 VAR_26;

  VAR_25 = (28636360L * ((((u64)VAR_21) << 25) + VAR_22)) >> 25;
  VAR_25 /= VAR_23;
  FUNC_0(VAR_8, "Video PLL = %d.%06d MHz\n",
        VAR_25 / 1000000, VAR_25 % 1000000);
  FUNC_0(VAR_8, "Pixel rate = %d.%06d Mpixel/sec\n",
        VAR_25 / 8000000, (VAR_25 / 8) % 1000000);

  FUNC_0(VAR_8, "ADC XTAL/pixel clock decimation ratio "
        "= %d.%03d\n", VAR_10 / 256,
        ((VAR_10 % 256) * 1000) / 256);

  VAR_26 = 28636360 * (u64) VAR_16;
  FUNC_4(VAR_26, VAR_10);
  VAR_24 = VAR_26 >> 13;
  FUNC_0(VAR_8,
        "Chroma sub-carrier initial freq = %d.%06d "
        "MHz\n", VAR_24 / 1000000, VAR_24 % 1000000);

  FUNC_0(VAR_8, "hblank %i, hactive %i, vblank %i, "
        "vactive %i, vblank656 %i, src_dec %i, "
        "burst 0x%02x, luma_lpf %i, uv_lpf %i, "
        "comb 0x%02x, sc 0x%06x\n",
        VAR_11, VAR_12, VAR_14, VAR_15, VAR_17,
        VAR_10, VAR_13, VAR_18, VAR_19,
        VAR_20, VAR_16);
 }


 FUNC_3(VAR_6, 0x470, VAR_11);
 FUNC_3(VAR_6, 0x471, 0xff & (((VAR_11 >> 8) & 0x3) |
      (VAR_12 << 4)));
 FUNC_3(VAR_6, 0x472, VAR_12 >> 4);


 FUNC_3(VAR_6, 0x473, VAR_13);


 FUNC_3(VAR_6, 0x474, VAR_14);
 FUNC_3(VAR_6, 0x475, 0xff & (((VAR_14 >> 8) & 0x3) |
      (VAR_15 << 4)));
 FUNC_3(VAR_6, 0x476, VAR_15 >> 4);
 FUNC_3(VAR_6, 0x477, VAR_17);


 FUNC_3(VAR_6, 0x478, 0xff & VAR_10);
 FUNC_3(VAR_6, 0x479, 0xff & (VAR_10 >> 8));


 FUNC_3(VAR_6, 0x47a, VAR_18 << 6 | ((VAR_19 << 4) & 0x30));


 FUNC_3(VAR_6, 0x47b, VAR_20);


 FUNC_3(VAR_6, 0x47c, VAR_16);
 FUNC_3(VAR_6, 0x47d, 0xff & VAR_16 >> 8);
 FUNC_3(VAR_6, 0x47e, 0xff & VAR_16 >> 16);

 if (VAR_9 & VAR_0) {
  VAR_7->slicer_line_delay = 1;
  VAR_7->slicer_line_offset = (6 + VAR_7->slicer_line_delay - 2);
 } else {
  VAR_7->slicer_line_delay = 0;
  VAR_7->slicer_line_offset = (10 + VAR_7->slicer_line_delay - 2);
 }
 FUNC_3(VAR_6, 0x47f, VAR_7->slicer_line_delay);
}
