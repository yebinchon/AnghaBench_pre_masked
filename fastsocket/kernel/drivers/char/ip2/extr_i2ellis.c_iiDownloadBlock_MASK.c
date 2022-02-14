
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_4__* loadHdrStrPtr ;
typedef TYPE_5__* i2eBordStrPtr ;
struct TYPE_13__ {int porDiag2; } ;
struct TYPE_14__ {TYPE_2__ e; } ;
struct TYPE_16__ {scalar_t__ i2eValid; int i2eState; TYPE_3__ i2ePom; int i2eData; scalar_t__ i2eToLoad; int i2eLSub; int i2eLRevision; int i2eLVersion; } ;
struct TYPE_12__ {int loadSubRevision; int loadRevision; int loadVersion; int loadBlocksMore; int loadMagic; } ;
struct TYPE_15__ {int c; TYPE_1__ e; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
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

 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 ( i2eBordStrPtr VAR_17, loadHdrStrPtr VAR_18, int VAR_19)
{
 int VAR_20;
 int VAR_21;

 if (VAR_17->i2eValid != VAR_0) return VAR_4;

 switch(VAR_17->i2eState)
 {
 case 130:



  if (VAR_18->e.loadMagic != VAR_12)
  {
   return VAR_2;
  }


  VAR_17->i2eToLoad = 1 + VAR_18->e.loadBlocksMore;




  VAR_17->i2eState = 131;
  VAR_17->i2eLVersion = VAR_18->e.loadVersion;
  VAR_17->i2eLRevision = VAR_18->e.loadRevision;
  VAR_17->i2eLSub = VAR_18->e.loadSubRevision;



  VAR_21 = 1;
  break;

 case 131:
  VAR_21 = 0;
  break;

 default:
  return VAR_3;
 }




 if (!FUNC_2(VAR_17, VAR_14)) {
  return VAR_7;
 }

 if (!FUNC_3(VAR_17, VAR_18->c, VAR_11)) {
  return VAR_4;
 }





 if (VAR_21) {
  if (!FUNC_2(VAR_17, VAR_15)) {
   return VAR_7;
  }
 }


 if (--(VAR_17->i2eToLoad)) {
  return VAR_5;
 }



 if (!FUNC_2(VAR_17, VAR_14)) {
  return VAR_7;
 }


 VAR_20 = VAR_13/10;
 while (--VAR_20) {
  if (FUNC_0(VAR_17)) {
   switch (FUNC_4(VAR_17->i2eData)) {
   case 128:
    VAR_17->i2eState =
     VAR_19 ? VAR_10 :VAR_9;






    if (VAR_17->i2ePom.e.porDiag2 & VAR_16) {
     FUNC_1(VAR_17, 700);
    }

    return VAR_6;

   case 129:
   default:
    return VAR_1;
   }
  }

  FUNC_1(VAR_17, 10);
 }



 VAR_17->i2eState = VAR_8;
 return VAR_7;
}
