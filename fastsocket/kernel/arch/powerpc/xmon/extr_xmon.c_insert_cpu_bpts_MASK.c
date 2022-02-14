
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int enabled; int address; } ;
struct TYPE_3__ {int address; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void)
{
 if (VAR_4.enabled)
  FUNC_2(VAR_4.address | (VAR_4.enabled & 7));
 if (VAR_5 && FUNC_0(VAR_2))
  FUNC_1(VAR_3, VAR_5->address
    | (VAR_5->enabled & (VAR_0|VAR_1)));
}
