
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ loopback_mode; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct efx_nic*) ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (struct efx_nic*,int *,int ) ;
 int FUNC_4 (struct efx_nic*,int *,int ) ;
 int FUNC_5 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_6(struct efx_nic *VAR_13)
{
 efx_oword_t VAR_14;
 bool VAR_15 = (VAR_13->loopback_mode == VAR_12);
 bool VAR_16 = (VAR_13->loopback_mode == VAR_10);
 bool VAR_17 = (VAR_13->loopback_mode == VAR_11);



 if (FUNC_2(VAR_13)) {
  bool VAR_18, VAR_19, VAR_20;
  bool VAR_21;

  FUNC_3(VAR_13, &VAR_14, VAR_8);
  VAR_19 = FUNC_0(VAR_14, VAR_7);
  VAR_18 =
   FUNC_0(VAR_14, VAR_6);

  FUNC_3(VAR_13, &VAR_14, VAR_9);
  VAR_20 = FUNC_0(VAR_14, VAR_2);


  VAR_21 = ((VAR_15 != VAR_19) ||
         (VAR_16 != VAR_20) ||
         (VAR_17 != VAR_18));

  if (VAR_21)
   FUNC_5(VAR_13);
 }

 FUNC_3(VAR_13, &VAR_14, VAR_8);
 FUNC_1(VAR_14, VAR_1,
       (VAR_15 || VAR_16) ?
       VAR_0 : 0);
 FUNC_1(VAR_14, VAR_7, VAR_15);
 FUNC_1(VAR_14, VAR_6, VAR_17);
 FUNC_4(VAR_13, &VAR_14, VAR_8);

 FUNC_3(VAR_13, &VAR_14, VAR_9);
 FUNC_1(VAR_14, VAR_5, VAR_16);
 FUNC_1(VAR_14, VAR_4, VAR_16);
 FUNC_1(VAR_14, VAR_3, VAR_16);
 FUNC_1(VAR_14, VAR_2, VAR_16);
 FUNC_4(VAR_13, &VAR_14, VAR_9);
}
