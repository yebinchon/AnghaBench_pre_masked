
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct IsdnCardState {scalar_t__ subtyp; scalar_t__ debug; } ;
struct BCState {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct BCState*,int) ;
 int FUNC_1 (struct IsdnCardState*,int,scalar_t__) ;
 int FUNC_2 (struct IsdnCardState*,int,scalar_t__) ;
 struct BCState* FUNC_3 (struct IsdnCardState*,int) ;
 int FUNC_4 (struct IsdnCardState*,char*) ;

__attribute__((used)) static inline void
FUNC_5(struct IsdnCardState *VAR_4)
{
 u_int VAR_5;
 struct BCState *VAR_6;

 if (VAR_4->subtyp == VAR_0) {
  VAR_5 = FUNC_1(VAR_4, 0, VAR_3);
 } else {
  VAR_5 = FUNC_2(VAR_4, 0, VAR_3);
  if (VAR_5 & VAR_2)
   VAR_5 |= (FUNC_2(VAR_4, 0, VAR_3+1))<<8;
 }
 if (VAR_5 & VAR_1) {
  if (!(VAR_6 = FUNC_3(VAR_4, 0))) {
   if (VAR_4->debug)
    FUNC_4(VAR_4, "hdlc spurious channel 0 IRQ");
  } else
   FUNC_0(VAR_6, VAR_5);
 }
 if (VAR_4->subtyp == VAR_0) {
  VAR_5 = FUNC_1(VAR_4, 1, VAR_3);
 } else {
  VAR_5 = FUNC_2(VAR_4, 1, VAR_3);
  if (VAR_5 & VAR_2)
   VAR_5 |= (FUNC_2(VAR_4, 1, VAR_3+1))<<8;
 }
 if (VAR_5 & VAR_1) {
  if (!(VAR_6 = FUNC_3(VAR_4, 1))) {
   if (VAR_4->debug)
    FUNC_4(VAR_4, "hdlc spurious channel 1 IRQ");
  } else
   FUNC_0(VAR_6, VAR_5);
 }
}
