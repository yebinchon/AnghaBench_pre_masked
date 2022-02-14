
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ PARTITION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char const*,char) ;

int FUNC_5 (struct _reent *VAR_3, const char *VAR_4)
{
 PARTITION* VAR_5 = ((void*)0);


 VAR_5 = FUNC_2 (VAR_4);
 if (VAR_5 == ((void*)0))
   {
  VAR_3->_errno = VAR_1;
  return -1;
 }


 if (FUNC_4 (VAR_4, ':') != ((void*)0))
  VAR_4 = FUNC_4 (VAR_4, ':') + 1;
 if (FUNC_4 (VAR_4, ':') != ((void*)0))
   {
  VAR_3->_errno = VAR_0;
  return -1;
 }

 FUNC_1(&VAR_5->lock);


 if (FUNC_0 (VAR_5, VAR_4))
   {

  FUNC_3(&VAR_5->lock);
  return 0;
 }


   FUNC_3(&VAR_5->lock);
   VAR_3->_errno = VAR_2;
   return -1;
}
