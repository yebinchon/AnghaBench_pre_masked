
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef scalar_t__ u_char ;
struct TYPE_3__ {scalar_t__ isac; scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ avm; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline u_int
FUNC_2(struct IsdnCardState *VAR_2, int VAR_3, u_char VAR_4)
{
 register u_int VAR_5 = VAR_3 ? VAR_1 : VAR_0;
 register u_int VAR_6;

 FUNC_1(VAR_5, VAR_2->hw.avm.cfg_reg + 4);
 VAR_6 = FUNC_0(VAR_2->hw.avm.isac + VAR_4);
 return (VAR_6);
}
