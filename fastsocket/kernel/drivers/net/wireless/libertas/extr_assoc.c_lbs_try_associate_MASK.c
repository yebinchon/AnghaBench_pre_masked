
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int auth_mode; } ;
struct lbs_private {int fwrelease; int capability; TYPE_2__ secinfo; } ;
struct TYPE_3__ {int capability; int bssid; } ;
struct assoc_request {TYPE_1__ bss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lbs_private*,struct assoc_request*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct lbs_private*,int ,int ) ;
 int FUNC_4 (struct lbs_private*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct lbs_private *VAR_5,
 struct assoc_request *VAR_6)
{
 int VAR_7;
 u8 VAR_8 = VAR_2;

 FUNC_1(VAR_1);




 if (VAR_5->fwrelease < 0x09000000) {
  VAR_7 = FUNC_3(VAR_5, VAR_6->bss.bssid,
          VAR_5->secinfo.auth_mode);
  if (VAR_7)
   goto out;
 }


 if ((VAR_5->capability & VAR_4) &&
     (VAR_6->bss.capability & VAR_4))
  VAR_8 = VAR_3;

 VAR_7 = FUNC_4(VAR_5, VAR_8, 1);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_0);

out:
 FUNC_2(VAR_1, "ret %d", VAR_7);
 return VAR_7;
}
