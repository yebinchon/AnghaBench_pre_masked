
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lbs_private {int lock; int wep_tx_keyidx; int * wep_keys; int mac_control; } ;
struct enc_key {int dummy; } ;
struct TYPE_3__ {scalar_t__ wep_enabled; } ;
struct assoc_request {int wep_tx_keyidx; TYPE_2__* wep_keys; TYPE_1__ secinfo; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lbs_private*,int ,struct assoc_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct lbs_private*) ;
 int FUNC_4 (int *,TYPE_2__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct lbs_private *VAR_4,
     struct assoc_request *VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;

 FUNC_1(VAR_3);


 if (VAR_5->wep_keys[0].len || VAR_5->wep_keys[1].len ||
     VAR_5->wep_keys[2].len || VAR_5->wep_keys[3].len)
  VAR_7 = FUNC_0(VAR_4, VAR_0, VAR_5);
 else
  VAR_7 = FUNC_0(VAR_4, VAR_2, VAR_5);

 if (VAR_7)
  goto out;


 if (VAR_5->secinfo.wep_enabled)
  VAR_4->mac_control |= VAR_1;
 else
  VAR_4->mac_control &= ~VAR_1;

 FUNC_3(VAR_4);

 FUNC_5(&VAR_4->lock);


 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  FUNC_4(&VAR_4->wep_keys[VAR_6], &VAR_5->wep_keys[VAR_6],
         sizeof(struct enc_key));
 }
 VAR_4->wep_tx_keyidx = VAR_5->wep_tx_keyidx;

 FUNC_6(&VAR_4->lock);

out:
 FUNC_2(VAR_3, "ret %d", VAR_7);
 return VAR_7;
}
