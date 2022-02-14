
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {void* dst_ip_msk; int dst_ip; void* src_ip_msk; int src_ip; } ;
struct mlx4_spec_list {int list; TYPE_5__ ipv4; int id; } ;
struct mlx4_en_priv {int dummy; } ;
struct list_head {int dummy; } ;
struct ethtool_usrip4_spec {scalar_t__ ip4dst; scalar_t__ ip4src; } ;
struct TYPE_7__ {int ip4dst; int ip4src; } ;
struct TYPE_8__ {TYPE_2__ usr_ip4_spec; } ;
struct TYPE_6__ {struct ethtool_usrip4_spec usr_ip4_spec; } ;
struct TYPE_9__ {TYPE_3__ h_u; TYPE_1__ m_u; } ;
struct ethtool_rxnfc {TYPE_4__ fs; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_spec_list*) ;
 struct mlx4_spec_list* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (struct mlx4_en_priv*,struct ethtool_rxnfc*,struct list_head*,struct mlx4_spec_list*,int ) ;

__attribute__((used)) static int FUNC_5(struct mlx4_en_priv *VAR_4,
         struct ethtool_rxnfc *VAR_5,
         struct list_head *VAR_6)
{
 int VAR_7;
 struct mlx4_spec_list *VAR_8 = ((void*)0);
 struct mlx4_spec_list *VAR_9 = ((void*)0);
 struct ethtool_usrip4_spec *VAR_10 = &VAR_5->fs.m_u.usr_ip4_spec;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (!VAR_8 || !VAR_9) {
  FUNC_0(VAR_4, "Fail to alloc ethtool rule.\n");
  VAR_7 = -VAR_0;
  goto free_spec;
 }

 VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_8,
         VAR_5->fs.h_u.
         usr_ip4_spec.ip4dst);
 if (VAR_7)
  goto free_spec;
 VAR_9->id = VAR_3;
 VAR_9->ipv4.src_ip = VAR_5->fs.h_u.usr_ip4_spec.ip4src;
 if (VAR_10->ip4src)
  VAR_9->ipv4.src_ip_msk = VAR_1;
 VAR_9->ipv4.dst_ip = VAR_5->fs.h_u.usr_ip4_spec.ip4dst;
 if (VAR_10->ip4dst)
  VAR_9->ipv4.dst_ip_msk = VAR_1;
 FUNC_3(&VAR_9->list, VAR_6);

 return 0;

free_spec:
 FUNC_1(VAR_8);
 FUNC_1(VAR_9);
 return VAR_7;
}
