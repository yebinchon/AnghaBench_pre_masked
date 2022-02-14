
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int std; } ;
struct file {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct ivtv *VAR_3 = ((struct ivtv_open_id *)VAR_1)->itv;

 *VAR_2 = VAR_3->std;
 return 0;
}
