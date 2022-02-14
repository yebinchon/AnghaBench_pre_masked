
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_cmd {int id; int size; } ;
struct netfs_state {int data; struct netfs_cmd cmd; } ;


 int VAR_0 ;


 int FUNC_0 (struct netfs_state*) ;
 int FUNC_1 (struct netfs_state*,int ,int ) ;
 int FUNC_2 (struct netfs_state*) ;

__attribute__((used)) static int FUNC_3(struct netfs_state *VAR_1)
{
 struct netfs_cmd *VAR_2 = &VAR_1->cmd;
 int VAR_3 = 0;

 VAR_3 = FUNC_1(VAR_1, VAR_1->data, VAR_2->size);
 if (VAR_3)
  return VAR_3;

 switch (VAR_2->id) {
  case 129:
   return FUNC_0(VAR_1);
  case 128:
   return FUNC_2(VAR_1);
  default:
   break;
 }
 return -VAR_0;
}
