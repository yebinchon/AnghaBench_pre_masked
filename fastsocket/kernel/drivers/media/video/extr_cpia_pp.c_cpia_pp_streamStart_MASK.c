
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_cam_entry {int streaming; int port; scalar_t__ stream_irq; scalar_t__ image_ready; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct pp_cam_entry *VAR_1 = VAR_0;
 FUNC_0("\n");
 VAR_1->streaming=1;
 VAR_1->image_ready=0;

 if(VAR_1->stream_irq) FUNC_1(VAR_1->port);
 return 0;
}
