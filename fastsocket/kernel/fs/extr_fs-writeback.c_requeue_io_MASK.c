
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_list; } ;
struct bdi_writeback {int b_more_io; } ;
struct TYPE_2__ {struct bdi_writeback wb; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_0)
{
 struct bdi_writeback *VAR_1 = &FUNC_0(VAR_0)->wb;

 FUNC_1(&VAR_0->i_list, &VAR_1->b_more_io);
}
