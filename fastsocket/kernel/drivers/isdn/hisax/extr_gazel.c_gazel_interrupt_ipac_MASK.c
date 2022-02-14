
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_char ;
struct IsdnCardState {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct IsdnCardState*,int,int ) ;
 int FUNC_1 (struct IsdnCardState*,scalar_t__) ;
 int FUNC_2 (struct IsdnCardState*,scalar_t__,int) ;
 int FUNC_3 (struct IsdnCardState*,int) ;
 int FUNC_4 (struct IsdnCardState*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_6, void *VAR_7)
{
 struct IsdnCardState *VAR_8 = VAR_7;
 u_char VAR_9, VAR_10;
 int VAR_11 = 0;
 u_long VAR_12;

 FUNC_5(&VAR_8->lock, VAR_12);
 VAR_9 = FUNC_1(VAR_8, VAR_1 - 0x80);
 do {
  if (VAR_9 & 0x0f) {
   VAR_10 = FUNC_0(VAR_8, 1, VAR_0);
   if (VAR_9 & 0x01)
    VAR_10 |= 0x01;
   if (VAR_9 & 0x04)
    VAR_10 |= 0x02;
   if (VAR_9 & 0x08)
    VAR_10 |= 0x04;
   if (VAR_10) {
    FUNC_3(VAR_8, VAR_10);
   }
  }
  if (VAR_9 & 0x20) {
   VAR_10 = 0xfe & FUNC_1(VAR_8, VAR_4);
   if (VAR_10) {
    FUNC_4(VAR_8, VAR_10);
   }
  }
  if (VAR_9 & 0x10) {
   VAR_10 = 0x01;
   FUNC_4(VAR_8, VAR_10);
  }
  VAR_9 = FUNC_1(VAR_8, VAR_1 - 0x80);
  VAR_11++;
 }
 while ((VAR_9 & 0x3f) && (VAR_11 < VAR_5));

 FUNC_2(VAR_8, VAR_2 - 0x80, 0xFF);
 FUNC_2(VAR_8, VAR_2 - 0x80, 0xC0);
 FUNC_6(&VAR_8->lock, VAR_12);
 return VAR_3;
}
