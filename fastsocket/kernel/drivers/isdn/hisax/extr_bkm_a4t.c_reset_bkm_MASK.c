
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ base; } ;
struct TYPE_5__ {TYPE_1__ ax; } ;
struct IsdnCardState {scalar_t__ typ; TYPE_2__ hw; } ;
struct TYPE_6__ {int i20SysControl; int i20GuestControl; } ;
typedef TYPE_3__ I20_REGISTER_FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_9)
{
 if (VAR_9->typ == VAR_0) {
  I20_REGISTER_FILE *VAR_10 = (I20_REGISTER_FILE *) (VAR_9->hw.ax.base);

  VAR_10->i20SysControl = 0xFF;
  FUNC_0(10);

  VAR_10->i20SysControl = VAR_8 | 0xFF;
  FUNC_0(10);

  VAR_10->i20SysControl = VAR_8 | VAR_7;

  VAR_10->i20GuestControl = VAR_6 |
      VAR_5 |
      VAR_3 |
      VAR_1 |
      VAR_4 |
      VAR_2;
  FUNC_0(10);


  VAR_10->i20GuestControl &= ~(VAR_1 |
      VAR_5 |
      VAR_3);
  FUNC_0(10);
 }
}
