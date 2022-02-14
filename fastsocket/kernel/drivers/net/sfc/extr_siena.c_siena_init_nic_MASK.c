
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;
struct efx_nic {scalar_t__ rx_hash_key; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int) ;
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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*,int,int,int ) ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*,int *,int ) ;
 int FUNC_8 (struct efx_nic*,int *,int ) ;
 int FUNC_9 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_10(struct efx_nic *VAR_25)
{
 efx_oword_t VAR_26;
 int VAR_27;


 VAR_27 = FUNC_4(VAR_25);
 if (VAR_27)
  return VAR_27;


 FUNC_7(VAR_25, &VAR_26, VAR_18);
 FUNC_3(VAR_26, VAR_9, 1);
 FUNC_8(VAR_25, &VAR_26, VAR_18);




 FUNC_7(VAR_25, &VAR_26, VAR_17);
 FUNC_3(VAR_26, VAR_1, 0);
 FUNC_3(VAR_26, VAR_14, 1);
 FUNC_8(VAR_25, &VAR_26, VAR_17);

 FUNC_7(VAR_25, &VAR_26, VAR_16);
 FUNC_3(VAR_26, VAR_3, 0);
 FUNC_3(VAR_26, VAR_6, 1);



 FUNC_3(VAR_26, VAR_5, 1);
 FUNC_3(VAR_26, VAR_4, 1);
 FUNC_3(VAR_26, VAR_7, 1);
 FUNC_3(VAR_26, VAR_8,
       VAR_0 >> 5);
 FUNC_8(VAR_25, &VAR_26, VAR_16);


 FUNC_9(&VAR_26, VAR_25->rx_hash_key, sizeof(VAR_26));
 FUNC_8(VAR_25, &VAR_26, VAR_20);


 FUNC_0(sizeof(VAR_25->rx_hash_key) <
       2 * sizeof(VAR_26) + VAR_13 / 8 ||
       VAR_12 != 0);
 FUNC_9(&VAR_26, VAR_25->rx_hash_key, sizeof(VAR_26));
 FUNC_8(VAR_25, &VAR_26, VAR_21);
 FUNC_9(&VAR_26, VAR_25->rx_hash_key + sizeof(VAR_26), sizeof(VAR_26));
 FUNC_8(VAR_25, &VAR_26, VAR_22);
 FUNC_2(VAR_26, VAR_11, 1,
        VAR_10, 1);
 FUNC_9(&VAR_26, VAR_25->rx_hash_key + 2 * sizeof(VAR_26),
        VAR_13 / 8);
 FUNC_8(VAR_25, &VAR_26, VAR_23);


 VAR_27 = FUNC_5(VAR_25, 1, 0, 0);
 if (VAR_27)
  return VAR_27;


 FUNC_1(VAR_26, VAR_2, 0);
 FUNC_8(VAR_25, &VAR_26, VAR_19);

 FUNC_1(VAR_26, VAR_15, 1);
 FUNC_8(VAR_25, &VAR_26, VAR_24);

 FUNC_6(VAR_25);
 return 0;
}
