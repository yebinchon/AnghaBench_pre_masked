
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
struct TYPE_3__ {scalar_t__ valid; } ;


 scalar_t__ VAR_0 ;

int FUNC_0 (const pthread_attr_t * VAR_1)
{


  return (VAR_1 == ((void*)0) ||
          *VAR_1 == ((void*)0) || (*VAR_1)->valid != VAR_0);
}
