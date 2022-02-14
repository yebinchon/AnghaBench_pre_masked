
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* i2eBordStrPtr ;
typedef scalar_t__ delayFunc_t ;
struct TYPE_4__ {int i2eBase; int i2eState; int i2eValid; scalar_t__ i2eDelay; scalar_t__ i2eXMask; scalar_t__ i2eXMail; scalar_t__ i2ePointer; scalar_t__ i2eStatus; scalar_t__ i2eData; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int
FUNC_1( i2eBordStrPtr VAR_13, int VAR_14, delayFunc_t VAR_15 )
{

 VAR_13->i2eValid = VAR_8;




 if ((unsigned int)VAR_14 <= 0x100
  || (unsigned int)VAR_14 >= 0xfff8
  || (VAR_14 & 0x7)
  )
 {
  FUNC_0(VAR_13, VAR_6);
 }


 VAR_13->i2eBase = VAR_14;
 VAR_13->i2eData = VAR_14 + VAR_0;
 VAR_13->i2eStatus = VAR_14 + VAR_5;
 VAR_13->i2ePointer = VAR_14 + VAR_4;
 VAR_13->i2eXMail = VAR_14 + VAR_1;
 VAR_13->i2eXMask = VAR_14 + VAR_2;


 VAR_12 = VAR_14 + VAR_3;


 VAR_13->i2eDelay = ((VAR_15 != (delayFunc_t)((void*)0)) ? VAR_15 : (delayFunc_t)VAR_11);

 VAR_13->i2eValid = VAR_9;
 VAR_13->i2eState = VAR_10;

 FUNC_0(VAR_13, VAR_7);
}
