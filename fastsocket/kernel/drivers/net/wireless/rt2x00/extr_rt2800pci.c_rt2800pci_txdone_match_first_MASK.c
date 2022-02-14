
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct queue_entry {int flags; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct queue_entry *VAR_1, void *VAR_2)
{
 u32 VAR_3 = *(u32 *)VAR_2;





 if (!FUNC_1(VAR_0, &VAR_1->flags)) {




  VAR_1->status = VAR_3;
  FUNC_0(VAR_0, &VAR_1->flags);
  return 1;
 }


 return 0;
}
