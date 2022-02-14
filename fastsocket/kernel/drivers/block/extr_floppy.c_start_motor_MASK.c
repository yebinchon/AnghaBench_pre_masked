
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int timeout_fn ;
struct TYPE_8__ {scalar_t__ select_delay; } ;
struct TYPE_7__ {scalar_t__ select_date; int spinup_date; scalar_t__ first_read_date; } ;
struct TYPE_6__ {int dor; } ;
struct TYPE_5__ {int flags; } ;


 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(void (*VAR_9)(void))
{
 int VAR_10;
 int VAR_11;

 VAR_10 = 0xfc;
 VAR_11 = FUNC_0(VAR_4);
 if (!(VAR_8->flags & VAR_3)) {
  if (!(VAR_2->dor & (0x10 << FUNC_0(VAR_4)))) {
   FUNC_3();

   VAR_1->first_read_date = 0;

   VAR_1->spinup_date = VAR_6;
   VAR_11 |= (0x10 << FUNC_0(VAR_4));
  }
 } else if (VAR_2->dor & (0x10 << FUNC_0(VAR_4)))
  VAR_10 &= ~(0x10 << FUNC_0(VAR_4));


 FUNC_1(VAR_7 + VAR_4);
 FUNC_4(VAR_5, VAR_10, VAR_11);


 return (FUNC_2(VAR_1->select_date + VAR_0->select_delay,
           (timeout_fn) VAR_9));
}
