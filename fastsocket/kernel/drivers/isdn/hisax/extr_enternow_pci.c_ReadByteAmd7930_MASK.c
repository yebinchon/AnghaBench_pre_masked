
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ isac; } ;
struct TYPE_4__ {TYPE_1__ njet; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static unsigned char
FUNC_2(struct IsdnCardState *VAR_2, unsigned char VAR_3)
{

 if(VAR_3 < 8)
  return (FUNC_0(VAR_2->hw.njet.isac + 4*VAR_3));


 else {
  FUNC_1(VAR_3, VAR_2->hw.njet.isac + 4*VAR_0);
  return(FUNC_0(VAR_2->hw.njet.isac + 4*VAR_1));
 }
}
