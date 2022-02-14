
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* i2ChanStrPtr ;
struct TYPE_6__ {TYPE_1__* driver_data; } ;
struct TYPE_5__ {int Pbuf_stuff; int Pbuf_spinlock; } ;
typedef TYPE_2__* PTTY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4 ( PTTY VAR_2 )
{
 int VAR_3;
 i2ChanStrPtr VAR_4 = VAR_2->driver_data;
 unsigned long VAR_5;

 FUNC_2(&VAR_4->Pbuf_spinlock, VAR_5);
 VAR_3 = FUNC_0( VAR_4 ) - VAR_4->Pbuf_stuff;
 FUNC_3(&VAR_4->Pbuf_spinlock, VAR_5);

 FUNC_1 (VAR_0, VAR_1, 11, 1, VAR_3 );

 return ((VAR_3 > 0) ? VAR_3 : 0);
}
