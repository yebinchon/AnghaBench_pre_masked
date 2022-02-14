
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rq_map_data {int pages; } ;
struct request {int q; int errors; struct osst_request* end_io_data; } ;
struct osst_tape {scalar_t__ write_pending; TYPE_2__* buffer; } ;
struct osst_request {scalar_t__ bio; scalar_t__ waiting; int result; struct osst_tape* stp; } ;
struct TYPE_3__ {int midlevel_result; } ;
struct TYPE_4__ {TYPE_1__ cmdstat; struct rq_map_data map_data; } ;


 int FUNC_0 (int ,struct request*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct request *VAR_0, int VAR_1)
{
 struct osst_request *VAR_2 = VAR_0->end_io_data;
 struct osst_tape *VAR_3 = VAR_2->stp;
 struct rq_map_data *VAR_4 = &VAR_2->stp->buffer->map_data;

 VAR_3->buffer->cmdstat.midlevel_result = VAR_2->result = VAR_0->errors;



 if (VAR_2->waiting)
  FUNC_2(VAR_2->waiting);

 if (VAR_2->bio) {
  FUNC_3(VAR_4->pages);
  FUNC_1(VAR_2->bio);
 }

 FUNC_0(VAR_0->q, VAR_0);
}
