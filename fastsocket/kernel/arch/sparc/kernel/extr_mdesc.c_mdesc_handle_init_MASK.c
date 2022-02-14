
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdesc_handle {unsigned int handle_size; int refcnt; void* self_base; int list; int mdesc; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct mdesc_handle*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct mdesc_handle *VAR_0,
         unsigned int VAR_1,
         void *VAR_2)
{
 FUNC_0(((unsigned long)&VAR_0->mdesc) & (16UL - 1));

 FUNC_3(VAR_0, 0, VAR_1);
 FUNC_1(&VAR_0->list);
 VAR_0->self_base = VAR_2;
 FUNC_2(&VAR_0->refcnt, 1);
 VAR_0->handle_size = VAR_1;
}
