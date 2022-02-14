
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {int std; int cgcdiv; int audclk_freq; scalar_t__ apll; scalar_t__ ucgc; int crystal_freq; int ident; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct v4l2_subdev*,scalar_t__,int) ;
 struct saa711x_state* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_8, u32 VAR_9)
{
 struct saa711x_state *VAR_10 = FUNC_3(VAR_8);
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u64 VAR_14;
 u8 VAR_15 = 0;


 if (!FUNC_1(VAR_10->ident, VAR_1))
  return 0;

 FUNC_4(1, VAR_7, VAR_8, "set audio clock freq: %d\n", VAR_9);


 if (VAR_9 < 32000 || VAR_9 > 48000)
  return -VAR_0;


 VAR_13 = (VAR_10->std & VAR_6) ? 5994 : 5000;

 VAR_11 = (25600 * VAR_9) / VAR_13;



 VAR_14 = VAR_9;
 VAR_14 = VAR_14 << 31;
 FUNC_0(VAR_14, VAR_10->crystal_freq);
 VAR_12 = VAR_14;
 if (VAR_10->ucgc) {
  VAR_11 = VAR_11 * VAR_10->cgcdiv / 16;
  VAR_12 = VAR_12 * VAR_10->cgcdiv / 16;
  VAR_15 = 0x80;
  if (VAR_10->cgcdiv == 3)
   VAR_15 |= 0x40;
 }
 if (VAR_10->apll)
  VAR_15 |= 0x08;

 FUNC_2(VAR_8, VAR_3, 0x03);
 FUNC_2(VAR_8, VAR_4, 0x10);
 FUNC_2(VAR_8, VAR_5, VAR_15);

 FUNC_2(VAR_8, VAR_1, VAR_11 & 0xff);
 FUNC_2(VAR_8, VAR_1+1,
       (VAR_11 >> 8) & 0xff);
 FUNC_2(VAR_8, VAR_1+2,
       (VAR_11 >> 16) & 0x03);

 FUNC_2(VAR_8, VAR_2, VAR_12 & 0xff);
 FUNC_2(VAR_8, VAR_2+1, (VAR_12 >> 8) & 0xff);
 FUNC_2(VAR_8, VAR_2+2, (VAR_12 >> 16) & 0x3f);
 VAR_10->audclk_freq = VAR_9;
 return 0;
}
