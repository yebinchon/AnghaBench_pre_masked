
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_3)
{
 u32 VAR_4;
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < 300; VAR_6++) {
  VAR_4 = FUNC_2(&VAR_2->status);
  if (VAR_4 & VAR_1)
   break;
  FUNC_0(1);
 }
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 == 0)
  return 0;
 return -VAR_0;
}
