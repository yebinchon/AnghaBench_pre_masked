
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ucc_geth_private {TYPE_2__* ug_info; struct ucc_fast_private* uccf; } ;
struct ucc_fast_private {scalar_t__ stopped_tx; } ;
struct TYPE_3__ {int ucc_num; } ;
struct TYPE_4__ {TYPE_1__ uf_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ucc_geth_private *VAR_2)
{
 struct ucc_fast_private *VAR_3;
 u32 VAR_4;

 VAR_3 = VAR_2->uccf;

 VAR_4 =
     FUNC_1(VAR_2->ug_info->uf_info.ucc_num);
 FUNC_0(VAR_1, VAR_4, VAR_0, 0);
 VAR_3->stopped_tx = 0;

 return 0;
}
