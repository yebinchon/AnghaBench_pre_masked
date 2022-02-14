
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct doc_tombstone {struct vnode* t_lastop_item; scalar_t__ t_lastop_document_id; } ;
struct componentname {int cn_namelen; int * cn_nameptr; } ;


 scalar_t__ FUNC_0 (int *,int ) ;

bool FUNC_1(struct doc_tombstone *VAR_0, struct vnode *VAR_1,
          struct componentname *VAR_2)
{
 if (VAR_2->cn_nameptr == ((void*)0)) {
  return 0;
 }

 if (VAR_0->t_lastop_document_id && VAR_0->t_lastop_item == VAR_1
  && FUNC_0(VAR_2->cn_nameptr, VAR_2->cn_namelen)) {
  return 0;
 }

 return 1;
}
