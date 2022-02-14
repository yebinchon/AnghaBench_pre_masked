
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gru_blade_state {TYPE_1__* bs_kgts; int bs_kgts_sema; } ;
struct TYPE_2__ {int ts_gru; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct gru_blade_state** VAR_0 ;
 int FUNC_2 (struct gru_blade_state*,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static struct gru_blade_state *FUNC_5(int VAR_2)
{
 struct gru_blade_state *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1);
again:
 VAR_4 = VAR_2 < 0 ? FUNC_4() : VAR_2;
 VAR_3 = VAR_0[VAR_4];


 FUNC_1(&VAR_3->bs_kgts_sema);
 if (VAR_2 < 0 && VAR_4 != FUNC_4()) {
  FUNC_3(&VAR_3->bs_kgts_sema);
  goto again;
 }
 if (!VAR_3->bs_kgts || !VAR_3->bs_kgts->ts_gru)
  FUNC_2(VAR_3, VAR_4);
 return VAR_3;

}
