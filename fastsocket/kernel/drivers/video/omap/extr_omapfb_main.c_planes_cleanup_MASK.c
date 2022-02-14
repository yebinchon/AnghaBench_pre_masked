
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int region_cnt; } ;
struct omapfb_device {int ** fb_info; TYPE_1__ mem_desc; } ;


 int FUNC_0 (struct omapfb_device*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct omapfb_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->mem_desc.region_cnt; VAR_1++) {
  if (VAR_0->fb_info[VAR_1] == ((void*)0))
   break;
  FUNC_0(VAR_0, VAR_0->fb_info[VAR_1]);
  FUNC_1(VAR_0->fb_info[VAR_1]);
 }
}
