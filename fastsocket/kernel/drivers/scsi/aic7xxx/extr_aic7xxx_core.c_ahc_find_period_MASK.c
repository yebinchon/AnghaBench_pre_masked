
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ahc_syncrate {size_t sxfr_u2; size_t period; size_t sxfr; int * rate; } ;
struct ahc_softc {int features; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 struct ahc_syncrate* VAR_8 ;

u_int
FUNC_0(struct ahc_softc *VAR_9, u_int VAR_10, u_int VAR_11)
{
 const struct ahc_syncrate *VAR_12;

 if ((VAR_9->features & VAR_5) != 0)
  VAR_10 &= VAR_7;
 else
  VAR_10 &= VAR_6;


 if ((VAR_9->features & VAR_0) == 0 && VAR_11 < VAR_3)
  VAR_11 = VAR_3;
 if ((VAR_9->features & (VAR_0 | VAR_5)) == 0
     && VAR_11 < VAR_2)
  VAR_11 = VAR_2;
 if ((VAR_9->features & (VAR_0 | VAR_5 | VAR_4)) == 0
     && VAR_11 < VAR_1)
  VAR_11 = VAR_1;


 VAR_12 = &VAR_8[VAR_11];
 while (VAR_12->rate != ((void*)0)) {

  if ((VAR_9->features & VAR_5) != 0) {
   if (VAR_12->sxfr_u2 == 0)
    break;
   else if (VAR_10 == (VAR_12->sxfr_u2 & VAR_7))
    return (VAR_12->period);
  } else if (VAR_10 == (VAR_12->sxfr & VAR_6)) {
    return (VAR_12->period);
  }
  VAR_12++;
 }
 return (0);
}
