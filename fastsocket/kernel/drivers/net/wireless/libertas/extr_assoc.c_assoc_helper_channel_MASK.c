
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ channel; } ;
struct lbs_private {TYPE_3__ curbssparams; scalar_t__ mesh_dev; } ;
struct TYPE_4__ {scalar_t__ wep_enabled; } ;
struct assoc_request {scalar_t__ channel; int flags; TYPE_2__* wep_keys; TYPE_1__ secinfo; } ;
struct TYPE_5__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct lbs_private*,int ,scalar_t__) ;
 int FUNC_4 (struct lbs_private*,scalar_t__) ;
 int FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct lbs_private *VAR_5,
                                struct assoc_request * VAR_6)
{
 int VAR_7 = 0;

 FUNC_1(VAR_4);

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7) {
  FUNC_0("ASSOC: channel: error getting channel.\n");
  goto done;
 }

 if (VAR_6->channel == VAR_5->curbssparams.channel)
  goto done;

 if (VAR_5->mesh_dev) {



  FUNC_3(VAR_5, VAR_3,
    VAR_6->channel);
 }

 FUNC_0("ASSOC: channel: %d -> %d\n",
        VAR_5->curbssparams.channel, VAR_6->channel);

 VAR_7 = FUNC_4(VAR_5, VAR_6->channel);
 if (VAR_7 < 0)
  FUNC_0("ASSOC: channel: error setting channel.\n");




 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7) {
  FUNC_0("ASSOC: channel: error getting channel.\n");
  goto done;
 }

 if (VAR_6->channel != VAR_5->curbssparams.channel) {
  FUNC_0("ASSOC: channel: failed to update channel to %d\n",
                VAR_6->channel);
  goto restore_mesh;
 }

 if ( VAR_6->secinfo.wep_enabled
     && (VAR_6->wep_keys[0].len
        || VAR_6->wep_keys[1].len
        || VAR_6->wep_keys[2].len
        || VAR_6->wep_keys[3].len)) {

  FUNC_6(VAR_1, &VAR_6->flags);
 }


  FUNC_6(VAR_0, &VAR_6->flags);

 restore_mesh:
 if (VAR_5->mesh_dev)
  FUNC_3(VAR_5, VAR_2,
    VAR_5->curbssparams.channel);

 done:
 FUNC_2(VAR_4, "ret %d", VAR_7);
 return VAR_7;
}
