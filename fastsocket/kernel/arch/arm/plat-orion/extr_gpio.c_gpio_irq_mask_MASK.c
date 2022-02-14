
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int status; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (size_t,size_t) ;

__attribute__((used)) static void FUNC_5(u32 VAR_4)
{
 int VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = VAR_3[VAR_4].status & VAR_2;
 u32 VAR_7 = (VAR_6 & (VAR_1 | VAR_0)) ?
  FUNC_0(VAR_5) : FUNC_1(VAR_5);
 u32 VAR_8 = FUNC_3(VAR_7);
 VAR_8 &= ~(1 << (VAR_5 & 31));
 FUNC_4(VAR_8, VAR_7);
}
