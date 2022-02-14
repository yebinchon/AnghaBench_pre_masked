
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* gz_statep ;
typedef int * gzFile ;
struct TYPE_2__ {scalar_t__ mode; int past; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(gzFile VAR_2)
{
   gz_statep VAR_3;


   if (VAR_2 == ((void*)0))
      return 0;
   VAR_3 = (gz_statep)VAR_2;
   if (VAR_3->mode != VAR_0 && VAR_3->mode != VAR_1)
      return 0;


   return VAR_3->mode == VAR_0 ? VAR_3->past : 0;
}
