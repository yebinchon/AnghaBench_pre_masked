
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bnx2x_fastpath {scalar_t__ cl_id; int bp; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_2(struct bnx2x_fastpath *VAR_1)
{
 if (FUNC_1(VAR_1->bp))
  return VAR_1->cl_id + FUNC_0(VAR_1->bp) * VAR_0;
 else
  return VAR_1->cl_id;
}
