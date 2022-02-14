
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* gz_statep ;
typedef int * gzFile ;
struct TYPE_2__ {scalar_t__ mode; scalar_t__ size; unsigned int want; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(gzFile VAR_2, unsigned VAR_3)
{
   gz_statep VAR_4;


   if (VAR_2 == ((void*)0))
      return -1;
   VAR_4 = (gz_statep)VAR_2;
   if (VAR_4->mode != VAR_0 && VAR_4->mode != VAR_1)
      return -1;


   if (VAR_4->size != 0)
      return -1;


   if (VAR_3 < 2)
      VAR_3 = 2;
   VAR_4->want = VAR_3;
   return 0;
}
