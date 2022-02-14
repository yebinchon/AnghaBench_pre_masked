
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_entry {int status; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct queue_entry*,int ,int ) ;
 int FUNC_1 (struct queue_entry*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct queue_entry *VAR_1,
          void *VAR_2)
{
 if (FUNC_2(VAR_0, &VAR_1->flags)) {
  FUNC_0(VAR_1, VAR_1->status,
        FUNC_1(VAR_1));
  return 0;
 }


 return 1;
}
