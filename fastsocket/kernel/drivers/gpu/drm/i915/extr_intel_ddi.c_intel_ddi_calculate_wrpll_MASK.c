
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int clock; int p; int n2; int r2; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int,int,int,int) ;
 int FUNC_2 (char*,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(int VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
  if (VAR_1 <= VAR_0[VAR_5].clock)
   break;

 if (VAR_5 == FUNC_0(VAR_0))
  VAR_5--;

 *VAR_2 = VAR_0[VAR_5].p;
 *VAR_3 = VAR_0[VAR_5].n2;
 *VAR_4 = VAR_0[VAR_5].r2;

 if (VAR_0[VAR_5].clock != VAR_1)
  FUNC_2("WRPLL: using settings for %dKHz on %dKHz mode\n",
    VAR_0[VAR_5].clock, VAR_1);

 FUNC_1("WRPLL: %dKHz refresh rate with p=%d, n2=%d r2=%d\n",
        VAR_1, *VAR_2, *VAR_3, *VAR_4);
}
