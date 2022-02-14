
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ u32 ;
struct fc_rport {scalar_t__ dev_loss_tmo; struct bfad_itnim_data_s* dd_data; } ;
struct bfad_s {int bfa; } ;
struct bfad_itnim_s {TYPE_1__* im; } ;
struct bfad_itnim_data_s {struct bfad_itnim_s* itnim; } ;
struct TYPE_2__ {struct bfad_s* bfad; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct fc_rport *VAR_0, u32 VAR_1)
{
 struct bfad_itnim_data_s *VAR_2 = VAR_0->dd_data;
 struct bfad_itnim_s *VAR_3 = VAR_2->itnim;
 struct bfad_s *VAR_4 = VAR_3->im->bfad;
 uint16_t VAR_5 = FUNC_0(&VAR_4->bfa);

 VAR_0->dev_loss_tmo = VAR_1;
 if (VAR_1 < VAR_5)
  VAR_0->dev_loss_tmo = VAR_5 + 1;
}
