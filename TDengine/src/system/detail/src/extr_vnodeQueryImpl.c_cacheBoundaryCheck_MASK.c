
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_7__ {int numOfBlocks; int currentSlot; } ;
struct TYPE_6__ {scalar_t__ lastKey; scalar_t__ pCache; } ;
typedef scalar_t__ TSKEY ;
typedef int SQuery ;
typedef TYPE_1__ SMeterObj ;
typedef TYPE_2__ SCacheInfo ;
typedef int SCacheBlock ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (int,int,TYPE_2__*) ;
 int FUNC_2 (int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static bool FUNC_5(SQuery *VAR_1, SMeterObj *VAR_2) {




  SCacheInfo * VAR_3 = (SCacheInfo *)VAR_2->pCache;
  SCacheBlock *VAR_4 = ((void*)0);


  TSKEY VAR_5 = 0;
  TSKEY VAR_6 = VAR_2->lastKey;

  while (1) {

    int32_t VAR_7 = VAR_3->numOfBlocks;
    int32_t VAR_8 = VAR_3->currentSlot;


    if (VAR_7 == 0) {
      return 0;
    }

    int32_t VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_3);





    if ((VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_9)) != ((void*)0)) {
      VAR_5 = FUNC_3(VAR_4, 0);
      break;
    } else {



      if (VAR_7 == 1) {
        return 0;
      }
    }
  }

  TSKEY VAR_10, VAR_11;
  FUNC_2(VAR_1, &VAR_10, &VAR_11);






  if (VAR_11 < VAR_5 || VAR_10 > VAR_6) {
    FUNC_4(VAR_1, VAR_0);
    return 0;
  }

  return 1;
}
