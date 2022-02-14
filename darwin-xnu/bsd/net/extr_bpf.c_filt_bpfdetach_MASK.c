
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {scalar_t__ kn_hook; } ;
struct TYPE_2__ {int si_note; } ;
struct bpf_d {int bd_flags; TYPE_1__ bd_sel; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct knote*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_2)
{
 struct bpf_d *VAR_3 = (struct bpf_d *)VAR_2->kn_hook;

 FUNC_1(VAR_1);
 if (VAR_3->bd_flags & VAR_0) {
  FUNC_0(&VAR_3->bd_sel.si_note, VAR_2);
  VAR_3->bd_flags &= ~VAR_0;
 }
 FUNC_2(VAR_1);
}
