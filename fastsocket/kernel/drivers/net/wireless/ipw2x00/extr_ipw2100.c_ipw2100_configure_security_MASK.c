
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipw2100_priv {int status; TYPE_3__* ieee; } ;
struct TYPE_5__ {int flags; scalar_t__ auth_mode; int level; int unicast_uses_group; scalar_t__ enabled; scalar_t__* key_sizes; int * keys; } ;
struct TYPE_4__ {int tx_keyidx; } ;
struct TYPE_6__ {TYPE_2__ sec; TYPE_1__ crypt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct ipw2100_priv*) ;
 int FUNC_1 (struct ipw2100_priv*) ;
 int FUNC_2 (struct ipw2100_priv*,int,int ,scalar_t__,int) ;
 int FUNC_3 (struct ipw2100_priv*,int ,int) ;
 int FUNC_4 (struct ipw2100_priv*,int,int,int,int) ;
 int FUNC_5 (struct ipw2100_priv*,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ipw2100_priv *VAR_13, int VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 if (!(VAR_13->status & VAR_8))
  return 0;

 if (!VAR_14) {
  VAR_16 = FUNC_0(VAR_13);
  if (VAR_16)
   return VAR_16;
 }

 if (!VAR_13->ieee->sec.enabled) {
  VAR_16 =
      FUNC_4(VAR_13, VAR_1,
           VAR_6, 0, 1);
 } else {
  VAR_17 = VAR_1;
  if (VAR_13->ieee->sec.flags & VAR_4) {
   if (VAR_13->ieee->sec.auth_mode == VAR_12)
    VAR_17 = VAR_2;
   else if (VAR_13->ieee->sec.auth_mode == VAR_11)
    VAR_17 = VAR_0;
  }

  VAR_18 = VAR_6;
  if (VAR_13->ieee->sec.flags & VAR_5)
   VAR_18 = VAR_13->ieee->sec.level;

  VAR_19 = 0;
  if (VAR_13->ieee->sec.flags & VAR_7)
   VAR_19 = VAR_13->ieee->sec.unicast_uses_group;

  VAR_16 =
      FUNC_4(VAR_13, VAR_17, VAR_18,
           VAR_19, 1);
 }

 if (VAR_16)
  goto exit;

 if (VAR_13->ieee->sec.enabled) {
  for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
   if (!(VAR_13->ieee->sec.flags & (1 << VAR_15))) {
    FUNC_6(VAR_13->ieee->sec.keys[VAR_15], 0, VAR_10);
    VAR_13->ieee->sec.key_sizes[VAR_15] = 0;
   } else {
    VAR_16 = FUNC_2(VAR_13, VAR_15,
            VAR_13->ieee->sec.keys[VAR_15],
            VAR_13->ieee->sec.
            key_sizes[VAR_15], 1);
    if (VAR_16)
     goto exit;
   }
  }

  FUNC_3(VAR_13, VAR_13->ieee->crypt_info.tx_keyidx, 1);
 }



 VAR_16 =
     FUNC_5(VAR_13,
      VAR_13->ieee->sec.
      enabled ? VAR_3 : 0, 1);
 if (VAR_16)
  goto exit;

 VAR_13->status &= ~VAR_9;

      exit:
 if (!VAR_14)
  FUNC_1(VAR_13);

 return VAR_16;
}
