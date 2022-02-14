
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user32_sigaltstack {int ss_flags; void* ss_size; void* ss_sp; } ;
struct kern_sigaltstack {int ss_flags; int ss_size; int ss_sp; } ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct kern_sigaltstack *VAR_2, struct user32_sigaltstack *VAR_3)
{
 VAR_3->ss_sp = FUNC_0(VAR_0, VAR_2->ss_sp);
 VAR_3->ss_size = FUNC_0(VAR_1, VAR_2->ss_size);
 VAR_3->ss_flags = VAR_2->ss_flags;
}
