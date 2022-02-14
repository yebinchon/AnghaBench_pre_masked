
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {TYPE_1__* v4l2_dev; } ;
struct bt819 {int input; } ;
struct TYPE_2__ {int * notify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bt819*,int,int,int) ;
 int VAR_3 ;
 struct bt819* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;
 int FUNC_4 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_4,
      u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct bt819 *VAR_8 = FUNC_1(VAR_4);

 FUNC_2(1, VAR_3, VAR_4, "set input %x\n", VAR_5);

 if (VAR_5 < 0 || VAR_5 > 7)
  return -VAR_2;

 if (VAR_4->v4l2_dev == ((void*)0) || VAR_4->v4l2_dev->notify == ((void*)0))
  FUNC_3(VAR_4, "no notify found!\n");

 if (VAR_8->input != VAR_5) {
  FUNC_4(VAR_4, VAR_1, 0);
  VAR_8->input = VAR_5;

  if (VAR_8->input == 0) {
   FUNC_0(VAR_8, 0x0b, 6, 0);
   FUNC_0(VAR_8, 0x1a, 1, 1);
  } else {
   FUNC_0(VAR_8, 0x0b, 6, 1);
   FUNC_0(VAR_8, 0x1a, 1, 0);
  }
  FUNC_4(VAR_4, VAR_0, 0);
 }
 return 0;
}
