
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mpeg; } ;
struct cx88_core {int last_change; TYPE_1__ board; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct cx88_core*) ;
 int FUNC_1 (struct cx88_core*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_6(struct cx88_core *VAR_14, u32 VAR_15)
{
 u32 VAR_16;


 FUNC_1(VAR_14);
 FUNC_5(VAR_5, 0x000000C0);
 FUNC_0(VAR_14);

 if (VAR_14->board.mpeg & VAR_8) {
  FUNC_5(VAR_3, 4);
  FUNC_5(VAR_0, 1);

  FUNC_2(VAR_1, VAR_10);
  FUNC_5(VAR_4, 1);
  FUNC_5(VAR_2, 0);

 }
 if ((VAR_12) || (!(VAR_14->board.mpeg & VAR_8))) {
  VAR_15 |= VAR_9;
  FUNC_5(VAR_1, VAR_15);
 }


 FUNC_5(VAR_6, 0x0000);


 VAR_16 = FUNC_3(VAR_11);
 FUNC_4(VAR_11, VAR_7, VAR_16);

 VAR_14->last_change = VAR_13;
}
