
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct bnx2i_conn {TYPE_3__* ep; } ;
struct TYPE_4__ {int header; } ;
struct bnx2i_5771x_dbell {TYPE_1__ dbell; } ;
typedef int dbell ;
struct TYPE_5__ {int ctx_base; } ;
struct TYPE_6__ {TYPE_2__ qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bnx2i_5771x_dbell*,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct bnx2i_conn *VAR_2)
{
 struct bnx2i_5771x_dbell VAR_3;
 u32 VAR_4;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.dbell.header = (VAR_1 <<
         VAR_0);
 VAR_4 = *((u32 *)&VAR_3);

 FUNC_2(FUNC_0(VAR_4), VAR_2->ep->qp.ctx_base);
}
