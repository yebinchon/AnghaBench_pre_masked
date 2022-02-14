
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int ph_state; } ;
struct TYPE_4__ {TYPE_1__ isac; } ;
struct IsdnCardState {int (* readisac ) (struct IsdnCardState*,int ) ;int debug; TYPE_2__ dc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct IsdnCardState*,char*,int) ;
 int FUNC_1 (struct IsdnCardState*,int ) ;
 int FUNC_2 (struct IsdnCardState*,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct IsdnCardState *VAR_3)
{
 u_char VAR_4;

 VAR_4 = VAR_3->readisac(VAR_3, VAR_1) >> 4;
 if (VAR_3->debug &VAR_2) FUNC_0(VAR_3, "cic_int(event=%#x)", VAR_4);



  VAR_3->dc.isac.ph_state = VAR_4;
  FUNC_1(VAR_3, VAR_0);
}
