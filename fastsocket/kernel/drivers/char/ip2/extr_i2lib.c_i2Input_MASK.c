
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_4__* i2ChanStrPtr ;
struct TYPE_14__ {int receive_room; TYPE_2__* ldisc; } ;
struct TYPE_12__ {int asof; } ;
struct TYPE_13__ {unsigned short Ibuf_strip; unsigned short Ibuf_stuff; int sinceLastFlow; int whenSendFlow; int Ibuf_spinlock; int pMyBord; TYPE_3__ infl; int * Ibuf; TYPE_5__* pTTY; } ;
struct TYPE_11__ {TYPE_1__* ops; } ;
struct TYPE_10__ {int (* receive_buf ) (TYPE_5__*,int *,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,int,...) ;
 int FUNC_3 (TYPE_5__*,int *,int *,int) ;
 int FUNC_4 (TYPE_5__*,int *,int *,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_7(i2ChanStrPtr VAR_6)
{
 int VAR_7;
 unsigned short VAR_8;
 int VAR_9;
 unsigned long VAR_10 = 0;

 FUNC_2 (VAR_0, VAR_3, VAR_2, 0);


 if ( !FUNC_1( VAR_6 ) ) {
  VAR_9 = -1;
  goto i2Input_exit;
 }
 FUNC_5(&VAR_6->Ibuf_spinlock, VAR_10);


 VAR_8 = VAR_6->Ibuf_strip;

 VAR_9 = VAR_6->Ibuf_stuff - VAR_8;



 if ( VAR_9 == 0 ) {
  FUNC_6(&VAR_6->Ibuf_spinlock, VAR_10);
  goto i2Input_exit;
 }

 if ( VAR_9 < 0 ) {
  VAR_9 += VAR_1;
 }

 VAR_7 = VAR_6->pTTY->receive_room;
 if (VAR_9 > VAR_7) {
  VAR_9 = VAR_7;
 }

 VAR_7 = VAR_1 - VAR_8;

 if (VAR_7 > VAR_9) {
  VAR_7 = VAR_9;
 }

 VAR_6->pTTY->ldisc->ops->receive_buf( VAR_6->pTTY,
   &(VAR_6->Ibuf[VAR_8]), ((void*)0), VAR_7 );

 if (VAR_9 > VAR_7) {
  VAR_6->pTTY->ldisc->ops->receive_buf( VAR_6->pTTY,
   VAR_6->Ibuf, ((void*)0), VAR_9 - VAR_7 );
 }


 VAR_8 += VAR_9;
 if (VAR_8 >= VAR_1) {
  VAR_8 -= VAR_1;
 }
 VAR_6->Ibuf_strip = VAR_8;




 VAR_6->infl.asof += VAR_9;

 if ((VAR_6->sinceLastFlow += VAR_9) >= VAR_6->whenSendFlow) {
  VAR_6->sinceLastFlow -= VAR_6->whenSendFlow;
  FUNC_6(&VAR_6->Ibuf_spinlock, VAR_10);
  FUNC_0(VAR_6->pMyBord, VAR_6, VAR_5);
 } else {
  FUNC_6(&VAR_6->Ibuf_spinlock, VAR_10);
 }

i2Input_exit:

 FUNC_2 (VAR_0, VAR_3, VAR_4, 1, VAR_9);

 return VAR_9;
}
