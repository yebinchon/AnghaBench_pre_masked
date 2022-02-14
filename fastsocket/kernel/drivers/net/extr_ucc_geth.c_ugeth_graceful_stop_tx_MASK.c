
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ucc_geth_private {TYPE_1__* ug_info; struct ucc_fast_private* uccf; } ;
struct ucc_fast_private {int stopped_tx; int p_ucce; int p_uccm; } ;
struct TYPE_4__ {int ucc_num; } ;
struct TYPE_3__ {TYPE_2__ uf_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ucc_geth_private *VAR_3)
{
 struct ucc_fast_private *VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7 = 10;

 VAR_4 = VAR_3->uccf;


 FUNC_0(VAR_4->p_uccm, VAR_2);
 FUNC_3(VAR_4->p_ucce, VAR_2);


 VAR_5 =
     FUNC_5(VAR_3->ug_info->uf_info.ucc_num);
 FUNC_4(VAR_1, VAR_5,
       VAR_0, 0);


 do {
  FUNC_2(10);
  VAR_6 = FUNC_1(VAR_4->p_ucce);
 } while (!(VAR_6 & VAR_2) && --VAR_7);

 VAR_4->stopped_tx = 1;

 return 0;
}
