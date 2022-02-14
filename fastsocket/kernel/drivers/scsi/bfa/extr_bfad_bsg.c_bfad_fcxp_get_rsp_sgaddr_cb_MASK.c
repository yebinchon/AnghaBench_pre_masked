
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct bfad_fcxp {struct bfa_sge_s* rsp_sge; } ;
struct bfa_sge_s {scalar_t__ sg_addr; } ;



u64
FUNC_0(void *VAR_0, int VAR_1)
{
 struct bfad_fcxp *VAR_2 = VAR_0;
 struct bfa_sge_s *VAR_3;
 u64 VAR_4;

 VAR_3 = VAR_2->rsp_sge + VAR_1;
 VAR_4 = (u64)(size_t) VAR_3->sg_addr;
 return VAR_4;
}
