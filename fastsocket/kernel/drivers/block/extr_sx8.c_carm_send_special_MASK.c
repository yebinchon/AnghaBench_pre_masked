
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct carm_request {unsigned int tag; int rq; scalar_t__ msg_bucket; int msg_subtype; int msg_type; } ;
struct carm_msg_ioctl {int subtype; int type; } ;
struct carm_host {int oob_q; } ;
typedef unsigned int (* carm_sspc_t ) (struct carm_host*,unsigned int,void*) ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int,struct carm_request*) ;
 struct carm_request* FUNC_3 (struct carm_host*) ;
 int FUNC_4 (unsigned int) ;
 void* FUNC_5 (struct carm_host*,unsigned int) ;

__attribute__((used)) static int FUNC_6 (struct carm_host *VAR_1, carm_sspc_t VAR_2)
{
 struct carm_request *VAR_3;
 struct carm_msg_ioctl *VAR_4;
 void *VAR_5;
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_6 = VAR_3->tag;

 VAR_5 = FUNC_5(VAR_1, VAR_6);

 VAR_7 = VAR_2(VAR_1, VAR_6, VAR_5);

 VAR_4 = VAR_5;
 VAR_3->msg_type = VAR_4->type;
 VAR_3->msg_subtype = VAR_4->subtype;
 VAR_8 = FUNC_4(VAR_7);
 FUNC_0(VAR_8 < 0);
 VAR_3->msg_bucket = (u32) VAR_8;

 FUNC_1("blk_insert_request, tag == %u\n", VAR_6);
 FUNC_2(VAR_1->oob_q, VAR_3->rq, 1, VAR_3);

 return 0;
}
