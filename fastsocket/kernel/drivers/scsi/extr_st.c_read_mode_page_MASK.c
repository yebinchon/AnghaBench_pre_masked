
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_request {int dummy; } ;
struct scsi_tape {TYPE_3__* buffer; TYPE_2__* device; } ;
struct TYPE_6__ {int syscall_result; } ;
struct TYPE_5__ {TYPE_1__* request_queue; } ;
struct TYPE_4__ {int rq_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 struct st_request* FUNC_1 (int *,struct scsi_tape*,unsigned char*,unsigned char,int ,int ,int ,int) ;
 int FUNC_2 (struct st_request*) ;

__attribute__((used)) static int FUNC_3(struct scsi_tape *VAR_4, int VAR_5, int VAR_6)
{
 unsigned char VAR_7[VAR_1];
 struct st_request *VAR_8;

 FUNC_0(VAR_7, 0, VAR_1);
 VAR_7[0] = VAR_2;
 if (VAR_6)
  VAR_7[1] = VAR_3;
 VAR_7[2] = VAR_5;
 VAR_7[4] = 255;

 VAR_8 = FUNC_1(((void*)0), VAR_4, VAR_7, VAR_7[4], VAR_0,
      VAR_4->device->request_queue->rq_timeout, 0, 1);
 if (VAR_8 == ((void*)0))
  return (VAR_4->buffer)->syscall_result;

 FUNC_2(VAR_8);

 return VAR_4->buffer->syscall_result;
}
