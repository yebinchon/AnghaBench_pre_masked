
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camera_data {int num_frames; } ;


 int VAR_0 ;
 int FUNC_0 (struct camera_data*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, struct camera_data *VAR_2)
{
 int VAR_3;

 VAR_3 = *(int*)VAR_1;

 if (VAR_3 < 0 || VAR_3 >= VAR_2->num_frames)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3);
}
