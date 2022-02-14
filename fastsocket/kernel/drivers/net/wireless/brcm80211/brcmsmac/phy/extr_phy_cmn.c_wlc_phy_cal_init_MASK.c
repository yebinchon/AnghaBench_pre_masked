
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy_pub {int dummy; } ;
struct TYPE_2__ {void (* calinit ) (struct brcms_phy*) ;} ;
struct brcms_phy {int initialized; TYPE_1__ pi_fptr; int d11core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 void FUNC_3 (struct brcms_phy*) ;

void FUNC_4(struct brcms_phy_pub *VAR_2)
{
 struct brcms_phy *VAR_3 = (struct brcms_phy *) VAR_2;
 void (*VAR_4)(struct brcms_phy *) = ((void*)0);

 if (FUNC_1((FUNC_2(VAR_3->d11core, FUNC_0(VAR_1)) &
    VAR_0) != 0, "HW error: MAC enabled during phy cal\n"))
  return;

 if (!VAR_3->initialized) {
  VAR_4 = VAR_3->pi_fptr.calinit;
  if (VAR_4)
   (*VAR_4)(VAR_3);

  VAR_3->initialized = 1;
 }
}
