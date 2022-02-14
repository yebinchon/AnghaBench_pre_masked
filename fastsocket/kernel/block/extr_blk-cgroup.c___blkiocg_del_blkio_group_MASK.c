
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkio_group {scalar_t__ blkcg_id; int blkcg_node; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct blkio_group *VAR_0)
{
 FUNC_0(&VAR_0->blkcg_node);
 VAR_0->blkcg_id = 0;
}
