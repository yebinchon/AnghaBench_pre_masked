
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camera_data {int present; int wq_stream; int busy_lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct camera_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

struct camera_data *FUNC_4(void)
{
 struct camera_data *VAR_1;

 VAR_1 = FUNC_2(sizeof(*VAR_1), VAR_0);

 if (!VAR_1) {
  FUNC_0("couldn't kmalloc cpia2 struct\n");
  return ((void*)0);
 }


 VAR_1->present = 1;
 FUNC_3(&VAR_1->busy_lock);
 FUNC_1(&VAR_1->wq_stream);

 return VAR_1;
}
