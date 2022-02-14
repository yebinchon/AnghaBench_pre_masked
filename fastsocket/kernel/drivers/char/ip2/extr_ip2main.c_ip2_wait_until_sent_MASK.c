
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int i2ChanStrPtr ;
struct TYPE_4__ {int driver_data; } ;
typedef TYPE_1__* PTTY ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2 ( PTTY VAR_1, int VAR_2 )
{
 int VAR_3 = VAR_0;
 i2ChanStrPtr VAR_4 = VAR_1->driver_data;

 FUNC_1(VAR_1, VAR_2 );
 if ( (VAR_3 = VAR_2 - (VAR_0 -VAR_3)) > 0)
  FUNC_0( VAR_4, VAR_3 );
}
