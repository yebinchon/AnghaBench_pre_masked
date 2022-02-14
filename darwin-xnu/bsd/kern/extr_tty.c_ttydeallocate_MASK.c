
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct TYPE_3__ {int si_note; } ;
struct tty {int t_lock; int t_outq; int t_canq; int t_rawq; TYPE_2__ t_wsel; TYPE_1__ t_rsel; } ;


 int FUNC_0 (struct tty*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(struct tty *VAR_2)
{
 FUNC_2(VAR_2);







 FUNC_3(&VAR_2->t_rawq);
 FUNC_3(&VAR_2->t_canq);
 FUNC_3(&VAR_2->t_outq);
 FUNC_4(&VAR_2->t_lock, VAR_1);
 FUNC_0(VAR_2, VAR_0);
}
