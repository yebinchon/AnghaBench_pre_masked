
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
struct TYPE_6__ {int antswctrllut; } ;
struct TYPE_5__ {int antswctrllut; } ;
struct TYPE_4__ {int phy_rev; } ;
struct brcms_phy {int aa2g; TYPE_3__ srom_fem5g; TYPE_2__ srom_fem2g; int radio_chanspec; TYPE_1__ pubpi; scalar_t__ phy_init_por; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (struct brcms_phy*,int ,int,int,int,int *) ;
 int FUNC_4 (struct brcms_phy*,int *) ;

__attribute__((used)) static void FUNC_5(struct brcms_phy *VAR_13)
{
 uint VAR_14 = 0;
 u8 VAR_15;

 if (VAR_13->phy_init_por)
  FUNC_2(VAR_13);

 if (FUNC_1(VAR_13->pubpi.phy_rev, 7)) {

  VAR_15 = FUNC_0(VAR_13->radio_chanspec) ?
          VAR_13->srom_fem2g.antswctrllut : VAR_13->srom_fem5g.
          antswctrllut;

  switch (VAR_15) {
  case 0:

   break;

  case 1:

   if (VAR_13->aa2g == 7)
    FUNC_3(
     VAR_13,
     VAR_1,
     2, 0x21, 8,
     &VAR_5[0]);
   else
    FUNC_3(
     VAR_13,
     VAR_1,
     2, 0x21, 8,
     &VAR_2
     [0]);

   FUNC_3(VAR_13, VAR_1,
       2, 0x25, 8,
       &VAR_2[2]);
   FUNC_3(VAR_13, VAR_1,
       2, 0x29, 8,
       &VAR_2[4]);
   break;

  case 2:

   FUNC_3(
    VAR_13, VAR_1,
    2, 0x1, 8,
    &VAR_3[0]);
   FUNC_3(
    VAR_13, VAR_1,
    2, 0x5, 8,
    &VAR_3[2]);
   FUNC_3(
    VAR_13, VAR_1,
    2, 0x9, 8,
    &VAR_3[4]);

   FUNC_3(
    VAR_13, VAR_1,
    2, 0x21, 8,
    &VAR_4[0]);
   FUNC_3(
    VAR_13, VAR_1,
    2, 0x25, 8,
    &VAR_4[2]);
   FUNC_3(
    VAR_13, VAR_1,
    2, 0x29, 8,
    &VAR_4[4]);
   break;

  default:
   break;
  }

 } else if (FUNC_1(VAR_13->pubpi.phy_rev, 3)) {
  for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {

   if (VAR_14 == VAR_0) {
    VAR_15 =
     FUNC_0(VAR_13->radio_chanspec) ?
     VAR_13->srom_fem2g.antswctrllut :
     VAR_13->srom_fem5g.antswctrllut;
    switch (VAR_15) {
    case 0:
     FUNC_4(
      VAR_13,
      &VAR_7
      [VAR_14]);
     break;
    case 1:
     FUNC_4(
      VAR_13,
      &VAR_8
      [VAR_14]);
     break;
    case 2:
     FUNC_4(
      VAR_13,
      &VAR_9
      [VAR_14]);
     break;
    case 3:
     FUNC_4(
      VAR_13,
      &VAR_10
      [VAR_14]);
     break;
    default:
     break;
    }
   } else {
    FUNC_4(
     VAR_13,
     &VAR_7[VAR_14]);
   }
  }
 } else {
  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
   FUNC_4(VAR_13,
       &VAR_6
       [VAR_14]);
 }
}
