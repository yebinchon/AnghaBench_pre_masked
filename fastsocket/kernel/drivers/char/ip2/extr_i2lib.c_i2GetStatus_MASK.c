
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int i2eBordStrPtr ;
typedef TYPE_1__* i2ChanStrPtr ;
struct TYPE_4__ {unsigned short dataSetIn; int pMyBord; } ;


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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int,int,...) ;

__attribute__((used)) static int
FUNC_2(i2ChanStrPtr VAR_12, int VAR_13)
{
 unsigned short VAR_14;
 i2eBordStrPtr VAR_15;

 FUNC_1 (VAR_0, VAR_11, VAR_9, 2, VAR_12->dataSetIn, VAR_13 );


 if ( !FUNC_0 ( VAR_12 ) )
  return -1;

 VAR_15 = VAR_12->pMyBord;

 VAR_14 = VAR_12->dataSetIn;



 if (VAR_13)
 {
  VAR_12->dataSetIn &= ~(VAR_13 & (VAR_1 | VAR_8 | VAR_6 | VAR_7));
  VAR_12->dataSetIn &= ~(VAR_3 | VAR_2 | VAR_4 | VAR_5);
 }

 FUNC_1 (VAR_0, VAR_11, VAR_10, 1, VAR_12->dataSetIn );

 return VAR_14;
}
