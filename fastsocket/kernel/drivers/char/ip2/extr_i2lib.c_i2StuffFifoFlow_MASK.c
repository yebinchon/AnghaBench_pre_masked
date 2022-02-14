
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* i2eBordStrPtr ;
typedef TYPE_2__* i2ChanStrPtr ;
typedef int flowIn ;
struct TYPE_8__ {int infl; } ;
struct TYPE_7__ {int debugFlowCount; int i2eFifoRemains; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned char*,unsigned short) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,unsigned char*,unsigned short,int ) ;
 int FUNC_3 (int ,int ,int ,int,...) ;
 unsigned short FUNC_4 (int,int) ;

__attribute__((used)) static inline void
FUNC_5(i2eBordStrPtr VAR_5)
{
 i2ChanStrPtr VAR_6;
 unsigned short VAR_7 = FUNC_4(sizeof(flowIn), 2);

 FUNC_3 (VAR_1, VAR_3, VAR_0, 2,
  VAR_5->i2eFifoRemains, VAR_7 );



 while ( (((void*)0) != (VAR_6 = FUNC_1(VAR_5,VAR_4)))) {
  VAR_5->debugFlowCount++;


  if ( 0 == FUNC_2(VAR_5,(unsigned char *)&(VAR_6->infl),VAR_7,0)) {
   break;
  }




 }

 FUNC_3 (VAR_1, VAR_3, VAR_2, 0 );
}
