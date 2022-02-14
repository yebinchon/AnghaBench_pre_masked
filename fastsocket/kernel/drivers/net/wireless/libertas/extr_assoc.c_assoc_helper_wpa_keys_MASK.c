
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int wpa_mcast_key; int wpa_unicast_key; } ;
struct enc_key {int dummy; } ;
struct assoc_request {unsigned int flags; int wpa_mcast_key; int wpa_unicast_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned int*) ;
 int FUNC_1 (struct lbs_private*,int ,struct assoc_request*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ FUNC_5 (int ,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct lbs_private *VAR_4,
                                 struct assoc_request * VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7 = VAR_5->flags;

 FUNC_2(VAR_3);






 if (FUNC_5(VAR_1, &VAR_5->flags)) {
  FUNC_0(VAR_0, &VAR_5->flags);
  VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_5);
  VAR_5->flags = VAR_7;
 }

 if (VAR_6)
  goto out;

 FUNC_4(&VAR_4->wpa_unicast_key, &VAR_5->wpa_unicast_key,
   sizeof(struct enc_key));

 if (FUNC_5(VAR_0, &VAR_5->flags)) {
  FUNC_0(VAR_1, &VAR_5->flags);

  VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_5);
  VAR_5->flags = VAR_7;

  FUNC_4(&VAR_4->wpa_mcast_key, &VAR_5->wpa_mcast_key,
    sizeof(struct enc_key));
 }

out:
 FUNC_3(VAR_3, "ret %d", VAR_6);
 return VAR_6;
}
