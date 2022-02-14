
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_node {int dummy; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct dst_node* private_data; } ;


 int FUNC_0 (struct dst_node*) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_0, fmode_t VAR_1)
{
 struct dst_node *VAR_2 = VAR_0->bd_disk->private_data;

 FUNC_0(VAR_2);
 return 0;
}
