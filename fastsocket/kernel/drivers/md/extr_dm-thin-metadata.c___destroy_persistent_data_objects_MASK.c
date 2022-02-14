
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_pool_metadata {int bm; int tm; int nb_tm; int metadata_sm; int data_sm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dm_pool_metadata *VAR_0)
{
 FUNC_1(VAR_0->data_sm);
 FUNC_1(VAR_0->metadata_sm);
 FUNC_2(VAR_0->nb_tm);
 FUNC_2(VAR_0->tm);
 FUNC_0(VAR_0->bm);
}
