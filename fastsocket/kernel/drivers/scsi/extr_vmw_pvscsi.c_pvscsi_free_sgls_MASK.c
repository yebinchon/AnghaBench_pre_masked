
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_ctx {scalar_t__ sgl; } ;
struct pvscsi_adapter {unsigned int req_depth; struct pvscsi_ctx* cmd_map; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct pvscsi_adapter *VAR_1)
{
 struct pvscsi_ctx *VAR_2 = VAR_1->cmd_map;
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->req_depth; ++VAR_3, ++VAR_2)
  FUNC_0((unsigned long)VAR_2->sgl, FUNC_1(VAR_0));
}
