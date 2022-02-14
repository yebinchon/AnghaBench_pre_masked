
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int itac; int ale; } ;
struct TYPE_4__ {TYPE_1__ elsa; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline u_char
FUNC_2(struct IsdnCardState *VAR_0, u_char VAR_1)
{
 register u_char VAR_2;

 FUNC_1(VAR_0->hw.elsa.ale, VAR_1);
 VAR_2 = FUNC_0(VAR_0->hw.elsa.itac);
 return (VAR_2);
}
