
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct imxmci_host {int mmc; scalar_t__ base; int pending_events; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct imxmci_host *VAR_6)
{
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 128;
 unsigned long VAR_9;
 u16 VAR_10;

 VAR_10 = FUNC_5(VAR_6->base + VAR_2);
 FUNC_7(VAR_10 & ~VAR_5, VAR_6->base + VAR_2);

 FUNC_0(VAR_0, &VAR_6->pending_events);






 VAR_10 = FUNC_5(VAR_6->base + VAR_2);
 FUNC_7(VAR_10 | VAR_4, VAR_6->base + VAR_2);

 do {
  unsigned int VAR_11 = VAR_8;

  while (VAR_11--) {
   VAR_10 = FUNC_5(VAR_6->base + VAR_1);
   if (VAR_10 & VAR_3)

    VAR_10 = FUNC_5(VAR_6->base + VAR_1);
    if (VAR_10 & VAR_3)
     return 0;

   if (FUNC_6(VAR_0, &VAR_6->pending_events))
    return 0;
  }

  FUNC_3(VAR_9);






  if (!FUNC_6(VAR_0, &VAR_6->pending_events)) {
   VAR_10 = FUNC_5(VAR_6->base + VAR_2);
   FUNC_7(VAR_10 | VAR_4,
     VAR_6->base + VAR_2);
  }
  FUNC_2(VAR_9);

 } while (++VAR_7 < 256);

 FUNC_1(FUNC_4(VAR_6->mmc), "imxmci_start_clock blocked, no luck\n");

 return -1;
}
