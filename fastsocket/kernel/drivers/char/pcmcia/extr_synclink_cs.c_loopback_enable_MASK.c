
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int clock_speed; } ;
struct TYPE_8__ {TYPE_1__ params; } ;
typedef TYPE_2__ MGSLPC_INFO ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int) ;
 unsigned char FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,unsigned char) ;

__attribute__((used)) static void FUNC_3(MGSLPC_INFO *VAR_9)
{
 unsigned char VAR_10;


 VAR_10 = FUNC_1(VAR_9, VAR_7 + VAR_5) | (VAR_2 + VAR_1 + VAR_0);
 FUNC_2(VAR_9, VAR_7 + VAR_5, VAR_10);


 VAR_10 = FUNC_1(VAR_9, VAR_7 + VAR_6) | (VAR_3 + VAR_4);
 FUNC_2(VAR_9, VAR_7 + VAR_6, VAR_10);


 if (VAR_9->params.clock_speed)
  FUNC_0(VAR_9, VAR_7, VAR_9->params.clock_speed);
 else
  FUNC_0(VAR_9, VAR_7, 1843200);


 VAR_10 = FUNC_1(VAR_9, VAR_7 + VAR_8) | VAR_0;
 FUNC_2(VAR_9, VAR_7 + VAR_8, VAR_10);
}
