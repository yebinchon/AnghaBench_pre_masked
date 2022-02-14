
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct be_cmd_req_hdr {int timeout; int request_length; void* subsystem; void* opcode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(struct be_cmd_req_hdr *VAR_1,
   u8 VAR_2, u8 VAR_3, int VAR_4)
{
 VAR_1->opcode = VAR_3;
 VAR_1->subsystem = VAR_2;
 VAR_1->request_length = FUNC_0(VAR_4 - sizeof(*VAR_1));
 VAR_1->timeout = VAR_0;
}
