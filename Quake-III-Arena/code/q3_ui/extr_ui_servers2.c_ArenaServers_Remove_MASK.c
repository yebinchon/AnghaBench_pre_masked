
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* servernode; } ;
typedef TYPE_2__ table_t ;
struct TYPE_11__ {int adrstr; } ;
typedef TYPE_3__ servernode_t ;
struct TYPE_9__ {size_t curvalue; int numitems; } ;
struct TYPE_12__ {int numfavoriteaddresses; int numqueriedservers; int currentping; TYPE_3__* favoriteaddresses; TYPE_1__ list; TYPE_2__* table; } ;
typedef int MAX_ADDRESSLENGTH ;


 int FUNC_0 (TYPE_3__,int ) ;
 TYPE_7__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_2( void )
{
 int VAR_3;
 servernode_t* VAR_4;
 table_t* VAR_5;

 if (!VAR_0.list.numitems)
  return;





 VAR_5 = &VAR_0.table[VAR_0.list.curvalue];
 VAR_4 = VAR_5->servernode;


 for (VAR_3=0; VAR_3<VAR_0.numfavoriteaddresses; VAR_3++)
  if (!FUNC_0(VAR_0.favoriteaddresses[VAR_3],VAR_4->adrstr))
    break;


 if (VAR_3 <= VAR_0.numfavoriteaddresses-1)
 {
  if (VAR_3 < VAR_0.numfavoriteaddresses-1)
  {

   FUNC_1( &VAR_0.favoriteaddresses[VAR_3], &VAR_0.favoriteaddresses[VAR_3+1], (VAR_0.numfavoriteaddresses - VAR_3 - 1)*sizeof(MAX_ADDRESSLENGTH));
  }
  VAR_0.numfavoriteaddresses--;
 }


 for (VAR_3=0; VAR_3<VAR_2; VAR_3++)
  if (&VAR_1[VAR_3] == VAR_4)
    break;


 if (VAR_3 <= VAR_2-1)
 {
  if (VAR_3 < VAR_2-1)
  {

   FUNC_1( &VAR_1[VAR_3], &VAR_1[VAR_3+1], (VAR_2 - VAR_3 - 1)*sizeof(servernode_t));
  }
  VAR_2--;
 }

 VAR_0.numqueriedservers = VAR_0.numfavoriteaddresses;
 VAR_0.currentping = VAR_0.numfavoriteaddresses;
}
