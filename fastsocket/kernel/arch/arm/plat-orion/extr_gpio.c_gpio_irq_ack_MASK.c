
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(u32 VAR_4)
{
 int VAR_5 = VAR_3[VAR_4].status & VAR_2;
 if (VAR_5 & (VAR_1 | VAR_0)) {
  int VAR_6 = FUNC_1(VAR_4);
  FUNC_2(~(1 << (VAR_6 & 31)), FUNC_0(VAR_6));
 }
}
