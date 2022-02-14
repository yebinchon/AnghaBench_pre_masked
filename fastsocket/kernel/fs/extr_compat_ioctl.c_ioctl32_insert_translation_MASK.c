
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioctl_trans {struct ioctl_trans* next; int cmd; } ;


 unsigned long FUNC_0 (int ) ;
 struct ioctl_trans** VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ioctl_trans *VAR_1)
{
 unsigned long VAR_2;
 struct ioctl_trans *VAR_3;

 VAR_2 = FUNC_0 (VAR_1->cmd);
 if (!VAR_0[VAR_2])
  VAR_0[VAR_2] = VAR_1;
 else {
  VAR_3 = VAR_0[VAR_2];
  while (VAR_3->next)
   VAR_3 = VAR_3->next;
  VAR_1->next = ((void*)0);
  VAR_3->next = VAR_1;
 }
}
