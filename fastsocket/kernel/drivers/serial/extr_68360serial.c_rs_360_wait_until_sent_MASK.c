
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct TYPE_8__ {TYPE_3__ volatile* tx_bd_base; TYPE_3__* tx_cur; TYPE_1__* state; } ;
typedef TYPE_2__ ser_info_t ;
struct TYPE_10__ {int state; } ;
struct TYPE_9__ {int status; } ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_3__ QUICC_BD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int VAR_6 ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,...) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct tty_struct *VAR_7, int VAR_8)
{
 ser_info_t *VAR_9 = (ser_info_t *)VAR_7->driver_data;
 unsigned long VAR_10, VAR_11;

 volatile QUICC_BD *VAR_12;

 if (FUNC_5(VAR_9, VAR_7->name, "rs_wait_until_sent"))
  return;






 VAR_10 = VAR_5;
 VAR_11 = 1;
 if (VAR_8)
  VAR_11 = FUNC_2(VAR_11, (unsigned long)VAR_8);





 FUNC_1();





 do {




  FUNC_3(FUNC_0(VAR_11));
  if (FUNC_6(VAR_4))
   break;
  if (VAR_8 && (FUNC_7(VAR_5, VAR_10 + VAR_8)))
   break;






  VAR_12 = VAR_9->tx_cur;
  if (VAR_12 == VAR_9->tx_bd_base)
   VAR_12 += (VAR_3-1);
  else
   VAR_12--;
 } while (VAR_12->status & VAR_0);
 VAR_4->state = VAR_2;
 FUNC_8();



}
