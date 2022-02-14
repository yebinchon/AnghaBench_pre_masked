
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ahd_tmode_tstate {TYPE_1__* transinfo; struct ahd_tmode_tstate* enabled_luns; } ;
struct ahd_softc {size_t our_id; struct ahd_tmode_tstate** enabled_targets; } ;
struct TYPE_2__ {struct ahd_tmode_tstate goal; struct ahd_tmode_tstate curr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahd_softc*) ;
 struct ahd_tmode_tstate* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct ahd_tmode_tstate*,struct ahd_tmode_tstate*,int) ;
 int FUNC_3 (struct ahd_tmode_tstate*,int ,int) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static struct ahd_tmode_tstate *
FUNC_5(struct ahd_softc *VAR_2, u_int VAR_3, char VAR_4)
{
 struct ahd_tmode_tstate *VAR_5;
 struct ahd_tmode_tstate *VAR_6;
 int VAR_7;

 VAR_5 = VAR_2->enabled_targets[VAR_2->our_id];
 if (VAR_2->enabled_targets[VAR_3] != ((void*)0)
  && VAR_2->enabled_targets[VAR_3] != VAR_5)
  FUNC_4("%s: ahd_alloc_tstate - Target already allocated",
        FUNC_0(VAR_2));
 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0, VAR_1);
 if (VAR_6 == ((void*)0))
  return (((void*)0));







 if (VAR_5 != ((void*)0)) {
  FUNC_2(VAR_6, VAR_5, sizeof(*VAR_6));
  FUNC_3(VAR_6->enabled_luns, 0, sizeof(VAR_6->enabled_luns));
  for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
   FUNC_3(&VAR_6->transinfo[VAR_7].curr, 0,
         sizeof(VAR_6->transinfo[VAR_7].curr));
   FUNC_3(&VAR_6->transinfo[VAR_7].goal, 0,
         sizeof(VAR_6->transinfo[VAR_7].goal));
  }
 } else
  FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_2->enabled_targets[VAR_3] = VAR_6;
 return (VAR_6);
}
