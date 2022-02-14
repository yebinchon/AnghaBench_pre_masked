
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_nvm_info {scalar_t__ word_size; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_7, u16 VAR_8, u16 VAR_9,
    u16 *VAR_10)
{
 struct e1000_nvm_info *VAR_11 = &VAR_7->nvm;
 u32 VAR_12, VAR_13, VAR_14 = 0;
 u32 VAR_15 = 100000;
 s32 VAR_16 = VAR_6;




 if ((VAR_8 >= VAR_11->word_size) || (VAR_9 > (VAR_11->word_size - VAR_8)) ||
     (VAR_9 == 0)) {
  FUNC_0("nvm parameter(s) out of bounds\n");
  VAR_16 = -VAR_0;
  goto out;
 }

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_14 = ((VAR_8+VAR_12) << VAR_1) |
   (VAR_10[VAR_12] << VAR_2) |
   VAR_4;

  FUNC_3(VAR_5, VAR_14);

  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
   if (VAR_3 &
       FUNC_1(VAR_5)) {
    VAR_16 = VAR_6;
    break;
   }
   FUNC_2(5);
 }

  if (VAR_16 != VAR_6) {
   FUNC_0("Shadow RAM write EEWR timed out\n");
   break;
  }
 }

out:
 return VAR_16;
}
