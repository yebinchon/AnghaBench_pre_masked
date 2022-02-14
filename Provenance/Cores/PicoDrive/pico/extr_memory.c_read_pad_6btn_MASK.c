
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* padTHPhase; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 TYPE_2__ VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(int VAR_2, u32 VAR_3)
{
  u32 VAR_4 = ~VAR_1[VAR_2];
  int VAR_5 = VAR_0.m.padTHPhase[VAR_2];
  u32 VAR_6;

  if (VAR_5 == 2 && !(VAR_3 & 0x40)) {
    VAR_6 = (VAR_4 & 0xc0) >> 2;
    goto out;
  }
  else if(VAR_5 == 3) {
    if (VAR_3 & 0x40)
      return (VAR_4 & 0x30) | ((VAR_4 >> 8) & 0xf);
    else
      return ((VAR_4 & 0xc0) >> 2) | 0x0f;
    goto out;
  }

  if (VAR_3 & 0x40)
    VAR_6 = VAR_4 & 0x3f;
  else
    VAR_6 = ((VAR_4 & 0xc0) >> 2) | (VAR_4 & 3);

out:
  VAR_6 |= VAR_3 & 0x40;
  return VAR_6;
}
