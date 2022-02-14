
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_device {int * fb_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long,int ) ;
 int VAR_1 ;
 int * VAR_2 ;

void FUNC_1(struct omapfb_device *VAR_3, unsigned long VAR_4)
{
 int VAR_5;

 if (!VAR_1)

  return;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_0(&VAR_2[VAR_5], VAR_4,
        VAR_3->fb_info[VAR_5]);
}
