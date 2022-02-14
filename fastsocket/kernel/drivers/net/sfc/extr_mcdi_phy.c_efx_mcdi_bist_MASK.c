
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct efx_nic {scalar_t__ phy_type; } ;
typedef int efx_dword_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct efx_nic*,int ,int *,int ,int *,int,size_t*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct efx_nic *VAR_18, unsigned int VAR_19,
    int *VAR_20)
{
 unsigned int VAR_21, VAR_22, VAR_23 = 0;
 size_t VAR_24;
 u32 VAR_25;
 u8 *VAR_26, *VAR_27;
 int VAR_28;

 VAR_26 = FUNC_7(0x100, VAR_3);
 if (VAR_26 == ((void*)0))
  return -VAR_1;

 FUNC_0(VAR_13 != 0);
 FUNC_4(VAR_26, VAR_17, VAR_19);
 VAR_28 = FUNC_5(VAR_18, VAR_11, VAR_26, VAR_12,
     ((void*)0), 0, ((void*)0));
 if (VAR_28)
  goto out;


 for (VAR_21 = 0; VAR_21 < 100; ++VAR_21) {
  FUNC_0(VAR_7 != 0);
  VAR_28 = FUNC_5(VAR_18, VAR_6, ((void*)0), 0,
      VAR_26, 0x100, &VAR_24);
  if (VAR_28)
   goto out;

  VAR_25 = FUNC_2(VAR_26, VAR_15);
  if (VAR_25 != VAR_10)
   goto finished;

  FUNC_8(100);
 }

 VAR_28 = -VAR_2;
 goto out;

finished:
 VAR_20[VAR_23++] = (VAR_25 == VAR_9) ? 1 : -1;


 if (VAR_18->phy_type == VAR_14 &&
     (VAR_19 == VAR_5 ||
      VAR_19 == VAR_4)) {
  VAR_27 = FUNC_3(VAR_26, VAR_16);
  if (VAR_25 == VAR_9 &&
      VAR_24 >= VAR_8) {
   for (VAR_22 = 0; VAR_22 < 8; VAR_22++) {
    VAR_20[VAR_23 + VAR_22] =
     FUNC_1(((efx_dword_t *)VAR_27)[VAR_22],
       VAR_0);
   }
  }
  VAR_23 += 8;
 }
 VAR_28 = VAR_23;

out:
 FUNC_6(VAR_26);

 return VAR_28;
}
