
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct r8a66597 {scalar_t__ bus_suspended; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct r8a66597*,int ,int ) ;
 int FUNC_4 (struct r8a66597*,int ,int ) ;
 int FUNC_5 (struct r8a66597*) ;
 int FUNC_6 (struct r8a66597*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct r8a66597 *VAR_8, int VAR_9,
     u16 VAR_10)
{
 if (VAR_10 == VAR_7) {
  FUNC_6(VAR_8, ~VAR_0, FUNC_1(VAR_9));
  FUNC_4(VAR_8, VAR_1, FUNC_0(VAR_9));
 } else {
  if (VAR_10 == VAR_4)
   FUNC_4(VAR_8, VAR_5, FUNC_2(VAR_9));
  else if (VAR_10 == VAR_6)
   FUNC_3(VAR_8, VAR_5, FUNC_2(VAR_9));

  FUNC_6(VAR_8, ~VAR_2, FUNC_1(VAR_9));
  FUNC_4(VAR_8, VAR_3, FUNC_0(VAR_9));

  if (VAR_8->bus_suspended)
   FUNC_8(FUNC_5(VAR_8));
 }

 FUNC_7(FUNC_5(VAR_8));
}
