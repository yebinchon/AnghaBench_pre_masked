
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_open_id {int prio; struct ivtv* itv; } ;
struct ivtv {int prio; } ;
struct file {int dummy; } ;
typedef enum v4l2_priority { ____Placeholder_v4l2_priority } v4l2_priority ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, enum v4l2_priority VAR_2)
{
 struct ivtv_open_id *VAR_3 = VAR_1;
 struct ivtv *VAR_4 = VAR_3->itv;

 return FUNC_0(&VAR_4->prio, &VAR_3->prio, VAR_2);
}
