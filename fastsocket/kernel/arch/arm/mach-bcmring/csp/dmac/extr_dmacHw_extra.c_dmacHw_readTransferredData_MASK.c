
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int dmacHw_HANDLE_t ;
struct TYPE_10__ {TYPE_2__* pTail; TYPE_2__* pHead; } ;
typedef TYPE_3__ dmacHw_DESC_RING_t ;
struct TYPE_11__ {scalar_t__ transferMode; } ;
typedef TYPE_4__ dmacHw_CONFIG_t ;
struct TYPE_8__ {int hi; int lo; } ;
struct TYPE_9__ {size_t sstat; TYPE_1__ ctl; scalar_t__ dar; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (void*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 size_t VAR_1 ;




 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

int FUNC_4(dmacHw_HANDLE_t VAR_5,
          dmacHw_CONFIG_t *VAR_6,
          void *VAR_7,
          void **VAR_8,
          size_t *VAR_9
    ) {
 dmacHw_DESC_RING_t *VAR_10 = FUNC_2(VAR_7);

 (void)VAR_5;

 if (VAR_6->transferMode != VAR_3) {
  if (((VAR_10->pTail->ctl.hi & VAR_0) == 0) ||
      (VAR_10->pTail == VAR_10->pHead)
      ) {

   *VAR_8 = (char *)((void*)0);
   *VAR_9 = 0;

   return 0;
  }
 }


 *VAR_8 = (char *)VAR_10->pTail->dar;


 if (FUNC_0(VAR_7)) {
  uint32_t VAR_11 = 0;

  switch (VAR_10->pTail->ctl.lo & VAR_2) {
  case 128:
   VAR_11 = 1;
   break;
  case 131:
   VAR_11 = 2;
   break;
  case 130:
   VAR_11 = 4;
   break;
  case 129:
   VAR_11 = 8;
   break;
  default:
   FUNC_1(0);
  }

  *VAR_9 =
      (VAR_10->pTail->ctl.hi & VAR_1) *
      VAR_11;
 } else {

  *VAR_9 = VAR_10->pTail->sstat;
 }


 FUNC_3(VAR_10, VAR_4);

 return 1;
}
