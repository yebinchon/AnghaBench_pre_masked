
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int serialize_lock; } ;
struct file {int private_data; } ;


 unsigned int VAR_0 ;
 struct ivtv_open_id* FUNC_0 (int ) ;
 long FUNC_1 (struct ivtv*,struct file*,unsigned int,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

long FUNC_4(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 struct ivtv_open_id *VAR_4 = FUNC_0(VAR_1->private_data);
 struct ivtv *VAR_5 = VAR_4->itv;
 long VAR_6;


 if (VAR_2 == VAR_0)
  return FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_5->serialize_lock);
 VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3);
 FUNC_3(&VAR_5->serialize_lock);
 return VAR_6;
}
