
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_5__ {size_t abs_id; } ;
struct sge_eth_rxq {TYPE_2__ rspq; } ;
struct port_info {size_t first_qset; int rss_size; int viid; TYPE_3__* adapter; } ;
struct TYPE_4__ {struct sge_eth_rxq* ethrxq; } ;
struct TYPE_6__ {int fn; TYPE_1__ sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t*) ;
 size_t* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,int,size_t*,int) ;

__attribute__((used)) static int FUNC_3(const struct port_info *VAR_2, const u16 *VAR_3)
{
 u16 *VAR_4;
 int VAR_5, VAR_6;
 const struct sge_eth_rxq *VAR_7 = &VAR_2->adapter->sge.ethrxq[VAR_2->first_qset];

 VAR_4 = FUNC_1(VAR_2->rss_size * sizeof(u16), VAR_1);
 if (!VAR_4)
  return -VAR_0;


 for (VAR_5 = 0; VAR_5 < VAR_2->rss_size; VAR_5++, VAR_3++)
  VAR_4[VAR_5] = VAR_7[*VAR_3].rspq.abs_id;

 VAR_6 = FUNC_2(VAR_2->adapter, VAR_2->adapter->fn, VAR_2->viid, 0,
      VAR_2->rss_size, VAR_4, VAR_2->rss_size);
 FUNC_0(VAR_4);
 return VAR_6;
}
