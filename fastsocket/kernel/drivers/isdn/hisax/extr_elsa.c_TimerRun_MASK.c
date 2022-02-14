
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int cfg; } ;
struct TYPE_4__ {TYPE_1__ elsa; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(struct IsdnCardState *VAR_5)
{
 register u_char VAR_6;

 VAR_6 = FUNC_0(VAR_5->hw.elsa.cfg);
 if ((VAR_5->subtyp == VAR_3) || (VAR_5->subtyp == VAR_4))
  return (0 == (VAR_6 & VAR_0));
 else if (VAR_5->subtyp == VAR_2)
  return (VAR_6 & VAR_1);
 return (VAR_6 & VAR_0);
}
