
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ status; } ;
struct TYPE_14__ {scalar_t__ store_path_index; } ;
struct TYPE_17__ {TYPE_1__ path; } ;
struct TYPE_16__ {TYPE_6__ trunk; struct TYPE_16__* next; } ;
struct TYPE_15__ {int size; TYPE_3__* head; } ;
typedef TYPE_2__ FDFSTrunkSlot ;
typedef TYPE_3__ FDFSTrunkNode ;
typedef TYPE_4__ FDFSTrunkFullInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_2__*) ;
 int const VAR_1 ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_6 (scalar_t__,int*) ;
 int FUNC_7 (scalar_t__,TYPE_2__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int VAR_3 ;
 int FUNC_9 (TYPE_3__*,int const) ;

int FUNC_10(const int VAR_4, FDFSTrunkFullInfo *VAR_5)
{
 FDFSTrunkSlot VAR_6;
 FDFSTrunkSlot *VAR_7;
 FDFSTrunkNode *VAR_8;
 FDFSTrunkNode *VAR_9;
 int VAR_10;

 FUNC_0();

 VAR_6.size = (VAR_4 > VAR_1) ? VAR_4 : VAR_1;
 VAR_6.head = ((void*)0);

 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);
 FUNC_3(&VAR_3);
 while (1)
 {
  VAR_7 = (FDFSTrunkSlot *)FUNC_1(VAR_2 + VAR_5->path.store_path_index, &VAR_6);

  if (VAR_7 == ((void*)0))
  {
   break;
  }

  VAR_8 = ((void*)0);
  VAR_9 = VAR_7->head;
  while (VAR_9 != ((void*)0) && VAR_9->trunk.status == VAR_0)

  {
   VAR_8 = VAR_9;
   VAR_9 = VAR_9->next;
  }

  if (VAR_9 != ((void*)0))
  {
   break;
  }

  VAR_6.size = VAR_7->size + 1;
 }

 if (VAR_9 != ((void*)0))
 {
  if (VAR_8 == ((void*)0))
  {
   VAR_7->head = VAR_9->next;
   if (VAR_7->head == ((void*)0))
   {
    FUNC_7(VAR_5->path. store_path_index, VAR_7);

   }
  }
  else
  {
   VAR_8->next = VAR_9->next;
  }

  FUNC_8(&(VAR_9->trunk));
 }
 else
 {
  VAR_9 = FUNC_6(VAR_5->path. store_path_index, &VAR_10);

  if (VAR_9 == ((void*)0))
  {
   FUNC_4(&VAR_3);
   return VAR_10;
  }
 }
 FUNC_4(&VAR_3);

 VAR_10 = FUNC_9(VAR_9, VAR_4);
 if (VAR_10 != 0)
 {
  return VAR_10;
 }

 VAR_9->trunk.status = VAR_0;
 VAR_10 = FUNC_5(VAR_9, 1);
 if (VAR_10 == 0)
 {
  FUNC_2(VAR_5, &(VAR_9->trunk), sizeof(FDFSTrunkFullInfo));

 }

 return VAR_10;
}
