
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_nvm_info {scalar_t__ word_size; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_6, u16 VAR_7,
          u16 VAR_8, u16 *VAR_9)
{
 struct e1000_nvm_info *VAR_10 = &VAR_6->nvm;
 u32 VAR_11, VAR_12 = 0;
 s32 VAR_13 = 0;




 if ((VAR_7 >= VAR_10->word_size) || (VAR_8 > (VAR_10->word_size - VAR_7)) ||
     (VAR_8 == 0)) {
  FUNC_1("nvm parameter(s) out of bounds\n");
  return -VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_12 = ((VAR_9[VAR_11] << VAR_3) |
   ((VAR_7 + VAR_11) << VAR_2) |
   VAR_4);

  VAR_13 = FUNC_0(VAR_6, VAR_1);
  if (VAR_13)
   break;

  FUNC_2(VAR_5, VAR_12);

  VAR_13 = FUNC_0(VAR_6, VAR_1);
  if (VAR_13)
   break;
 }

 return VAR_13;
}
