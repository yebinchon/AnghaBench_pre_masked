
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int value; int handle; } ;
typedef TYPE_1__ tGATT_WRITE_REQ ;
typedef int tGATT_STATUS ;
typedef int tGATTS_REQ_TYPE ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;

tGATT_STATUS FUNC_1( tGATTS_REQ_TYPE VAR_1, tGATT_WRITE_REQ *VAR_2)
{
    if(VAR_2->len > VAR_0) {
        VAR_2->len = VAR_0;
    }
   return FUNC_0(VAR_2->handle,
                           VAR_2->len,
                           VAR_2->value);

}
