
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_request {scalar_t__ waiting; struct bio* bio; int result; struct scsi_tape* stp; } ;
struct scsi_tape {TYPE_2__* buffer; } ;
struct request {int q; int resid_len; int errors; struct st_request* end_io_data; } ;
struct bio {int dummy; } ;
struct TYPE_3__ {int residual; int midlevel_result; } ;
struct TYPE_4__ {TYPE_1__ cmdstat; } ;


 int FUNC_0 (int ,struct request*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct request *VAR_0, int VAR_1)
{
 struct st_request *VAR_2 = VAR_0->end_io_data;
 struct scsi_tape *VAR_3 = VAR_2->stp;
 struct bio *VAR_4;

 VAR_3->buffer->cmdstat.midlevel_result = VAR_2->result = VAR_0->errors;
 VAR_3->buffer->cmdstat.residual = VAR_0->resid_len;

 VAR_4 = VAR_2->bio;
 if (VAR_2->waiting)
  FUNC_2(VAR_2->waiting);

 FUNC_1(VAR_4);
 FUNC_0(VAR_0->q, VAR_0);
}
