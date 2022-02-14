
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_trans {int dummy; } ;
struct iwl_test {struct iwl_trans* trans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct iwl_test*,scalar_t__) ;
 int FUNC_1 (struct iwl_trans*,int,unsigned long*) ;
 int FUNC_2 (struct iwl_trans*,unsigned long*) ;
 int FUNC_3 (struct iwl_trans*,scalar_t__,unsigned char*,scalar_t__) ;
 int FUNC_4 (struct iwl_trans*,int ,scalar_t__) ;
 int FUNC_5 (struct iwl_trans*,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__*,unsigned char*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct iwl_test *VAR_6, u32 VAR_7,
 u32 VAR_8, unsigned char *VAR_9)
{
 struct iwl_trans *VAR_10 = VAR_6->trans;
 u32 VAR_11, VAR_12;
 unsigned long VAR_13;

 if (VAR_4 <= VAR_7 &&
     VAR_7 < VAR_4 + VAR_5) {

  if (VAR_8 < 4) {
   FUNC_6(&VAR_11, VAR_9, VAR_8);
   if (!FUNC_1(VAR_10, 0, &VAR_13))
     return -VAR_1;
   FUNC_4(VAR_10, VAR_2,
        (VAR_7 & 0x0000FFFF) |
        ((VAR_8 - 1) << 24));
   FUNC_4(VAR_10, VAR_3, VAR_11);
   FUNC_2(VAR_10, &VAR_13);
  } else {
   if (VAR_8 % 4)
    return -VAR_0;
   for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12 += 4)
    FUNC_5(VAR_10, VAR_7+VAR_12,
            *(u32 *)(VAR_9+VAR_12));
  }
 } else if (FUNC_0(VAR_6, VAR_7)) {
  FUNC_3(VAR_10, VAR_7, VAR_9, VAR_8 / 4);
 } else {
  return -VAR_0;
 }
 return 0;
}
