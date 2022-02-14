
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_hardware {int shortslot; TYPE_1__* band; int unit; int d11core; } ;
struct brcms_c_info {struct brcms_hardware* hw; } ;
struct TYPE_2__ {scalar_t__ bandtype; scalar_t__ phyrev; scalar_t__ phytype; int CWmax; int CWmin; int pi; int bandunit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcms_hardware*,int ) ;
 int FUNC_1 (struct brcms_hardware*,int ) ;
 int FUNC_2 (struct brcms_hardware*) ;
 int FUNC_3 (struct brcms_hardware*,int) ;
 int FUNC_4 (struct brcms_hardware*,int ,int ) ;
 int FUNC_5 (struct brcms_hardware*) ;
 int FUNC_6 (struct brcms_hardware*) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (struct brcms_hardware*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(struct brcms_c_info *VAR_3, u16 VAR_4)
{
 struct brcms_hardware *VAR_5 = VAR_3->hw;

 FUNC_7(VAR_5->d11core, "wl%d: bandunit %d\n", VAR_5->unit,
      VAR_5->band->bandunit);

 FUNC_5(VAR_5);

 FUNC_9(VAR_5->band->pi, VAR_4);

 FUNC_6(VAR_5);





 FUNC_1(VAR_5, VAR_5->band->CWmin);
 FUNC_0(VAR_5, VAR_5->band->CWmax);

 FUNC_3(VAR_5,
       VAR_5->band->bandtype == VAR_0 ?
       1 : VAR_5->shortslot);


 FUNC_4(VAR_5, VAR_1, (u16) VAR_5->band->phytype);
 FUNC_4(VAR_5, VAR_2, (u16) VAR_5->band->phyrev);





 FUNC_8(VAR_5);

 FUNC_2(VAR_5);
}
