
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_5__ {TYPE_1__* partition; int inUse; } ;
struct TYPE_4__ {int lock; } ;
typedef TYPE_2__ FILE_STRUCT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

int FUNC_3 (struct _reent *VAR_1, void *VAR_2) {
 FILE_STRUCT* VAR_3 = (FILE_STRUCT*) VAR_2;
 int VAR_4 = 0;

 if (!VAR_3->inUse) {
  VAR_1->_errno = VAR_0;
  return -1;
 }

 FUNC_0(&VAR_3->partition->lock);

 VAR_4 = FUNC_1 (VAR_3);
 if (VAR_4 != 0) {
  VAR_1->_errno = VAR_4;
  VAR_4 = -1;
 }

 FUNC_2(&VAR_3->partition->lock);

 return VAR_4;
}
