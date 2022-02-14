
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int i2ChanStrPtr ;
struct TYPE_4__ {int flags; int driver_data; } ;
typedef TYPE_1__* PTTY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void

FUNC_2( PTTY VAR_3)
{
 i2ChanStrPtr VAR_4;

 if (VAR_3 == ((void*)0)) return;

 VAR_4 = VAR_3->driver_data;

 FUNC_0 (VAR_0, VAR_1, 10, 2, VAR_3->flags,
   (1 << VAR_2) );

 FUNC_1(VAR_3);
}
