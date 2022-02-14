
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_data {TYPE_1__* frame; int * frame_buf; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(struct cam_data *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2->frame_buf, VAR_1*VAR_0);
 VAR_2->frame_buf = ((void*)0);
 for (VAR_3=0; VAR_3 < VAR_1; VAR_3++)
  VAR_2->frame[VAR_3].data = ((void*)0);

 return 0;
}
