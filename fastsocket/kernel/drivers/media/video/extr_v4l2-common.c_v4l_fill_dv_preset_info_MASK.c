
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct v4l2_dv_preset_info TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct v4l2_dv_enum_preset {size_t preset; int name; int height; int width; } ;
struct v4l2_dv_preset_info {int width; int height; char const* name; } ;


 size_t FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,int) ;

int FUNC_2(u32 VAR_1, struct v4l2_dv_enum_preset *VAR_2)
{
 static const struct v4l2_dv_preset_info {
  u16 width;
  u16 height;
  const char *name;
 } VAR_3[] = {
  { 0, 0, "Invalid" },
  { 720, 480, "480p@59.94" },
  { 720, 576, "576p@50" },
  { 1280, 720, "720p@24" },
  { 1280, 720, "720p@25" },
  { 1280, 720, "720p@30" },
  { 1280, 720, "720p@50" },
  { 1280, 720, "720p@59.94" },
  { 1280, 720, "720p@60" },
  { 1920, 1080, "1080i@29.97" },
  { 1920, 1080, "1080i@30" },
  { 1920, 1080, "1080i@25" },
  { 1920, 1080, "1080i@50" },
  { 1920, 1080, "1080i@60" },
  { 1920, 1080, "1080p@24" },
  { 1920, 1080, "1080p@25" },
  { 1920, 1080, "1080p@30" },
  { 1920, 1080, "1080p@50" },
  { 1920, 1080, "1080p@60" },
 };

 if (VAR_2 == ((void*)0) || VAR_1 >= FUNC_0(VAR_3))
  return -VAR_0;

 VAR_2->preset = VAR_1;
 VAR_2->width = VAR_3[VAR_1].width;
 VAR_2->height = VAR_3[VAR_1].height;
 FUNC_1(VAR_2->name, VAR_3[VAR_1].name, sizeof(VAR_2->name));
 return 0;
}
