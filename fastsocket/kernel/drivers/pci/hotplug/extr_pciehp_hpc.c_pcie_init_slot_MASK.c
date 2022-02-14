
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {int work; int lock; struct controller* ctrl; } ;
struct controller {struct slot* slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct slot* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct controller *VAR_3)
{
 struct slot *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->ctrl = VAR_3;
 FUNC_2(&VAR_4->lock);
 FUNC_0(&VAR_4->work, VAR_2);
 VAR_3->slot = VAR_4;
 return 0;
}
