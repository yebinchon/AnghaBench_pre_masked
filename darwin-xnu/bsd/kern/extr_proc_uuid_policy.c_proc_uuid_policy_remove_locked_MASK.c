
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int uint32_t ;
struct proc_uuid_policy_entry {int flags; } ;


 int FUNC_0 (struct proc_uuid_policy_entry*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct proc_uuid_policy_entry* FUNC_1 (int ) ;

__attribute__((used)) static struct proc_uuid_policy_entry *
FUNC_2(uuid_t VAR_2, uint32_t VAR_3, int *VAR_4)
{
 struct proc_uuid_policy_entry *VAR_5 = ((void*)0);
 if (VAR_4) {
  *VAR_4 = 0;
 }

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5) {
  if (VAR_5->flags == VAR_3) {
   FUNC_0(VAR_5, VAR_0);
   VAR_1--;
   if (VAR_4) {
    *VAR_4 = 1;
   }
  } else {
   VAR_5->flags &= ~VAR_3;
  }
 }

 return VAR_5;
}
