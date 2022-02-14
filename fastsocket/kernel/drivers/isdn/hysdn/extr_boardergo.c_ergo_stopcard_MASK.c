
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hysdn_lock; int err_log_state; int state; scalar_t__ iobase; scalar_t__ irq_enabled; } ;
typedef TYPE_1__ hysdn_card ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned char) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(hysdn_card * VAR_7)
{
 unsigned long VAR_8;
 unsigned char VAR_9;

 FUNC_3(VAR_7);



 FUNC_4(&VAR_7->hysdn_lock, VAR_8);
 VAR_9 = FUNC_0(VAR_7->iobase + VAR_3);
 VAR_9 &= ~(VAR_5 | VAR_4);
 FUNC_1(VAR_7->iobase + VAR_3, VAR_9);
 VAR_7->irq_enabled = 0;
 FUNC_1(VAR_7->iobase + VAR_6, VAR_2);
 VAR_7->state = VAR_0;
 VAR_7->err_log_state = VAR_1;

 FUNC_5(&VAR_7->hysdn_lock, VAR_8);
}
