
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bfad_fcxp {struct bfa_sge_s* req_sge; } ;
struct bfa_sge_s {int sg_len; } ;



u32
FUNC_0(void *VAR_0, int VAR_1)
{
 struct bfad_fcxp *VAR_2 = VAR_0;
 struct bfa_sge_s *VAR_3;

 VAR_3 = VAR_2->req_sge + VAR_1;
 return VAR_3->sg_len;
}
