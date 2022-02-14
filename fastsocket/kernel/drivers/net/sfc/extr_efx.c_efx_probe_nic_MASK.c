
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int n_channels; TYPE_1__* type; int n_tx_channels; int net_dev; int rss_spread; int * rx_indir_table; int rx_hash_key; } ;
struct TYPE_2__ {int (* probe ) (struct efx_nic*) ;int (* remove ) (struct efx_nic*) ;int (* dimension_resources ) (struct efx_nic*) ;} ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (struct efx_nic*,int ,int ,int,int) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (size_t,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (struct efx_nic*) ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_11(struct efx_nic *VAR_3)
{
 size_t VAR_4;
 int VAR_5;

 FUNC_6(VAR_3, VAR_0, VAR_3->net_dev, "creating NIC\n");


 VAR_5 = VAR_3->type->probe(VAR_3);
 if (VAR_5)
  return VAR_5;



 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  goto fail;

 VAR_3->type->dimension_resources(VAR_3);

 if (VAR_3->n_channels > 1)
  FUNC_5(&VAR_3->rx_hash_key, sizeof(VAR_3->rx_hash_key));
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->rx_indir_table); VAR_4++)
  VAR_3->rx_indir_table[VAR_4] =
   FUNC_4(VAR_4, VAR_3->rss_spread);

 FUNC_3(VAR_3);
 FUNC_7(VAR_3->net_dev, VAR_3->n_tx_channels);


 FUNC_1(VAR_3, VAR_2, VAR_1, 1,
    1);

 return 0;

fail:
 VAR_3->type->remove(VAR_3);
 return VAR_5;
}
