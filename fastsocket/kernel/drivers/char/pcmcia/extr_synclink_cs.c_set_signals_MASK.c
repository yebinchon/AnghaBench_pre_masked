
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ mode; } ;
struct TYPE_9__ {int serial_signals; TYPE_1__ params; } ;
typedef TYPE_2__ MGSLPC_INFO ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int ) ;
 unsigned char FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,unsigned char) ;

__attribute__((used)) static void FUNC_4(MGSLPC_INFO *VAR_9)
{
 unsigned char VAR_10;

 VAR_10 = FUNC_1(VAR_9, VAR_2 + VAR_4);
 if (VAR_9->params.mode == VAR_3) {
  if (VAR_9->serial_signals & VAR_8)
   VAR_10 &= ~VAR_1;
  else
   VAR_10 |= VAR_1;
 } else {
  if (VAR_9->serial_signals & VAR_8)
   VAR_10 |= VAR_0;
  else
   VAR_10 &= ~VAR_0;
 }
 FUNC_3(VAR_9, VAR_2 + VAR_4, VAR_10);

 if (VAR_9->serial_signals & VAR_7)
  FUNC_0(VAR_9, VAR_2 + VAR_5, VAR_6);
 else
  FUNC_2(VAR_9, VAR_2 + VAR_5, VAR_6);
}
