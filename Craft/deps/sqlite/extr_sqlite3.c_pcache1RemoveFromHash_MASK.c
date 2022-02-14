
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int nHash; int nPage; TYPE_2__** apHash; TYPE_1__* pGroup; } ;
struct TYPE_6__ {unsigned int iKey; struct TYPE_6__* pNext; TYPE_3__* pCache; } ;
struct TYPE_5__ {int mutex; } ;
typedef TYPE_2__ PgHdr1 ;
typedef TYPE_3__ PCache1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(PgHdr1 *VAR_0){
  unsigned int VAR_1;
  PCache1 *VAR_2 = VAR_0->pCache;
  PgHdr1 **VAR_3;

  FUNC_0( FUNC_1(VAR_2->pGroup->mutex) );
  VAR_1 = VAR_0->iKey % VAR_2->nHash;
  for(VAR_3=&VAR_2->apHash[VAR_1]; (*VAR_3)!=VAR_0; VAR_3=&(*VAR_3)->pNext);
  *VAR_3 = (*VAR_3)->pNext;

  VAR_2->nPage--;
}
