
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct em28xx_dmaqueue {int dummy; } ;
struct TYPE_4__ {int done; int queue; int ts; int field_count; int state; int i; } ;
struct em28xx_buffer {TYPE_2__ vb; } ;
struct TYPE_3__ {int * vbi_buf; } ;
struct em28xx {TYPE_1__ isoc_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct em28xx_buffer*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct em28xx *VAR_1,
         struct em28xx_dmaqueue *VAR_2,
         struct em28xx_buffer *VAR_3)
{

 FUNC_1("[%p/%d] wakeup\n", VAR_3, VAR_3->vb.i);

 VAR_3->vb.state = VAR_0;
 VAR_3->vb.field_count++;
 FUNC_0(&VAR_3->vb.ts);

 VAR_1->isoc_ctl.vbi_buf = ((void*)0);

 FUNC_2(&VAR_3->vb.queue);
 FUNC_3(&VAR_3->vb.done);
}
