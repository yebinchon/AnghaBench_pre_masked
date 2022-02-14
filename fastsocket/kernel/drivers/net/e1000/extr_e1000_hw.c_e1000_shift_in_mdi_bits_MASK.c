
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct e1000_hw*,int*) ;
 int FUNC_2 (struct e1000_hw*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static u16 FUNC_5(struct e1000_hw *VAR_3)
{
 u32 VAR_4;
 u16 VAR_5 = 0;
 u8 VAR_6;
 VAR_4 = FUNC_3(VAR_0);


 VAR_4 &= ~VAR_2;
 VAR_4 &= ~VAR_1;

 FUNC_4(VAR_0, VAR_4);
 FUNC_0();





 FUNC_2(VAR_3, &VAR_4);
 FUNC_1(VAR_3, &VAR_4);

 for (VAR_5 = 0, VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  VAR_5 = VAR_5 << 1;
  FUNC_2(VAR_3, &VAR_4);
  VAR_4 = FUNC_3(VAR_0);

  if (VAR_4 & VAR_1)
   VAR_5 |= 1;
  FUNC_1(VAR_3, &VAR_4);
 }

 FUNC_2(VAR_3, &VAR_4);
 FUNC_1(VAR_3, &VAR_4);

 return VAR_5;
}
