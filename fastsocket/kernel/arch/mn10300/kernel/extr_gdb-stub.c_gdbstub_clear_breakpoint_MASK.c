
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int len; int * origbytes; int * addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int *) ;

int FUNC_2(u8 *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;





 FUNC_0("clearbkpt(%p,%d)\n", VAR_4, VAR_5);

 for (VAR_6 = 255; VAR_6 >= 0; VAR_6--)
  if (VAR_2[VAR_6].addr == VAR_4 &&
      VAR_2[VAR_6].len == VAR_5)
   break;
 if (VAR_6 < 0)
  return -VAR_1;

 VAR_2[VAR_6].addr = ((void*)0);

 VAR_3 = 1;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  if (FUNC_1(VAR_2[VAR_6].origbytes[VAR_7],
           VAR_4 + VAR_7) < 0)
   return -VAR_0;

 return 0;
}
