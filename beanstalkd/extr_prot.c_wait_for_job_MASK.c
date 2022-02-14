
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pending_timeout; int state; } ;
typedef TYPE_1__ Conn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char) ;

__attribute__((used)) static void
FUNC_2(Conn *VAR_1, int VAR_2)
{
    VAR_1->state = VAR_0;
    FUNC_0(VAR_1);


    VAR_1->pending_timeout = VAR_2;


    FUNC_1(VAR_1, 'h');
}
