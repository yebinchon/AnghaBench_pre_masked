
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 u16 VAR_10;
 FUNC_1(VAR_5);
 VAR_10 = FUNC_3(VAR_7 + VAR_1);
 if (VAR_10 == VAR_3)
  FUNC_4(VAR_2,
         VAR_7 + VAR_1);
 FUNC_4(0x0000U, VAR_7 + VAR_4);
 FUNC_0(VAR_5);
 FUNC_2(VAR_6, "watchdog is barking!\n");
 return VAR_0;
}
