
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* gz_statep ;
typedef int * gzFile ;
struct TYPE_2__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(gzFile VAR_2)
{

   gz_statep VAR_3;

   if (VAR_2 == ((void*)0))
      return VAR_1;
   VAR_3 = (gz_statep)VAR_2;

   return VAR_3->mode == VAR_0 ? FUNC_0(VAR_2) : FUNC_1(VAR_2);



}
