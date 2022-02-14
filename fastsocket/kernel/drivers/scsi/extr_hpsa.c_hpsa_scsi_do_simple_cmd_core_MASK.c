
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int dummy; } ;
struct CommandList {int * waiting; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct ctlr_info *VAR_1,
 struct CommandList *VAR_2)
{
 FUNC_0(VAR_0);

 VAR_2->waiting = &VAR_0;
 FUNC_1(VAR_1, VAR_2);
 FUNC_2(&VAR_0);
}
