
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct page {int dummy; } ;
struct fscache_cookie {int flags; } ;


 int FUNC_0 (struct fscache_cookie*,struct page*) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct fscache_cookie *VAR_0, struct page *VAR_1)
{
 wait_queue_head_t *VAR_2 = FUNC_1(&VAR_0->flags, 0);

 FUNC_2(*VAR_2, !FUNC_0(VAR_0, VAR_1));
}
