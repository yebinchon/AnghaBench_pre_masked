
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ on_release; scalar_t__ written; scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_1__ ebb_buf ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(ebb_buf* VAR_0)
{
 FUNC_0(VAR_0->data);
 VAR_0->data = 0;
 VAR_0->len = VAR_0->written = 0;
 VAR_0->on_release = 0;
}
