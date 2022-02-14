
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* i2eBordStrPtr ;
struct TYPE_6__ {int i2eStatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(i2eBordStrPtr VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 for (;;)
 {






  FUNC_4(&VAR_0, VAR_6);

  if (FUNC_3(VAR_4->i2eStatus) & VAR_3) {
   FUNC_1(VAR_4);
   FUNC_5(&VAR_0, VAR_6);
   FUNC_0(VAR_4, VAR_1);
  }
  FUNC_5(&VAR_0, VAR_6);

  if (VAR_5-- == 0)
   break;

  FUNC_2(VAR_4, 1);
 }
 FUNC_0(VAR_4, VAR_2);
}
