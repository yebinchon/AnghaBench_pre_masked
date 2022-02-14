
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int dummy; } ;
struct assoc_request {int flags; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lbs_private*,struct assoc_request*) ;
 int FUNC_1 (struct lbs_private*,struct assoc_request*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct lbs_private *VAR_5,
                                  struct assoc_request * VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0;

 FUNC_3(VAR_2);



 if (FUNC_5(VAR_0, &VAR_6->flags)) {
  if (FUNC_2(VAR_3, VAR_6->bssid)
      && FUNC_2(VAR_4, VAR_6->bssid)) {
   VAR_7 = FUNC_0(VAR_5, VAR_6);
   VAR_8 = 1;
  }
 }

 if (!VAR_8 && FUNC_5(VAR_1, &VAR_6->flags)) {
  VAR_7 = FUNC_1(VAR_5, VAR_6);
 }

 FUNC_4(VAR_2, "ret %d", VAR_7);
 return VAR_7;
}
