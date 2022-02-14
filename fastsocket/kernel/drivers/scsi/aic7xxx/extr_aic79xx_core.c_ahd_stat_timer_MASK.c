
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ahd_softc {int hs_mailbox; scalar_t__ cmdcmplt_total; scalar_t__ int_coalescing_threshold; scalar_t__ int_coalescing_stop_threshold; int cmdcmplt_bucket; int* cmdcmplt_counts; int stat_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahd_softc*,int) ;
 int FUNC_1 (struct ahd_softc*,int *) ;
 char* FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (int *,int ,void (*) (void*),struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,int *) ;
 int FUNC_5 (char*,char*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(void *VAR_5)
{
 struct ahd_softc *VAR_6 = VAR_5;
 u_long VAR_7;
 int VAR_8;

 FUNC_1(VAR_6, &VAR_7);

 VAR_8 = VAR_6->hs_mailbox & VAR_3;
 if (VAR_6->cmdcmplt_total > VAR_6->int_coalescing_threshold)
  VAR_8 |= VAR_3;
 else if (VAR_6->cmdcmplt_total < VAR_6->int_coalescing_stop_threshold)
  VAR_8 &= ~VAR_3;

 if (VAR_8 != (VAR_6->hs_mailbox & VAR_3)) {
  FUNC_0(VAR_6, VAR_8);
 }

 VAR_6->cmdcmplt_bucket = (VAR_6->cmdcmplt_bucket+1) & (VAR_1-1);
 VAR_6->cmdcmplt_total -= VAR_6->cmdcmplt_counts[VAR_6->cmdcmplt_bucket];
 VAR_6->cmdcmplt_counts[VAR_6->cmdcmplt_bucket] = 0;
 FUNC_3(&VAR_6->stat_timer, VAR_2,
   FUNC_6, VAR_6);
 FUNC_4(VAR_6, &VAR_7);
}
