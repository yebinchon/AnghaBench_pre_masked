
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int mutex; } ;
struct TYPE_8__ {int nHash; TYPE_1__** apHash; TYPE_5__* pGroup; } ;
struct TYPE_7__ {unsigned int iKey; struct TYPE_7__* pNext; } ;
typedef TYPE_1__ PgHdr1 ;
typedef TYPE_2__ PCache1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(PCache1 *VAR_0){
  PgHdr1 **VAR_1;
  unsigned int VAR_2;
  unsigned int VAR_3;

  FUNC_0( FUNC_7(VAR_0->pGroup->mutex) );

  VAR_2 = VAR_0->nHash*2;
  if( VAR_2<256 ){
    VAR_2 = 256;
  }

  FUNC_2(VAR_0->pGroup);
  if( VAR_0->nHash ){ FUNC_3(); }
  VAR_1 = (PgHdr1 **)FUNC_5(sizeof(PgHdr1 *)*VAR_2);
  if( VAR_0->nHash ){ FUNC_4(); }
  FUNC_1(VAR_0->pGroup);
  if( VAR_1 ){
    for(VAR_3=0; VAR_3<VAR_0->nHash; VAR_3++){
      PgHdr1 *VAR_4;
      PgHdr1 *VAR_5 = VAR_0->apHash[VAR_3];
      while( (VAR_4 = VAR_5)!=0 ){
        unsigned int VAR_6 = VAR_4->iKey % VAR_2;
        VAR_5 = VAR_4->pNext;
        VAR_4->pNext = VAR_1[VAR_6];
        VAR_1[VAR_6] = VAR_4;
      }
    }
    FUNC_6(VAR_0->apHash);
    VAR_0->apHash = VAR_1;
    VAR_0->nHash = VAR_2;
  }
}
