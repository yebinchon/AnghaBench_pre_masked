
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cx231xx_dmaqueue {int dummy; } ;
struct TYPE_4__ {int done; int queue; int ts; int field_count; int state; } ;
struct cx231xx_buffer {TYPE_1__ vb; } ;
struct TYPE_5__ {int * buf; } ;
struct TYPE_6__ {TYPE_2__ bulk_ctl; } ;
struct cx231xx {TYPE_3__ vbi_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct cx231xx *VAR_1,
         struct cx231xx_dmaqueue *VAR_2,
         struct cx231xx_buffer *VAR_3)
{



 VAR_3->vb.state = VAR_0;
 VAR_3->vb.field_count++;
 FUNC_0(&VAR_3->vb.ts);

 VAR_1->vbi_mode.bulk_ctl.buf = ((void*)0);

 FUNC_1(&VAR_3->vb.queue);
 FUNC_2(&VAR_3->vb.done);
}
