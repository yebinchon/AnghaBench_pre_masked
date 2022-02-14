
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ ST; } ;
struct TYPE_6__ {TYPE_2__ OPN; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;

void FUNC_1(int VAR_7, int VAR_8, int VAR_9)
{
  int VAR_10 = VAR_7 << 8;


  if ((VAR_8 & 4) && VAR_10 > VAR_2)
    VAR_6 |= 1;

  if ((VAR_8 & 8) && VAR_10 > VAR_4)
    VAR_6 |= 2;


  if (VAR_8 & 1)
    while (VAR_10 > VAR_2)
      VAR_2 += VAR_3;

  if ((VAR_8 ^ VAR_9) & 1)
  {
    if (VAR_8 & 1)
      VAR_2 = VAR_1;
    else
      VAR_2 = VAR_10 + VAR_3;
  }
  if (VAR_9 & 1)
    FUNC_0(VAR_0, "timer a upd to %i @ %i", VAR_2>>8, VAR_7);


  if (VAR_8 & 2)
    while (VAR_10 > VAR_4)
      VAR_4 += VAR_5;

  if ((VAR_8 ^ VAR_9) & 2)
  {
    if (VAR_8 & 2)
      VAR_4 = VAR_1;
    else
      VAR_4 = VAR_10 + VAR_5;
  }
  if (VAR_9 & 2)
    FUNC_0(VAR_0, "timer b upd to %i @ %i", VAR_4>>8, VAR_7);
}
