
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int irqreturn_t ;
struct TYPE_12__ {int lock; int quiescent; TYPE_2__* mbox; int pend_cmds; } ;
typedef TYPE_3__ adapter_t ;
struct TYPE_10__ {int numstatus; int status; scalar_t__ completed; } ;
struct TYPE_11__ {TYPE_1__ m_in; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int*,int,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int*,void*,int) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t
FUNC_13(int VAR_2, void *VAR_3)
{
 adapter_t *VAR_4 = VAR_3;
 unsigned long VAR_5;
 u8 VAR_6;
 u8 VAR_7;
 u8 VAR_8[VAR_0];
 u8 VAR_9;
 int VAR_10 = 0;





 FUNC_11(&VAR_4->lock, VAR_5);

 do {

  VAR_9 = FUNC_5(VAR_4);
  if( (VAR_9 & VAR_1) == 0 ) {



   goto out_unlock;
  }
  FUNC_10(VAR_4, VAR_9);

  while((VAR_7 = (volatile u8)VAR_4->mbox->m_in.numstatus)
    == 0xFF)
   FUNC_3();
  VAR_4->mbox->m_in.numstatus = 0xFF;

  VAR_6 = VAR_4->mbox->m_in.status;




  FUNC_2(VAR_7, &VAR_4->pend_cmds);

  FUNC_9(VAR_8, (void *)VAR_4->mbox->m_in.completed,
    VAR_7);


  FUNC_4(VAR_4);

  FUNC_6(VAR_4, VAR_8, VAR_7, VAR_6);

  FUNC_7(VAR_4);

  VAR_10 = 1;


  if(FUNC_1(&VAR_4->quiescent) == 0) {
   FUNC_8(VAR_4);
  }

 } while(1);

 out_unlock:

 FUNC_12(&VAR_4->lock, VAR_5);

 return FUNC_0(VAR_10);
}
