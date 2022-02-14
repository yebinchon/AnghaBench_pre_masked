
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef scalar_t__ uint32_t ;
struct doc_tombstone {char* t_lastop_filename; scalar_t__ t_lastop_item_vid; scalar_t__ t_lastop_fileid; TYPE_1__* t_lastop_item; scalar_t__ t_lastop_parent_vid; int * t_lastop_parent; scalar_t__ t_lastop_document_id; } ;
struct TYPE_6__ {int v_lflag; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

void
FUNC_4(struct doc_tombstone *VAR_1, vnode_t *VAR_2)
{
 uint32_t VAR_3 = VAR_1->t_lastop_document_id;

 VAR_1->t_lastop_document_id = 0;
 VAR_1->t_lastop_parent = ((void*)0);
 VAR_1->t_lastop_parent_vid = 0;
 VAR_1->t_lastop_filename[0] = '\0';






 if (VAR_2) {
  *VAR_2 = ((void*)0);
  if (VAR_3 && VAR_1->t_lastop_item
   && FUNC_3(VAR_1->t_lastop_item) == VAR_1->t_lastop_item_vid) {
   int VAR_4 = FUNC_1(VAR_1->t_lastop_item);
   if (!VAR_4) {

    if (FUNC_3(VAR_1->t_lastop_item) == VAR_1->t_lastop_item_vid
     && !FUNC_0(VAR_1->t_lastop_item->v_lflag, VAR_0))
     *VAR_2 = VAR_1->t_lastop_item;
    else
     FUNC_2(VAR_1->t_lastop_item);
   }
  }
 }


 VAR_1->t_lastop_item = ((void*)0);
 VAR_1->t_lastop_fileid = 0;
 VAR_1->t_lastop_item_vid = 0;
}
