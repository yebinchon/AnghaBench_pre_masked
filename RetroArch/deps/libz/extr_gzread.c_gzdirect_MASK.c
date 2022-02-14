
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* gz_statep ;
typedef int * gzFile ;
struct TYPE_4__ {scalar_t__ have; } ;
struct TYPE_5__ {scalar_t__ mode; scalar_t__ how; int direct; TYPE_1__ x; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(gzFile VAR_2)
{
   gz_statep VAR_3;


   if (VAR_2 == ((void*)0))
      return 0;
   VAR_3 = (gz_statep)VAR_2;



   if (VAR_3->mode == VAR_0 && VAR_3->how == VAR_1 && VAR_3->x.have == 0)
      (void)FUNC_0(VAR_3);


   return VAR_3->direct;
}
