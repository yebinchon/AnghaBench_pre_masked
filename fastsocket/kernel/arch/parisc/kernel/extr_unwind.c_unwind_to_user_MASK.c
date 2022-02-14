
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_frame_info {int ip; } ;


 int FUNC_0 (struct unwind_frame_info*) ;

int FUNC_1(struct unwind_frame_info *VAR_0)
{
 int VAR_1;

 do {
  VAR_1 = FUNC_0(VAR_0);
 } while (!VAR_1 && !(VAR_0->ip & 3));

 return VAR_1;
}
