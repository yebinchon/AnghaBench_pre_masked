
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_syncrate {unsigned int sxfr_ultra2; unsigned int period; unsigned int sxfr; int ** rate; } ;
struct aic7xxx_host {int features; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct aic7xxx_syncrate* VAR_5 ;

__attribute__((used)) static unsigned int
FUNC_0(struct aic7xxx_host *VAR_6, unsigned int VAR_7,
  unsigned int VAR_8)
{
  struct aic7xxx_syncrate *VAR_9;

  if (VAR_6->features & VAR_1)
  {
    VAR_7 &= VAR_3;
  }
  else
  {
    VAR_7 &= VAR_2;
  }

  VAR_9 = &VAR_5[VAR_8];
  while (VAR_9->rate[0] != ((void*)0))
  {
    if (VAR_6->features & VAR_1)
    {
      if (VAR_9->sxfr_ultra2 == 0)
        break;
      else if (VAR_7 == VAR_9->sxfr_ultra2)
        return (VAR_9->period);
      else if (VAR_7 == (VAR_9->sxfr_ultra2 & ~VAR_0))
        return (VAR_9->period);
    }
    else if (VAR_7 == (VAR_9->sxfr & ~VAR_4))
    {
      return (VAR_9->period);
    }
    VAR_9++;
  }
  return (0);
}
