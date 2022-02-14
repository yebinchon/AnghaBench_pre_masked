
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int cursize; int* data; int maxsize; } ;
typedef TYPE_1__ msg_t ;
struct TYPE_8__ {TYPE_4__* tree; TYPE_4__* lhead; int blocNode; TYPE_4__* nodeList; TYPE_4__** loc; TYPE_4__* ltail; } ;
typedef TYPE_2__ huff_t ;
typedef int byte ;
struct TYPE_9__ {size_t symbol; int * right; int left; int parent; int * prev; int next; scalar_t__ weight; } ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_4__*,int*,int*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int*) ;

void FUNC_5(msg_t *VAR_2, int VAR_3) {
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 byte VAR_9[65536];
 byte* VAR_10;
 huff_t VAR_11;

 VAR_8 = VAR_2->cursize - VAR_3;
 VAR_10 = VAR_2->data + VAR_3;

 if ( VAR_8 <= 0 ) {
  return;
 }

 FUNC_1(&VAR_11, 0, sizeof(huff_t));

 VAR_11.tree = VAR_11.lhead = VAR_11.ltail = VAR_11.loc[VAR_0] = &(VAR_11.nodeList[VAR_11.blocNode++]);
 VAR_11.tree->symbol = VAR_0;
 VAR_11.tree->weight = 0;
 VAR_11.lhead->next = *(VAR_11.lhead->prev = ((void*)0));
 VAR_11.tree->parent = VAR_11.tree->left = *(VAR_11.tree->right = ((void*)0));

 VAR_5 = VAR_10[0]*256 + VAR_10[1];

 if ( VAR_5 > VAR_2->maxsize - VAR_3 ) {
  VAR_5 = VAR_2->maxsize - VAR_3;
 }
 VAR_1 = 16;

 for ( VAR_7 = 0; VAR_7 < VAR_5; VAR_7++ ) {
  VAR_4 = 0;


  if ( (VAR_1 >> 3) > VAR_8 ) {
   VAR_9[VAR_7] = 0;
   break;
  }
  FUNC_2(VAR_11.tree, &VAR_4, VAR_10);
  if ( VAR_4 == VAR_0 ) {
   VAR_4 = 0;
   for ( VAR_6 = 0; VAR_6 < 8; VAR_6++ ) {
    VAR_4 = (VAR_4<<1) + FUNC_4(VAR_10);
   }
  }

  VAR_9[VAR_7] = VAR_4;

  FUNC_3(&VAR_11, (byte)VAR_4);
 }
 VAR_2->cursize = VAR_5 + VAR_3;
 FUNC_0(VAR_2->data + VAR_3, VAR_9, VAR_5);
}
