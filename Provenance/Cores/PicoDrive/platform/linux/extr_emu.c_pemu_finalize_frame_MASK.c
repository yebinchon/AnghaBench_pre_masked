
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dirtyPal; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {scalar_t__ renderer; int EmuOpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 unsigned char* VAR_7 ;
 int FUNC_0 () ;
 scalar_t__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (int,scalar_t__,char const*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

void FUNC_3(const char *VAR_13, const char *VAR_14)
{
 if (VAR_9.renderer != VAR_8 && !(VAR_6 & VAR_3)) {
  unsigned short *VAR_15 = (unsigned short *)VAR_11 + 8 * VAR_12;
  unsigned char *VAR_16 = VAR_7 + 328*8 + 8;
  unsigned short *VAR_17 = VAR_2;
  int VAR_18, VAR_19;
  if (VAR_5.m.dirtyPal)
   FUNC_0();
  for (VAR_18 = 0; VAR_18 < 224; VAR_18++, VAR_16 += 8)
   for (VAR_19 = 0; VAR_19 < 320; VAR_19++)
    *VAR_15++ = VAR_17[*VAR_16++];
 }

 if (VAR_14 || (VAR_9.EmuOpt & VAR_1)) {
  if (VAR_14)
   FUNC_2(4, VAR_10 - 8, VAR_14);
  if (VAR_9.EmuOpt & VAR_1)
   FUNC_2(VAR_12 - 60, VAR_10 - 8, VAR_13);
 }
 if ((VAR_6 & VAR_4) && (VAR_9.EmuOpt & VAR_0))
  FUNC_1();
}
