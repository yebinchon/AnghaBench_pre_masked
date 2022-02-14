
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user32_sigaltstack {int ss_sp; int ss_size; int ss_flags; } ;
struct kern_sigaltstack {int ss_sp; int ss_size; int ss_flags; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct user32_sigaltstack *VAR_0, struct kern_sigaltstack *VAR_1)
{
 VAR_1->ss_flags = VAR_0->ss_flags;
 VAR_1->ss_size = VAR_0->ss_size;
 VAR_1->ss_sp = FUNC_0(VAR_0->ss_sp);
}
