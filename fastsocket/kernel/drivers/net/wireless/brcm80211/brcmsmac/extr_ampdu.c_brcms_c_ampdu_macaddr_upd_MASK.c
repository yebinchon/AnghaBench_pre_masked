
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int template ;
struct brcms_c_info {int hw; TYPE_1__* pub; } ;
struct TYPE_2__ {int cur_etheraddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int,char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int) ;

void FUNC_3(struct brcms_c_info *VAR_3)
{
 char VAR_4[VAR_2 * 2];


 FUNC_2(VAR_4, 0, sizeof(VAR_4));
 FUNC_1(VAR_4, VAR_3->pub->cur_etheraddr, VAR_0);
 FUNC_0(VAR_3->hw, (VAR_1 + 16),
      (VAR_2 * 2),
      VAR_4);
}
