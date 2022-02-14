
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int dummy; } ;
struct _reent {int _errno; } ;
struct TYPE_5__ {int lock; } ;
typedef TYPE_1__ PARTITION ;
typedef int DIR_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,char const*,int *) ;
 int FUNC_1 (TYPE_1__*,int *,struct stat*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (char const*,char) ;

int FUNC_6 (struct _reent *VAR_3, const char *VAR_4, struct stat *VAR_5)
{
 PARTITION* VAR_6 = ((void*)0);
 DIR_ENTRY VAR_7;


 VAR_6 = FUNC_3 (VAR_4);
 if (VAR_6 == ((void*)0))
   {
  VAR_3->_errno = VAR_1;
  return -1;
 }


 if (FUNC_5 (VAR_4, ':') != ((void*)0))
  VAR_4 = FUNC_5 (VAR_4, ':') + 1;
 if (FUNC_5 (VAR_4, ':') != ((void*)0))
   {
  VAR_3->_errno = VAR_0;
  return -1;
 }

 FUNC_2(&VAR_6->lock);


 if (!FUNC_0 (VAR_6, &VAR_7, VAR_4, ((void*)0)))
   {
  FUNC_4(&VAR_6->lock);
  VAR_3->_errno = VAR_2;
  return -1;
 }


 FUNC_1 (VAR_6, &VAR_7, VAR_5);

 FUNC_4(&VAR_6->lock);
 return 0;
}
