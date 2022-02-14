
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_call_t ;
struct knote {scalar_t__ kn_hook; int kn_hookid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct knote *VAR_3)
{
 if (FUNC_0(&VAR_3->kn_hookid, VAR_1, VAR_2) == VAR_0) {

  FUNC_1((thread_call_t)VAR_3->kn_hook);
 }
}
