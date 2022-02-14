
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sky2_hw {int flags; scalar_t__ chip_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct sky2_hw*,unsigned int,int ) ;
 int FUNC_2 (struct sky2_hw*,unsigned int,int ,int) ;
 int FUNC_3 (struct sky2_hw*,unsigned int,int ,int) ;
 int * VAR_23 ;
 int FUNC_4 (struct sky2_hw*,int ) ;
 int FUNC_5 (struct sky2_hw*,int ,int ) ;
 int FUNC_6 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct sky2_hw *VAR_24, unsigned VAR_25)
{
 u32 VAR_26;
 u16 VAR_27;


 FUNC_6(VAR_24, FUNC_0(VAR_25, VAR_12), VAR_11);


 FUNC_6(VAR_24, FUNC_0(VAR_25, VAR_3), VAR_4);

 if (VAR_24->flags & VAR_20) {

  FUNC_2(VAR_24, VAR_25, VAR_16, 2);

  VAR_27 = FUNC_1(VAR_24, VAR_25, VAR_17);

  VAR_27 &= ~VAR_18;
  FUNC_2(VAR_24, VAR_25, VAR_17, VAR_27);


  FUNC_2(VAR_24, VAR_25, VAR_16, 0);
 }


 FUNC_3(VAR_24, VAR_25, VAR_10,
      VAR_8 | VAR_9 |
      VAR_5 | VAR_6 |
      VAR_7);

 if (VAR_24->chip_id != VAR_1) {
  if (VAR_24->chip_id == VAR_2) {

   FUNC_2(VAR_24, VAR_25, VAR_16, 2);

   VAR_27 = FUNC_1(VAR_24, VAR_25, VAR_17);

   VAR_27 |= VAR_19;
   FUNC_2(VAR_24, VAR_25, VAR_17, VAR_27);


   FUNC_2(VAR_24, VAR_25, VAR_16, 0);
  }


  FUNC_2(VAR_24, VAR_25, VAR_15, VAR_14);
 }

 FUNC_6(VAR_24, VAR_0, VAR_22);
 VAR_26 = FUNC_4(VAR_24, VAR_13);
 VAR_26 |= VAR_23[VAR_25];
 FUNC_5(VAR_24, VAR_13, VAR_26);
 FUNC_6(VAR_24, VAR_0, VAR_21);
}
