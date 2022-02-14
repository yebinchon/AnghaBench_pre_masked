
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int v4l2_cap; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ivtv*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct ivtv_open_id *VAR_6 = VAR_4;
 struct ivtv *VAR_7 = VAR_6->itv;

 if (!(VAR_7->v4l2_cap & VAR_2))
  return -VAR_1;

 FUNC_0(VAR_7, VAR_0, 1, VAR_5 != 0);

 return 0;
}
