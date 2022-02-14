
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_8)
{
 s32 VAR_9;
 u16 VAR_10, VAR_11;
 u32 VAR_12;
 u32 VAR_13 = 0;

 VAR_10 = VAR_1;
 VAR_9 =
     FUNC_0(VAR_8,
          VAR_2,
          VAR_10);
 if (VAR_9)
  return VAR_9;


 VAR_12 = FUNC_3(VAR_7);
 VAR_12 &= ~VAR_3;
 VAR_12 |= VAR_0;
 FUNC_4(VAR_7, VAR_12);

 do {
  VAR_9 = FUNC_1(VAR_8, VAR_6, &VAR_10);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_1(VAR_8, VAR_6, &VAR_11);
  if (VAR_9)
   return VAR_9;
  VAR_13++;
 } while ((VAR_10 != VAR_11) && (VAR_13 < VAR_5));

 VAR_10 &= ~VAR_4;

 return FUNC_2(VAR_8, VAR_6, VAR_10);
}
