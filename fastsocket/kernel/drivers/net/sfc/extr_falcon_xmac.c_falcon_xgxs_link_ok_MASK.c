
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct efx_nic*,int *,int ) ;
 int FUNC_3 (struct efx_nic*,int *,int ) ;

__attribute__((used)) static bool FUNC_4(struct efx_nic *VAR_7)
{
 efx_oword_t VAR_8;
 bool VAR_9, VAR_10 = 0;
 int VAR_11;


 FUNC_2(VAR_7, &VAR_8, VAR_6);

 VAR_9 = FUNC_0(VAR_8, VAR_1);
 VAR_11 = FUNC_0(VAR_8, VAR_5);
 if (VAR_9 && (VAR_11 == VAR_0))
  VAR_10 = 1;


 FUNC_1(VAR_8, VAR_3, VAR_0);
 FUNC_1(VAR_8, VAR_2, VAR_0);
 FUNC_1(VAR_8, VAR_4, VAR_0);
 FUNC_3(VAR_7, &VAR_8, VAR_6);

 return VAR_10;
}
