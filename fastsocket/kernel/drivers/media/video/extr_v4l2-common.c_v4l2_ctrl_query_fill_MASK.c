
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int name; scalar_t__* reserved; void* default_value; void* step; void* maximum; void* minimum; int flags; int type; int id; } ;
typedef void* s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (int ,char const**,int *,void**,void**,void**,void**,int *) ;

int FUNC_2(struct v4l2_queryctrl *VAR_1, s32 VAR_2, s32 VAR_3, s32 VAR_4, s32 VAR_5)
{
 const char *VAR_6;

 FUNC_1(VAR_1->id, &VAR_6, &VAR_1->type,
         &VAR_2, &VAR_3, &VAR_4, &VAR_5, &VAR_1->flags);

 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_1->minimum = VAR_2;
 VAR_1->maximum = VAR_3;
 VAR_1->step = VAR_4;
 VAR_1->default_value = VAR_5;
 VAR_1->reserved[0] = VAR_1->reserved[1] = 0;
 FUNC_0(VAR_1->name, VAR_6, sizeof(VAR_1->name));
 return 0;
}
