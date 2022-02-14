
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


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
 int FUNC_0 (int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;

void FUNC_6(struct e1000_hw *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17[4], VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;

 if (VAR_14->mac.type != VAR_13 ||
     !(FUNC_3(VAR_0) & VAR_1))
  return;


 for (VAR_21 = 0; VAR_21 < 4; VAR_21++) {
  VAR_17[VAR_21] = FUNC_3(FUNC_0(VAR_21));
  FUNC_4(FUNC_0(VAR_21),
       VAR_17[VAR_21] & ~VAR_12);
 }

 for (VAR_22 = 0; VAR_22 < 10; VAR_22++) {
  FUNC_2(1);
  VAR_20 = 0;
  for (VAR_21 = 0; VAR_21 < 4; VAR_21++)
   VAR_20 |= FUNC_3(FUNC_0(VAR_21));
  if (!(VAR_20 & VAR_12))
   break;
 }

 if (VAR_22 == 10)
  FUNC_1("Queue disable timed out after 10ms\n");





 VAR_18 = FUNC_3(VAR_7);
 FUNC_4(VAR_7, VAR_18 & ~VAR_8);

 VAR_16 = FUNC_3(VAR_9);
 FUNC_4(VAR_9, 0);

 VAR_15 = FUNC_3(VAR_3);
 VAR_19 = VAR_15 & ~(VAR_4 | VAR_6);
 VAR_19 |= VAR_5;

 FUNC_4(VAR_3, VAR_19);
 FUNC_4(VAR_3, VAR_19 | VAR_4);
 FUNC_5();
 FUNC_2(2);




 for (VAR_21 = 0; VAR_21 < 4; VAR_21++)
  FUNC_4(FUNC_0(VAR_21), VAR_17[VAR_21]);
 FUNC_4(VAR_3, VAR_15);
 FUNC_5();

 FUNC_4(VAR_9, VAR_16);
 FUNC_4(VAR_7, VAR_18);


 FUNC_3(VAR_11);
 FUNC_3(VAR_10);
 FUNC_3(VAR_2);
}
