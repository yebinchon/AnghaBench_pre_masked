
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_data {scalar_t__ frame_buf; TYPE_1__* frame; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct cam_data *VAR_3)
{
 int VAR_4;

 VAR_3->frame_buf = FUNC_0(VAR_2 * VAR_0);
 if (!VAR_3->frame_buf)
  return -VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3->frame[VAR_4].data = VAR_3->frame_buf + VAR_4 * VAR_0;

 return 0;
}
