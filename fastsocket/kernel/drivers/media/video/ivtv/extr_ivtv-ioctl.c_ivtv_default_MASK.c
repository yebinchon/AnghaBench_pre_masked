
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct TYPE_2__ {int newi2c; } ;
struct ivtv {int sd_video; TYPE_1__ options; } ;
struct file {int dummy; } ;





 long VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (struct file*,int,void*) ;
 int FUNC_1 (struct ivtv*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_3, void *VAR_4, int VAR_5, void *VAR_6)
{
 struct ivtv *VAR_7 = ((struct ivtv_open_id *)VAR_4)->itv;

 switch (VAR_5) {
 case 128: {
  u32 VAR_8 = *(u32 *)VAR_6;

  if ((VAR_8 == 0 && VAR_7->options.newi2c) || (VAR_8 & 0x01))
   FUNC_1(VAR_7);
  if (VAR_8 & 0x02)
   FUNC_2(VAR_7->sd_video, VAR_1, VAR_2, 0);
  break;
 }

 case 139:
 case 133:
 case 134:
 case 135:
 case 132:
 case 130:
 case 136:
 case 137:
 case 138:
 case 129:
 case 131:
 case 140:
 case 141:
 case 142:
  return FUNC_0(VAR_3, VAR_5, (void *)VAR_6);

 default:
  return -VAR_0;
 }
 return 0;
}
