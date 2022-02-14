
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * fd; int * path; } ;
typedef TYPE_1__ libretrodb_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(libretrodb_t *VAR_0)
{
   if (VAR_0->fd)
      FUNC_0(VAR_0->fd);
   if (!FUNC_2(VAR_0->path))
      FUNC_1(VAR_0->path);
   VAR_0->path = ((void*)0);
   VAR_0->fd = ((void*)0);
}
