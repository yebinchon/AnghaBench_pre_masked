
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ucc_geth_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct ucc_geth_private*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct ucc_geth_private *VAR_2,
      u32 *VAR_3,
      u8 VAR_4,
      u32 VAR_5,
      u32 VAR_6,
      unsigned int VAR_7,
      int VAR_8)
{
 u32 VAR_9;
 u8 VAR_10;
 int VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  if ((VAR_11 = FUNC_2()) < 0) {
   if (FUNC_1(VAR_2))
    FUNC_5("fill_init_enet_entries: Can not get SNUM.");
   return VAR_11;
  }
  if ((VAR_10 == 0) && VAR_8)

   VAR_9 = 0;
  else {
   VAR_9 =
       FUNC_3(VAR_5, VAR_6);
   if (FUNC_0(VAR_9)) {
    if (FUNC_1(VAR_2))
     FUNC_5("fill_init_enet_entries: Can not allocate DPRAM memory.");
    FUNC_4((u8) VAR_11);
    return -VAR_1;
   }
  }
  *(VAR_3++) =
      ((u8) VAR_11 << VAR_0) | VAR_9
      | VAR_7;
 }

 return 0;
}
