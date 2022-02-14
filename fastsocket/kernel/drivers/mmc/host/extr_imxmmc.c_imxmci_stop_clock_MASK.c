
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct imxmci_host {int mmc; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct imxmci_host *VAR_5)
{
 int VAR_6 = 0;
 u16 VAR_7;

 VAR_7 = FUNC_2(VAR_5->base + VAR_1);
 FUNC_3(VAR_7 & ~VAR_3, VAR_5->base + VAR_1);
 while (VAR_6 < 0x1000) {
  if (!(VAR_6 & 0x7f)) {
   VAR_7 = FUNC_2(VAR_5->base + VAR_1);
   FUNC_3(VAR_7 | VAR_4,
     VAR_5->base + VAR_1);
  }

  VAR_7 = FUNC_2(VAR_5->base + VAR_0);
  if (!(VAR_7 & VAR_2)) {

   VAR_7 = FUNC_2(VAR_5->base + VAR_0);
   if (!(VAR_7 & VAR_2))
    return;
  }

  VAR_6++;
 }
 FUNC_0(FUNC_1(VAR_5->mmc), "imxmci_stop_clock blocked, no luck\n");
}
