
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* i2eBordStrPtr ;
struct TYPE_6__ {int i2ePointer; int i2eStatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_7(i2eBordStrPtr VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 for (;;)
 {
  FUNC_5(&VAR_0, VAR_9);
  FUNC_4(VAR_5, VAR_7->i2ePointer);
  FUNC_4(VAR_3, VAR_7->i2ePointer);

  VAR_10 = FUNC_3(VAR_7->i2eStatus);

  FUNC_4(VAR_5, VAR_7->i2ePointer);
  FUNC_4(VAR_4, VAR_7->i2ePointer);

  if (VAR_10 & VAR_6)
  {
   FUNC_1(VAR_7);
   FUNC_6(&VAR_0, VAR_9);
   FUNC_0(VAR_7, VAR_1);
  }

  FUNC_6(&VAR_0, VAR_9);

  if (VAR_8-- == 0)
   break;

  FUNC_2(VAR_7, 1);
 }
 FUNC_0(VAR_7, VAR_2);
}
