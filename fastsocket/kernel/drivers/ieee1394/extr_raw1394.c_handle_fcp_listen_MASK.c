
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; void* error; int recvb; scalar_t__ misc; } ;
struct pending_request {TYPE_1__ req; } ;
struct file_info {int * fcp_buffer; } ;


 void* VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct pending_request*) ;

__attribute__((used)) static void FUNC_2(struct file_info *VAR_1, struct pending_request *VAR_2)
{
 if (VAR_2->req.misc) {
  if (VAR_1->fcp_buffer) {
   VAR_2->req.error = VAR_0;
  } else {
   VAR_1->fcp_buffer = FUNC_0(VAR_2->req.recvb);
  }
 } else {
  if (!VAR_1->fcp_buffer) {
   VAR_2->req.error = VAR_0;
  } else {
   VAR_1->fcp_buffer = ((void*)0);
  }
 }

 VAR_2->req.length = 0;
 FUNC_1(VAR_2);
}
