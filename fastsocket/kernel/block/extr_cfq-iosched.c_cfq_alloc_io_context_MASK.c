
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfq_io_context {int exit; int dtor; int cic_list; int queue_list; int last_end_request; } ;
struct cfq_data {TYPE_1__* queue; } ;
typedef int gfp_t ;
struct TYPE_2__ {int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 struct cfq_io_context* FUNC_3 (int ,int,int ) ;

__attribute__((used)) static struct cfq_io_context *
FUNC_4(struct cfq_data *VAR_6, gfp_t VAR_7)
{
 struct cfq_io_context *VAR_8;

 VAR_8 = FUNC_3(VAR_4, VAR_7 | VAR_0,
       VAR_6->queue->node);
 if (VAR_8) {
  VAR_8->last_end_request = VAR_5;
  FUNC_1(&VAR_8->queue_list);
  FUNC_0(&VAR_8->cic_list);
  VAR_8->dtor = VAR_2;
  VAR_8->exit = VAR_1;
  FUNC_2(VAR_3);
 }

 return VAR_8;
}
