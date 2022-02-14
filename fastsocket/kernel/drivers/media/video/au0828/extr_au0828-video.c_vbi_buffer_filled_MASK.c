
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct au0828_dmaqueue {int dummy; } ;
struct TYPE_3__ {int * vbi_buf; } ;
struct au0828_dev {TYPE_1__ isoc_ctl; } ;
struct TYPE_4__ {int done; int queue; int ts; int field_count; int state; int i; } ;
struct au0828_buffer {TYPE_2__ vb; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct au0828_buffer*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct au0828_dev *VAR_1,
         struct au0828_dmaqueue *VAR_2,
         struct au0828_buffer *VAR_3)
{

 FUNC_0("[%p/%d] wakeup\n", VAR_3, VAR_3->vb.i);

 VAR_3->vb.state = VAR_0;
 VAR_3->vb.field_count++;
 FUNC_1(&VAR_3->vb.ts);

 VAR_1->isoc_ctl.vbi_buf = ((void*)0);

 FUNC_2(&VAR_3->vb.queue);
 FUNC_3(&VAR_3->vb.done);
}
