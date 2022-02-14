
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* nextOpenFile; } ;
struct TYPE_7__ {int lock; int cache; TYPE_2__* firstOpenFile; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ FILE_STRUCT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;

void FUNC_7 (PARTITION* VAR_0) {
 FILE_STRUCT* VAR_1;

 FUNC_1(&VAR_0->lock);


 VAR_1 = VAR_0->firstOpenFile;
 while (VAR_1) {
  FUNC_5 (VAR_1);
  VAR_1 = VAR_1->nextOpenFile;
 }


 FUNC_4(VAR_0);


 FUNC_0 (VAR_0->cache);


 FUNC_6(&VAR_0->lock);
 FUNC_2(&VAR_0->lock);


 FUNC_3 (VAR_0);
}
