
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {scalar_t__ base; } ;
struct TYPE_4__ {TYPE_1__ hfcsx; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline u_char
FUNC_2(struct IsdnCardState *VAR_0, u_char VAR_1)
{
        u_char VAR_2;

        FUNC_1(VAR_0->hw.hfcsx.base+1, VAR_1);
 VAR_2 = FUNC_0(VAR_0->hw.hfcsx.base);
 return(VAR_2);
}
