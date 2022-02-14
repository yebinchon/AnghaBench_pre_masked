
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int tx; } ;
struct TYPE_10__ {TYPE_3__ icount; TYPE_1__* state; } ;
struct sn_cons_port {TYPE_4__ sc_port; TYPE_2__* sc_ops; int sc_is_asynch; } ;
struct circ_buf {int head; int tail; char* buf; } ;
struct TYPE_8__ {int (* sal_puts_raw ) (char*,int) ;int (* sal_puts ) (char*,int) ;} ;
struct TYPE_7__ {struct circ_buf xmit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_10(struct sn_cons_port *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;
 char *VAR_12;
 struct circ_buf *VAR_13;

 if (!VAR_4)
  return;

 FUNC_0(!VAR_4->sc_is_asynch);

 if (VAR_4->sc_port.state) {

  VAR_13 = &VAR_4->sc_port.state->xmit;
 } else {




  return;
 }

 if (FUNC_7(VAR_13) || FUNC_8(&VAR_4->sc_port)) {

  FUNC_2(VAR_0);
  return;
 }

 VAR_8 = VAR_13->head;
 VAR_7 = VAR_13->tail;
 VAR_12 = &VAR_13->buf[VAR_7];



 VAR_9 = (VAR_8 < VAR_7) ? 2 : 1;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_6 = (VAR_8 < VAR_7) ?
      (VAR_2 - VAR_7) : (VAR_8 - VAR_7);

  if (VAR_6 > 0) {
   if (VAR_5 == VAR_1)
    VAR_11 =
        VAR_4->sc_ops->sal_puts_raw(VAR_12,
              VAR_6);
   else
    VAR_11 =
        VAR_4->sc_ops->sal_puts(VAR_12, VAR_6);




   if (VAR_11 > 0) {
    VAR_6 -= VAR_11;
    VAR_4->sc_port.icount.tx += VAR_11;
    VAR_7 += VAR_11;
    VAR_7 &= VAR_2 - 1;
    VAR_13->tail = VAR_7;
    VAR_12 = &VAR_13->buf[VAR_7];
   }
  }
 }

 if (FUNC_6(VAR_13) < VAR_3)
  FUNC_9(&VAR_4->sc_port);

 if (FUNC_7(VAR_13))
  FUNC_3(&VAR_4->sc_port);
}
