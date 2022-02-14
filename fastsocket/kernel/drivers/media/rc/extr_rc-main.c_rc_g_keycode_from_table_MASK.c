
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct rc_map {unsigned int len; int lock; TYPE_1__* scan; } ;
struct rc_dev {int input_name; struct rc_map rc_map; } ;
struct TYPE_2__ {unsigned int keycode; } ;


 int FUNC_0 (int,char*,int ,unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (struct rc_map*,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

u32 FUNC_4(struct rc_dev *VAR_1, u32 VAR_2)
{
 struct rc_map *VAR_3 = &VAR_1->rc_map;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_3->lock, VAR_6);

 VAR_5 = FUNC_1(VAR_3, VAR_2);
 VAR_4 = VAR_5 < VAR_3->len ?
   VAR_3->scan[VAR_5].keycode : VAR_0;

 FUNC_3(&VAR_3->lock, VAR_6);

 if (VAR_4 != VAR_0)
  FUNC_0(1, "%s: scancode 0x%04x keycode 0x%02x\n",
      VAR_1->input_name, VAR_2, VAR_4);

 return VAR_4;
}
