
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int isaudio; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (scalar_t__,int const*,int) ;

void
FUNC_3 (const u8 *VAR_4)
{

   if (VAR_2 < (sizeof(VAR_3.data) / 2))
   {
      VAR_0->isaudio = 0;
      FUNC_0(1);
  VAR_0->isaudio = 1;
   }
 else if (VAR_2 > (sizeof(VAR_3.data) * 3 / 4 ))
  FUNC_0(0);
   else
   {
      VAR_0->isaudio = 1;
      FUNC_0(1);
   }

  FUNC_2(VAR_3.data+VAR_1, VAR_4, 2352);
  if (sizeof(VAR_3.data)-VAR_1 <= 2352)
     VAR_1 = 0;
  else
     VAR_1 += 2352;

  VAR_2 += 2352;

  if (VAR_2 > sizeof(VAR_3.data))
    {
      FUNC_1 ("WARNING: CDDA buffer overrun\n");
      VAR_2 = sizeof(VAR_3.data);
    }
}
