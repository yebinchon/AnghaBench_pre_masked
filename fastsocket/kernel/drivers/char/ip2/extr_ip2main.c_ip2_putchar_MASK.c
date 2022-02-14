
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* i2ChanStrPtr ;
struct TYPE_6__ {TYPE_1__* driver_data; } ;
struct TYPE_5__ {unsigned char* Pbuf; int Pbuf_stuff; int Pbuf_spinlock; } ;
typedef TYPE_2__* PTTY ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_3( PTTY VAR_0, unsigned char VAR_1 )
{
 i2ChanStrPtr VAR_2 = VAR_0->driver_data;
 unsigned long VAR_3;



 FUNC_1(&VAR_2->Pbuf_spinlock, VAR_3);
 VAR_2->Pbuf[VAR_2->Pbuf_stuff++] = VAR_1;
 if ( VAR_2->Pbuf_stuff == sizeof VAR_2->Pbuf ) {
  FUNC_2(&VAR_2->Pbuf_spinlock, VAR_3);
  FUNC_0( VAR_0 );
 } else
  FUNC_2(&VAR_2->Pbuf_spinlock, VAR_3);
 return 1;


}
