
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct brcms_hardware {TYPE_1__* band; int d11core; int unit; } ;
struct brcms_c_info {int wl; struct brcms_hardware* hw; } ;
struct TYPE_2__ {int pi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct brcms_hardware*,int ) ;
 int FUNC_4 (struct brcms_hardware*,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static u32 FUNC_8(struct brcms_c_info *VAR_3, uint VAR_4)
{
 struct brcms_hardware *VAR_5 = VAR_3->hw;
 u32 VAR_6;
 u32 VAR_7;

 FUNC_5(VAR_5->d11core, "wl%d\n", VAR_5->unit);
 VAR_7 = FUNC_2(VAR_5->d11core,
         FUNC_0(VAR_2));
 FUNC_1((VAR_7 & VAR_0) != 0);


 VAR_6 = FUNC_6(VAR_3->wl);


 FUNC_7(VAR_5->band->pi, VAR_1);

 FUNC_3(VAR_5, VAR_1);

 FUNC_4(VAR_5, VAR_4);

 return VAR_6;
}
