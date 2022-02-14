
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbuf {struct lbuf* l_freelist; int * l_wqnext; struct jfs_log* l_log; } ;
struct jfs_log {int free_wait; struct lbuf* lbuf_free; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct lbuf * VAR_0)
{
 struct jfs_log *VAR_1 = VAR_0->l_log;

 FUNC_0(VAR_0->l_wqnext == ((void*)0));




 VAR_0->l_freelist = VAR_1->lbuf_free;
 VAR_1->lbuf_free = VAR_0;

 FUNC_1(&VAR_1->free_wait);
 return;
}
