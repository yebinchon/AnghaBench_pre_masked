
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_link_state {int speed; int up; } ;
struct efx_nic {int promiscuous; int reset_pending; struct efx_link_state link_state; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ,int,int ,int ,int ,int,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,int) ;
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
 scalar_t__ FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*,int *,int ) ;
 int FUNC_5 (struct efx_nic*,int *,int ) ;
 int FUNC_6 (struct efx_nic*) ;

void FUNC_7(struct efx_nic *VAR_11)
{
 struct efx_link_state *VAR_12 = &VAR_11->link_state;
 efx_oword_t VAR_13;
 int VAR_14, VAR_15;

 VAR_15 = !!FUNC_0(VAR_11->reset_pending);

 switch (VAR_12->speed) {
 case 10000: VAR_14 = 3; break;
 case 1000: VAR_14 = 2; break;
 case 100: VAR_14 = 1; break;
 default: VAR_14 = 0; break;
 }




 FUNC_1(VAR_13,
        VAR_5, 0xffff ,
        VAR_1, 1,
        VAR_4, VAR_11->promiscuous,
        VAR_2, 1,
        VAR_3, VAR_14);


 if (FUNC_3(VAR_11) >= VAR_0) {
  FUNC_2(VAR_13, VAR_7,
        !VAR_12->up || VAR_15);
 }

 FUNC_5(VAR_11, &VAR_13, VAR_9);


 FUNC_6(VAR_11);

 FUNC_4(VAR_11, &VAR_13, VAR_10);


 FUNC_2(VAR_13, VAR_6, 1);

 if (FUNC_3(VAR_11) >= VAR_0)
  FUNC_2(VAR_13, VAR_8, !VAR_15);
 FUNC_5(VAR_11, &VAR_13, VAR_10);
}
