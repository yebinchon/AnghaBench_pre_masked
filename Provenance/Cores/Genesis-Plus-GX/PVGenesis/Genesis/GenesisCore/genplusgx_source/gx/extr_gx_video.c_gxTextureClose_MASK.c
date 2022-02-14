
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* data; } ;
typedef TYPE_1__ gx_texture ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(gx_texture **VAR_0)
{
  gx_texture *VAR_1 = *VAR_0;

  if (VAR_1)
  {
    if (VAR_1->data) FUNC_0(VAR_1->data);
    FUNC_0(VAR_1);
    *VAR_0 = ((void*)0);
  }
}
