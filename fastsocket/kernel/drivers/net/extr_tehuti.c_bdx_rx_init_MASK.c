
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rxf_desc {int dummy; } ;
struct TYPE_8__ {int memsz; scalar_t__ pktsz; } ;
struct TYPE_5__ {TYPE_4__ m; } ;
struct TYPE_7__ {TYPE_4__ m; } ;
struct bdx_priv {TYPE_2__* ndev; TYPE_1__ rxf_fifo0; int rxdb; int rxf_size; int rxd_size; TYPE_3__ rxd_fifo0; } ;
struct TYPE_6__ {int name; scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct bdx_priv*,TYPE_4__*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_3(struct bdx_priv *VAR_12)
{
 VAR_2;

 if (FUNC_1(VAR_12, &VAR_12->rxd_fifo0.m, VAR_12->rxd_size,
     VAR_4, VAR_5,
     VAR_6, VAR_7))
  goto err_mem;
 if (FUNC_1(VAR_12, &VAR_12->rxf_fifo0.m, VAR_12->rxf_size,
     VAR_8, VAR_9,
     VAR_10, VAR_11))
  goto err_mem;
 if (!
     (VAR_12->rxdb =
      FUNC_2(VAR_12->rxf_fifo0.m.memsz /
        sizeof(struct rxf_desc))))
  goto err_mem;

 VAR_12->rxf_fifo0.m.pktsz = VAR_12->ndev->mtu + VAR_3;
 return 0;

err_mem:
 FUNC_0("%s: %s: Rx init failed\n", VAR_0, VAR_12->ndev->name);
 return -VAR_1;
}
