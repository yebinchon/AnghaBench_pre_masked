
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* gz_statep ;
typedef int * gzFile ;
struct TYPE_2__ {scalar_t__ mode; int err; char const* msg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

const char * FUNC_0(gzFile VAR_3, int *VAR_4)
{
   gz_statep VAR_5;


   if (VAR_3 == ((void*)0))
      return ((void*)0);
   VAR_5 = (gz_statep)VAR_3;
   if (VAR_5->mode != VAR_0 && VAR_5->mode != VAR_1)
      return ((void*)0);


   if (VAR_4 != ((void*)0))
      *VAR_4 = VAR_5->err;
   return VAR_5->err == VAR_2 ? "out of memory" :
      (VAR_5->msg == ((void*)0) ? "" : VAR_5->msg);
}
