
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int dummy; } ;
struct bss_descriptor {int dummy; } ;
struct assoc_request {int bssid; scalar_t__ mode; int bss; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lbs_private*,struct assoc_request*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 struct bss_descriptor* FUNC_4 (struct lbs_private*,int,scalar_t__) ;
 int FUNC_5 (struct lbs_private*,struct assoc_request*) ;
 int FUNC_6 (int *,struct bss_descriptor*,int) ;

__attribute__((used)) static int FUNC_7(struct lbs_private *VAR_3,
                              struct assoc_request * VAR_4)
{
 int VAR_5 = 0;
 struct bss_descriptor * VAR_6;

 FUNC_2(VAR_2, "BSSID %pM", VAR_4->bssid);


 VAR_6 = FUNC_4(VAR_3, VAR_4->bssid,
       VAR_4->mode);
 if (VAR_6 == ((void*)0)) {
  FUNC_1("ASSOC: WAP: BSSID %pM not found, "
   "cannot associate.\n", VAR_4->bssid);
  goto out;
 }

 FUNC_6(&VAR_4->bss, VAR_6, sizeof(struct bss_descriptor));
 if (VAR_4->mode == VAR_1) {
  VAR_5 = FUNC_5(VAR_3, VAR_4);
  FUNC_1("ASSOC: lbs_try_associate(bssid) returned %d\n",
         VAR_5);
 } else if (VAR_4->mode == VAR_0) {
  FUNC_0(VAR_3, VAR_4);
 }

out:
 FUNC_3(VAR_2, "ret %d", VAR_5);
 return VAR_5;
}
