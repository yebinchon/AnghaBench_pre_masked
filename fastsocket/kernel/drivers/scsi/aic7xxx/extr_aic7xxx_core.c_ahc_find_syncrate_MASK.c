
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ahc_syncrate {int sxfr_u2; size_t period; int * rate; } ;
struct ahc_softc {int features; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 struct ahc_syncrate const* VAR_8 ;

const struct ahc_syncrate *
FUNC_0(struct ahc_softc *VAR_9, u_int *VAR_10,
    u_int *VAR_11, u_int VAR_12)
{
 const struct ahc_syncrate *VAR_13;

 if ((VAR_9->features & VAR_0) == 0)
  *VAR_11 &= ~VAR_6;


 if ((*VAR_11 & VAR_6) == 0
  && VAR_12 < VAR_3)
  VAR_12 = VAR_3;



 if ((VAR_9->features & (VAR_0 | VAR_5)) == 0
     && VAR_12 < VAR_2)
  VAR_12 = VAR_2;
 if ((VAR_9->features & (VAR_0 | VAR_5 | VAR_4)) == 0
     && VAR_12 < VAR_1)
  VAR_12 = VAR_1;

 for (VAR_13 = &VAR_8[VAR_12];
      VAR_13->rate != ((void*)0);
      VAR_13++) {





  if ((VAR_9->features & VAR_5) != 0
   && (VAR_13->sxfr_u2 == 0))
   break;

  if (*VAR_10 <= VAR_13->period) {
   if (VAR_13 == &VAR_8[VAR_12])
    *VAR_10 = VAR_13->period;





    if ((VAR_13->sxfr_u2 & VAR_7) != 0)
    *VAR_11 &= ~VAR_6;
   break;
  }
 }

 if ((*VAR_10 == 0)
  || (VAR_13->rate == ((void*)0))
  || ((VAR_9->features & VAR_5) != 0
   && (VAR_13->sxfr_u2 == 0))) {

  *VAR_10 = 0;
  VAR_13 = ((void*)0);
  *VAR_11 &= ~VAR_6;
 }
 return (VAR_13);
}
