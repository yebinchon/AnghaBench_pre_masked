
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;
struct efx_nic {int rx_hash_key; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct efx_nic*) ;
 scalar_t__ FUNC_3 (struct efx_nic*) ;
 scalar_t__ FUNC_4 (struct efx_nic*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct efx_nic*) ;
 scalar_t__ FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*,int *,int ) ;
 int FUNC_8 (struct efx_nic*,int *,int ) ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*) ;
 int FUNC_11 (int *,int ,int) ;

__attribute__((used)) static int FUNC_12(struct efx_nic *VAR_19)
{
 efx_oword_t VAR_20;
 int VAR_21;


 FUNC_7(VAR_19, &VAR_20, VAR_13);
 FUNC_1(VAR_20, VAR_5, 1);
 FUNC_8(VAR_19, &VAR_20, VAR_13);

 VAR_21 = FUNC_10(VAR_19);
 if (VAR_21)
  return VAR_21;




 if (FUNC_2(VAR_19)) {
  FUNC_7(VAR_19, &VAR_20, VAR_14);
  FUNC_1(VAR_20, VAR_4, 0);
  FUNC_8(VAR_19, &VAR_20, VAR_14);
 }

 if (FUNC_4(VAR_19)) {
  FUNC_7(VAR_19, &VAR_20, VAR_17);
  FUNC_1(VAR_20, VAR_10, 8);
  FUNC_1(VAR_20, VAR_11, 8);
  FUNC_1(VAR_20, VAR_8, 8);
  FUNC_1(VAR_20, VAR_9, 8);
  FUNC_8(VAR_19, &VAR_20, VAR_17);
 }





 FUNC_7(VAR_19, &VAR_20, VAR_12);
 FUNC_1(VAR_20, VAR_2, 1);
 FUNC_1(VAR_20, VAR_3, 1);
 if (FUNC_3(VAR_19))
  FUNC_1(VAR_20, VAR_1, 1);
 FUNC_8(VAR_19, &VAR_20, VAR_12);




 FUNC_7(VAR_19, &VAR_20, VAR_15);
 FUNC_1(VAR_20, VAR_6, 0);
 FUNC_8(VAR_19, &VAR_20, VAR_15);

 FUNC_9(VAR_19);

 if (FUNC_6(VAR_19) >= VAR_0) {

  FUNC_11(&VAR_20, VAR_19->rx_hash_key, sizeof(VAR_20));
  FUNC_8(VAR_19, &VAR_20, VAR_18);


  FUNC_0(VAR_20, VAR_7, 0);
  FUNC_8(VAR_19, &VAR_20, VAR_16);
 }

 FUNC_5(VAR_19);

 return 0;
}
