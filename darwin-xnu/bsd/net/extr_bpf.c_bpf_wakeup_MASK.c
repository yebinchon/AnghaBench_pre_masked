
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct bpf_d {scalar_t__ bd_state; int bd_flags; TYPE_1__ bd_sel; scalar_t__ bd_sig; scalar_t__ bd_sigio; scalar_t__ bd_async; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct bpf_d*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct bpf_d *VAR_3)
{
 if (VAR_3->bd_state == VAR_2) {
  FUNC_1(VAR_3);
  VAR_3->bd_state = VAR_0;
 }
 FUNC_4((caddr_t)VAR_3);
 if (VAR_3->bd_async && VAR_3->bd_sig && VAR_3->bd_sigio)
  FUNC_2(VAR_3->bd_sigio, VAR_3->bd_sig);

 FUNC_3(&VAR_3->bd_sel);
 if ((VAR_3->bd_flags & VAR_1))
  FUNC_0(&VAR_3->bd_sel.si_note, 1);
}
