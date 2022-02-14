
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {struct cafe_sio_buffer* vm_private_data; } ;
struct TYPE_3__ {int flags; } ;
struct cafe_sio_buffer {scalar_t__ mapcount; TYPE_2__* cam; TYPE_1__ v4lbuf; } ;
struct TYPE_4__ {int s_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_1)
{
 struct cafe_sio_buffer *VAR_2 = VAR_1->vm_private_data;

 FUNC_0(&VAR_2->cam->s_mutex);
 VAR_2->mapcount--;

 if (VAR_2->mapcount == 0)
  VAR_2->v4lbuf.flags &= ~VAR_0;
 FUNC_1(&VAR_2->cam->s_mutex);
}
