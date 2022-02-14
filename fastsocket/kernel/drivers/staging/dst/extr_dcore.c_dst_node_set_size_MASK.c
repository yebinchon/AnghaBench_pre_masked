
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_node {int size; int disk; } ;
struct block_device {TYPE_1__* bd_inode; } ;
struct TYPE_2__ {int i_mutex; } ;


 struct block_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct dst_node *VAR_0)
{
 struct block_device *VAR_1;

 FUNC_5(VAR_0->disk, VAR_0->size >> 9);

 VAR_1 = FUNC_0(VAR_0->disk, 0);
 if (VAR_1) {
  FUNC_3(&VAR_1->bd_inode->i_mutex);
  FUNC_2(VAR_1->bd_inode, VAR_0->size);
  FUNC_4(&VAR_1->bd_inode->i_mutex);
  FUNC_1(VAR_1);
 }
}
