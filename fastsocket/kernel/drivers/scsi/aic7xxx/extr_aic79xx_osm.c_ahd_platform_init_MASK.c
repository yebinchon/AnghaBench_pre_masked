
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {size_t unit; } ;
struct ahd_linux_iocell_opts {scalar_t__ precomp; scalar_t__ slewrate; scalar_t__ amplitude; } ;


 int FUNC_0 (struct ahd_softc*,scalar_t__) ;
 int FUNC_1 (struct ahd_softc*,scalar_t__) ;
 int FUNC_2 (struct ahd_softc*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_3 (struct ahd_linux_iocell_opts*) ;
 struct ahd_linux_iocell_opts* VAR_3 ;

void
FUNC_4(struct ahd_softc *VAR_4)
{



 if (VAR_4->unit < FUNC_3(VAR_3)) {
  const struct ahd_linux_iocell_opts *VAR_5;

  VAR_5 = &VAR_3[VAR_4->unit];
  if (VAR_5->precomp != VAR_1)
   FUNC_1(VAR_4, VAR_5->precomp);
  if (VAR_5->slewrate != VAR_2)
   FUNC_2(VAR_4, VAR_5->slewrate);
  if (VAR_5->amplitude != VAR_0)
   FUNC_0(VAR_4, VAR_5->amplitude);
 }

}
