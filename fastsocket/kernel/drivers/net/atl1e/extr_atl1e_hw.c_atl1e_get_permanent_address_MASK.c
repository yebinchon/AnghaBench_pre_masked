
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct atl1e_hw {int * perm_mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct atl1e_hw*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct atl1e_hw*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct atl1e_hw*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct atl1e_hw *VAR_7)
{
 u32 VAR_8[2];
 u32 VAR_9;
 u32 VAR_10;
 u8 VAR_11[VAR_3];

 if (FUNC_3(VAR_7->perm_mac_addr))
  return 0;


 VAR_8[0] = VAR_8[1] = 0;

 if (!FUNC_2(VAR_7)) {

  VAR_10 = FUNC_0(VAR_7, VAR_5);
  VAR_10 |= VAR_6;
  FUNC_1(VAR_7, VAR_5, VAR_10);
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
   FUNC_5(10);
   VAR_10 = FUNC_0(VAR_7, VAR_5);
   if ((VAR_10 & VAR_6) == 0)
    break;
  }
  if (VAR_9 >= VAR_2)
   return VAR_1;
 }


 VAR_8[0] = FUNC_0(VAR_7, VAR_4);
 VAR_8[1] = FUNC_0(VAR_7, VAR_4 + 4);
 *(u32 *) &VAR_11[2] = FUNC_7(VAR_8[0]);
 *(u16 *) &VAR_11[0] = FUNC_6(*(u16 *)&VAR_8[1]);

 if (FUNC_3(VAR_11)) {
  FUNC_4(VAR_7->perm_mac_addr, VAR_11, VAR_3);
  return 0;
 }

 return VAR_0;
}
