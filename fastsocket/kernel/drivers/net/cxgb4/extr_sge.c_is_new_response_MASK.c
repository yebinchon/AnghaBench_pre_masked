
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {scalar_t__ gen; } ;
struct rsp_ctrl {int type_gen; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct rsp_ctrl *VAR_0,
       const struct sge_rspq *VAR_1)
{
 return FUNC_0(VAR_0->type_gen) == VAR_1->gen;
}
