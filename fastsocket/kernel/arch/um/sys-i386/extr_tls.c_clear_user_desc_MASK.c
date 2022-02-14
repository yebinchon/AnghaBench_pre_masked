
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_desc {int read_exec_only; int seg_not_present; } ;


 int FUNC_0 (struct user_desc*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct user_desc* VAR_0)
{

 FUNC_0(VAR_0, 0, sizeof(*VAR_0));





 VAR_0->read_exec_only = 1;
 VAR_0->seg_not_present = 1;
}
