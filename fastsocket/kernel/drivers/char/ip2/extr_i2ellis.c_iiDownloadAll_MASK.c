
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int loadHdrStrPtr ;
typedef TYPE_1__* i2eBordStrPtr ;
struct TYPE_4__ {scalar_t__ i2eState; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_1(i2eBordStrPtr VAR_5, loadHdrStrPtr VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;



 if (VAR_5->i2eState != VAR_3) return VAR_0;

 while (VAR_8 > 0) {
  VAR_8 -= VAR_4;




  VAR_9 = FUNC_0(VAR_5, VAR_6++, VAR_7);

  switch(VAR_9)
  {
  case 128:
   return ( (VAR_8 > 0) ? VAR_1 : 128);

  case 129:
   break;

  default:
   return VAR_9;
  }
 }




 return VAR_2;
}
