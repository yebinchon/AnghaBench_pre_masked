
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdi_writeback {int b_io; int b_dirty; int b_more_io; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,unsigned long*) ;

__attribute__((used)) static void FUNC_2(struct bdi_writeback *VAR_0, unsigned long *VAR_1)
{
 FUNC_0(&VAR_0->b_more_io, &VAR_0->b_io);
 FUNC_1(&VAR_0->b_dirty, &VAR_0->b_io, VAR_1);
}
