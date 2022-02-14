
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct brcms_c_info {TYPE_3__* stf; TYPE_2__* pub; TYPE_1__* hw; } ;
typedef scalar_t__ s8 ;
struct TYPE_6__ {int txchain; scalar_t__ spatial_policy; } ;
struct TYPE_5__ {int unit; } ;
struct TYPE_4__ {int d11core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcms_c_info*,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_2(struct brcms_c_info *VAR_3, int VAR_4)
{
 int VAR_5;
 u8 VAR_6 = 0;

 FUNC_1(VAR_3->hw->d11core, "wl%d: val %x\n", VAR_3->pub->unit,
       VAR_4);

 VAR_3->stf->spatial_policy = (s8) VAR_4;
 for (VAR_5 = 1; VAR_5 <= VAR_1; VAR_5++) {
  VAR_6 = (VAR_4 == VAR_0) ?
      VAR_3->stf->txchain : VAR_2[VAR_5];
  FUNC_0(VAR_3, (u8) VAR_5, VAR_6);
 }
 return 0;
}
