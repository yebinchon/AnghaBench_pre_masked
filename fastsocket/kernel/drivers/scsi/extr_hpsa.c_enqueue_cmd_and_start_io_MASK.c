
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int lock; int Qdepth; int reqQ; } ;
struct CommandList {int dummy; } ;


 int FUNC_0 (int *,struct CommandList*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct ctlr_info*) ;

__attribute__((used)) static void FUNC_6(struct ctlr_info *VAR_0,
 struct CommandList *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_0->lock, VAR_2);
 FUNC_0(&VAR_0->reqQ, VAR_1);
 VAR_0->Qdepth++;
 FUNC_4(&VAR_0->lock, VAR_2);
 FUNC_5(VAR_0);
}
