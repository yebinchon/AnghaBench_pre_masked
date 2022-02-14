
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_querymenu {int id; } ;
struct v4l2_queryctrl {int id; } ;
struct saa6752hs_state {int has_ac3; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_queryctrl*) ;
 struct saa6752hs_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_querymenu*,struct v4l2_queryctrl*,int *) ;
 int FUNC_3 (struct v4l2_querymenu*,int const*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, struct v4l2_querymenu *VAR_2)
{
 static const u32 VAR_3[] = {
  130,
  134
 };
 static const u32 VAR_4[] = {
  130,
  131,
  134
 };
 static u32 VAR_5[] = {
  129,
  128,
  134
 };
 static u32 VAR_6[] = {
  133,
  132,
  134
 };
 struct saa6752hs_state *VAR_7 = FUNC_1(VAR_1);
 struct v4l2_queryctrl VAR_8;
 int VAR_9;

 VAR_8.id = VAR_2->id;
 VAR_9 = FUNC_0(VAR_1, &VAR_8);
 if (VAR_9)
  return VAR_9;
 switch (VAR_2->id) {
 case 135:
  return FUNC_3(VAR_2,
    VAR_5);
 case 137:
  if (!VAR_7->has_ac3)
   return -VAR_0;
  return FUNC_3(VAR_2,
    VAR_6);
 case 136:
  return FUNC_3(VAR_2,
   VAR_7->has_ac3 ? VAR_4 :
    VAR_3);
 }
 return FUNC_2(VAR_2, &VAR_8, ((void*)0));
}
