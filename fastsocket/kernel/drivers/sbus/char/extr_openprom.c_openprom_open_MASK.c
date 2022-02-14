
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {void* private_data; } ;
struct TYPE_3__ {int current_node; int lastnode; } ;
typedef TYPE_1__ DATA ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct inode * VAR_2, struct file * VAR_3)
{
 DATA *VAR_4;

 VAR_4 = FUNC_0(sizeof(DATA), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1();
 VAR_4->current_node = FUNC_2("/");
 VAR_4->lastnode = VAR_4->current_node;
 VAR_3->private_data = (void *) VAR_4;
 FUNC_3();

 return 0;
}
