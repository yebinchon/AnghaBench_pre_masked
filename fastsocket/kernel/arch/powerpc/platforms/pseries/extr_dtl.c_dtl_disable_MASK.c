
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtl {int lock; scalar_t__ buf_entries; int * buf; } ;


 int FUNC_0 (struct dtl*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dtl *VAR_0)
{
 FUNC_2(&VAR_0->lock);
 FUNC_0(VAR_0);

 FUNC_1(VAR_0->buf);
 VAR_0->buf = ((void*)0);
 VAR_0->buf_entries = 0;
 FUNC_3(&VAR_0->lock);
}
