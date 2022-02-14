
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* i2ChanStrPtr ;
struct TYPE_7__ {TYPE_1__* driver_data; } ;
struct TYPE_6__ {int Pbuf_spinlock; } ;
typedef TYPE_2__* PTTY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,unsigned char const*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,int,int,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5( PTTY VAR_4, const unsigned char *VAR_5, int VAR_6)
{
 i2ChanStrPtr VAR_7 = VAR_4->driver_data;
 int VAR_8 = 0;
 unsigned long VAR_9;

 FUNC_2 (VAR_0, VAR_3, VAR_1, 2, VAR_6, -1 );


 FUNC_1( VAR_4 );


 FUNC_3(&VAR_7->Pbuf_spinlock, VAR_9);
 VAR_8 = FUNC_0( VAR_7, VAR_5, VAR_6);
 FUNC_4(&VAR_7->Pbuf_spinlock, VAR_9);

 FUNC_2 (VAR_0, VAR_3, VAR_2, 1, VAR_8 );

 return VAR_8 > 0 ? VAR_8 : 0;
}
