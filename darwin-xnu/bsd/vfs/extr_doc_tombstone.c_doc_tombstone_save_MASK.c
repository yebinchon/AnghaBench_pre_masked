
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vnode {int dummy; } ;
struct doc_tombstone {int * t_lastop_filename; int t_lastop_document_id; void* t_lastop_item_vid; struct vnode* t_lastop_item; int t_lastop_fileid; void* t_lastop_parent_vid; struct vnode* t_lastop_parent; } ;
struct componentname {int cn_nameptr; } ;
typedef int ino64_t ;


 struct doc_tombstone* FUNC_0 () ;
 int FUNC_1 (char*,int ,int) ;
 void* FUNC_2 (struct vnode*) ;

void
FUNC_3(struct vnode *VAR_0, struct vnode *VAR_1,
       struct componentname *VAR_2, uint64_t VAR_3,
       ino64_t VAR_4)
{
 struct doc_tombstone *VAR_5;
 VAR_5 = FUNC_0();

 VAR_5->t_lastop_parent = VAR_0;
 VAR_5->t_lastop_parent_vid = FUNC_2(VAR_0);
 VAR_5->t_lastop_fileid = VAR_4;
 VAR_5->t_lastop_item = VAR_1;
 VAR_5->t_lastop_item_vid = VAR_1 ? FUNC_2(VAR_1) : 0;
    VAR_5->t_lastop_document_id = VAR_3;

 FUNC_1((char *)&VAR_5->t_lastop_filename[0], VAR_2->cn_nameptr, sizeof(VAR_5->t_lastop_filename));
}
