
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nx_stats {int dummy; } ;
struct TYPE_4__ {scalar_t__ flags; int status; } ;
struct TYPE_5__ {TYPE_1__ of; int stats; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_14 = -1;

 if (VAR_7.of.flags != VAR_0)
  goto out;

 FUNC_5(&VAR_7.stats, 0, sizeof(struct nx_stats));

 VAR_14 = FUNC_0(&VAR_7);
 if (VAR_14)
  goto out;

 VAR_7.of.status = VAR_1;

 VAR_14 = FUNC_1(&VAR_8);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_1(&VAR_2);
 if (VAR_14)
  goto out_unreg_ecb;

 VAR_14 = FUNC_1(&VAR_6);
 if (VAR_14)
  goto out_unreg_cbc;

 VAR_14 = FUNC_1(&VAR_5);
 if (VAR_14)
  goto out_unreg_ctr;

 VAR_14 = FUNC_1(&VAR_10);
 if (VAR_14)
  goto out_unreg_ctr3686;

 VAR_14 = FUNC_1(&VAR_9);
 if (VAR_14)
  goto out_unreg_gcm;

 VAR_14 = FUNC_1(&VAR_4);
 if (VAR_14)
  goto out_unreg_gcm4106;

 VAR_14 = FUNC_1(&VAR_3);
 if (VAR_14)
  goto out_unreg_ccm;

 VAR_14 = FUNC_2(&VAR_12);
 if (VAR_14)
  goto out_unreg_ccm4309;

 VAR_14 = FUNC_2(&VAR_13);
 if (VAR_14)
  goto out_unreg_s256;

 VAR_14 = FUNC_2(&VAR_11);
 if (VAR_14)
  goto out_unreg_s512;

 goto out;

out_unreg_s512:
 FUNC_4(&VAR_13);
out_unreg_s256:
 FUNC_4(&VAR_12);
out_unreg_ccm4309:
 FUNC_3(&VAR_3);
out_unreg_ccm:
 FUNC_3(&VAR_4);
out_unreg_gcm4106:
 FUNC_3(&VAR_9);
out_unreg_gcm:
 FUNC_3(&VAR_10);
out_unreg_ctr3686:
 FUNC_3(&VAR_5);
out_unreg_ctr:
 FUNC_3(&VAR_6);
out_unreg_cbc:
 FUNC_3(&VAR_2);
out_unreg_ecb:
 FUNC_3(&VAR_8);
out:
 return VAR_14;
}
