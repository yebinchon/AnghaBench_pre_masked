
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {scalar_t__ length; int * value; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

uint32_t
FUNC_1(uint32_t *VAR_2, gss_buffer_t VAR_3)
{
 if (VAR_2)
  *VAR_2 = 0;
 if (VAR_3->value)
  FUNC_0(VAR_3->value, VAR_1);
 VAR_3->value = ((void*)0);
 VAR_3->length = 0;
 return (VAR_0);
}
