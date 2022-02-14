
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct lbs_private {int secinfo; } ;
struct lbs_802_11_security {int dummy; } ;
struct TYPE_2__ {scalar_t__ WPA2enabled; scalar_t__ WPAenabled; } ;
struct assoc_request {TYPE_1__ secinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lbs_private*,int ,int*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (int *,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(struct lbs_private *VAR_3,
                                struct assoc_request * VAR_4)
{
 int VAR_5 = 0;
 uint16_t VAR_6;
 uint16_t VAR_7 = 0;

 FUNC_2(VAR_2);

 FUNC_5(&VAR_3->secinfo, &VAR_4->secinfo,
  sizeof(struct lbs_802_11_security));

 FUNC_4(VAR_3);







 VAR_5 = FUNC_0(VAR_3, VAR_0, &VAR_7);
 if (VAR_5) {
  FUNC_1("Failed to get RSN status: %d\n", VAR_5);
  goto out;
 }


 VAR_6 = VAR_4->secinfo.WPAenabled || VAR_4->secinfo.WPA2enabled;
 if (VAR_6 == VAR_7)
  goto out;


 VAR_5 = FUNC_0(VAR_3, VAR_1, &VAR_6);

out:
 FUNC_3(VAR_2, "ret %d", VAR_5);
 return VAR_5;
}
