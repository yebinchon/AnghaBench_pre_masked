
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rate; scalar_t__ channels; int * port; int * host; } ;
typedef TYPE_1__ rsound_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

int FUNC_2(rsound_t *VAR_0)
{
   FUNC_0(VAR_0 != ((void*)0));
   FUNC_0(VAR_0->rate > 0);
   FUNC_0(VAR_0->channels > 0);
   FUNC_0(VAR_0->host != ((void*)0));
   FUNC_0(VAR_0->port != ((void*)0));

   if ( FUNC_1(VAR_0) < 0 )
      return -1;

   return 0;
}
