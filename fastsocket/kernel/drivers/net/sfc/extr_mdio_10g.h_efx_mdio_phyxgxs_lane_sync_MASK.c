
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efx_nic*,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*,int) ;

__attribute__((used)) static inline bool FUNC_2(struct efx_nic *VAR_4)
{
 int VAR_5, VAR_6;
 bool VAR_7;

 for (VAR_5 = 0; VAR_5 < 2; ++VAR_5)
  VAR_6 = FUNC_0(VAR_4, VAR_0,
         VAR_1);

 VAR_7 = !!(VAR_6 & VAR_2);
 if (!VAR_7)
  FUNC_1(VAR_4, VAR_3, VAR_4->net_dev, "XGXS lane status: %x\n",
     VAR_6);
 return VAR_7;
}
