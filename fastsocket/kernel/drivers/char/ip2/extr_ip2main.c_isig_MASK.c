
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int driver_data; TYPE_2__* ldisc; scalar_t__ pgrp; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* flush_buffer ) (struct tty_struct*) ;} ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static inline void FUNC_4(int VAR_0, struct tty_struct *VAR_1, int VAR_2)
{

 if (VAR_1->pgrp)
  FUNC_2(VAR_1->pgrp, VAR_0, 1);
 if (VAR_2 || !FUNC_0(VAR_1)) {
  if ( VAR_1->ldisc->ops->flush_buffer )
   VAR_1->ldisc->ops->flush_buffer(VAR_1);
  FUNC_1( VAR_1->driver_data );
 }
}
