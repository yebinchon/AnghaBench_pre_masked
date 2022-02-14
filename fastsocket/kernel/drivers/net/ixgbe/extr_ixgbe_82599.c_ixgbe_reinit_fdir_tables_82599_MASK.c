
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

s32 FUNC_6(struct ixgbe_hw *VAR_15)
{
 int VAR_16;
 u32 VAR_17 = FUNC_0(VAR_15, VAR_5);
 VAR_17 &= ~VAR_6;





 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  if (!(FUNC_0(VAR_15, VAR_1) &
        VAR_3))
   break;
  FUNC_4(10);
 }
 if (VAR_16 >= VAR_4) {
  FUNC_3(VAR_15, "Flow Director previous command isn't complete, "
         "aborting table re-initialization.\n");
  return VAR_0;
 }

 FUNC_2(VAR_15, VAR_7, 0);
 FUNC_1(VAR_15);







 FUNC_2(VAR_15, VAR_1,
                 (FUNC_0(VAR_15, VAR_1) |
                  VAR_2));
 FUNC_1(VAR_15);
 FUNC_2(VAR_15, VAR_1,
                 (FUNC_0(VAR_15, VAR_1) &
                  ~VAR_2));
 FUNC_1(VAR_15);




 FUNC_2(VAR_15, VAR_9, 0x00);
 FUNC_1(VAR_15);

 FUNC_2(VAR_15, VAR_5, VAR_17);
 FUNC_1(VAR_15);


 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  if (FUNC_0(VAR_15, VAR_5) &
                     VAR_6)
   break;
  FUNC_5(1000, 2000);
 }
 if (VAR_16 >= VAR_14) {
  FUNC_3(VAR_15, "Flow Director Signature poll time exceeded!\n");
  return VAR_0;
 }


 FUNC_0(VAR_15, VAR_13);
 FUNC_0(VAR_15, VAR_8);
 FUNC_0(VAR_15, VAR_11);
 FUNC_0(VAR_15, VAR_12);
 FUNC_0(VAR_15, VAR_10);

 return 0;
}
