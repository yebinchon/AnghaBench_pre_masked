
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bnx2x_fastpath {scalar_t__ cl_id; struct bnx2x* bp; } ;
struct bnx2x {int pf_num; scalar_t__ cnic_base_cl_id; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct bnx2x_fastpath*) ;

__attribute__((used)) static inline u8 FUNC_3(struct bnx2x_fastpath *VAR_1)
{
 struct bnx2x *VAR_2 = VAR_1->bp;
 if (!FUNC_1(VAR_2)) {

  if (FUNC_2(VAR_1))
   return VAR_2->cnic_base_cl_id + (VAR_2->pf_num >> 1);
  return VAR_1->cl_id;
 }
 return VAR_1->cl_id + FUNC_0(VAR_2) * VAR_0;
}
