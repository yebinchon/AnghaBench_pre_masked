
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct firmware {int size; scalar_t__* data; } ;
struct TYPE_2__ {struct v4l2_subdev sd; } ;
struct cx18 {TYPE_1__ av_state; } ;


 int FUNC_0 (struct v4l2_subdev*,char*,int ,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct cx18*,int ) ;
 int FUNC_3 (struct cx18*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct cx18 *VAR_3, const struct firmware *VAR_4)
{
 struct v4l2_subdev *VAR_5 = &VAR_3->av_state.sd;
 int VAR_6 = 0;
 const u8 *VAR_7;
 u32 VAR_8;
 int VAR_9;
 u32 VAR_10, VAR_11;


 VAR_11 = FUNC_2(VAR_3, VAR_0);
 do {
  VAR_11 &= 0x00ffffff;
  VAR_11 |= 0x0f000000;
  FUNC_3(VAR_3, VAR_0, VAR_11);
  VAR_11 = FUNC_2(VAR_3, VAR_0);
 } while ((VAR_11 & 0xff000000) != 0x0f000000);


 while (VAR_11 & 0x3fff)
  VAR_11 = FUNC_2(VAR_3, VAR_0);

 VAR_7 = VAR_4->data;
 VAR_8 = VAR_4->size;
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_11 &= 0xffff3fff;
  VAR_10 = 0x0f000000 | ((u32)VAR_7[VAR_9] << 16) | VAR_9;
  if (VAR_10 != VAR_11) {
   FUNC_0(VAR_5, "verification of %s firmware load "
         "failed: expected %#010x got %#010x\n",
         VAR_2, VAR_10, VAR_11);
   VAR_6 = -VAR_1;
   break;
  }
  VAR_11 = FUNC_2(VAR_3, VAR_0);
 }
 if (VAR_6 == 0)
  FUNC_1(VAR_5, "verified load of %s firmware (%d bytes)\n",
         VAR_2, VAR_8);
 return VAR_6;
}
