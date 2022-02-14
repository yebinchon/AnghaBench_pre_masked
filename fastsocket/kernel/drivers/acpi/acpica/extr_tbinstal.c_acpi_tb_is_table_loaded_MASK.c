
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct TYPE_4__ {size_t count; TYPE_1__* tables; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

u8 FUNC_2(u32 VAR_4)
{
 u8 VAR_5 = VAR_2;

 (void)FUNC_0(VAR_0);
 if (VAR_4 < VAR_3.count) {
  VAR_5 = (u8)
      (VAR_3.tables[VAR_4].flags &
       VAR_1);
 }

 (void)FUNC_1(VAR_0);
 return (VAR_5);
}
