
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int tcword; int tcnt2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (int,int*) ;

__attribute__((used)) static unsigned long FUNC_3(void)
{
 u32 VAR_8, VAR_9;
 u8 VAR_10, VAR_11;


 VAR_7->tcword = (VAR_4 | VAR_2 |
    VAR_5);
 VAR_7->tcnt2 = VAR_1 & 0xff;
 VAR_7->tcnt2 = VAR_1 >> 8;


 VAR_8 = FUNC_0();


 do {
  FUNC_2(VAR_4 | VAR_3, &VAR_7->tcword);
  VAR_11 = FUNC_1(&VAR_7->tcnt2);
  VAR_10 = FUNC_1(&VAR_7->tcnt2);
  VAR_9 = FUNC_0();
 } while (VAR_10);


 FUNC_2(VAR_4 | VAR_2 | VAR_6,
        &VAR_7->tcword);






 return (VAR_9 - VAR_8) / (500000/VAR_0) * (500000/VAR_0);
}
