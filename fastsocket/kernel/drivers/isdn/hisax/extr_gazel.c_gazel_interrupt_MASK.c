
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef scalar_t__ u_char ;
struct IsdnCardState {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct IsdnCardState*,int,int ) ;
 scalar_t__ FUNC_1 (struct IsdnCardState*,int ) ;
 int FUNC_2 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_3 (struct IsdnCardState*,int ,int) ;
 int FUNC_4 (struct IsdnCardState*,scalar_t__) ;
 int FUNC_5 (struct IsdnCardState*,scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_8(int VAR_6, void *VAR_7)
{

 struct IsdnCardState *VAR_8 = VAR_7;
 u_char VAR_9, VAR_10;
 int VAR_11 = 0;
 u_long VAR_12;

 FUNC_6(&VAR_8->lock, VAR_12);
 do {
  VAR_10 = FUNC_0(VAR_8, 1, VAR_0);
  if (VAR_10)
   FUNC_4(VAR_8, VAR_10);
  VAR_9 = FUNC_1(VAR_8, VAR_3);
  if (VAR_9)
   FUNC_5(VAR_8, VAR_9);
  VAR_11++;
 } while ((VAR_10 || VAR_9) && (VAR_11 < 5));

 FUNC_2(VAR_8, 0, VAR_1, 0xFF);
 FUNC_2(VAR_8, 1, VAR_1, 0xFF);
 FUNC_3(VAR_8, VAR_4, 0xFF);
 FUNC_3(VAR_8, VAR_4, 0x0);
 FUNC_2(VAR_8, 0, VAR_1, 0x0);
 FUNC_2(VAR_8, 1, VAR_1, 0x0);
 FUNC_7(&VAR_8->lock, VAR_12);
 return VAR_2;
}
