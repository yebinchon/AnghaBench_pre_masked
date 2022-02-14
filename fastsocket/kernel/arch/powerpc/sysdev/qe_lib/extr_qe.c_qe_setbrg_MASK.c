
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef enum qe_clock { ____Placeholder_qe_clock } qe_clock ;
struct TYPE_3__ {int * brgc; } ;
struct TYPE_4__ {TYPE_1__ brg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int) ;
 unsigned int FUNC_1 () ;
 TYPE_2__* VAR_7 ;

int FUNC_2(enum qe_clock VAR_8, unsigned int VAR_9, unsigned int VAR_10)
{
 u32 VAR_11, VAR_12;
 u32 VAR_13 = 0;

 if ((VAR_8 < VAR_1) || (VAR_8 > VAR_2))
  return -VAR_0;

 VAR_11 = FUNC_1() / (VAR_9 * VAR_10);

 if (VAR_11 > VAR_4 + 1) {
  VAR_13 = VAR_3;
  VAR_11 /= 16;
 }




 if (!VAR_13 && (VAR_11 & 1))
  VAR_11++;

 VAR_12 = ((VAR_11 - 1) << VAR_5) |
  VAR_6 | VAR_13;

 FUNC_0(&VAR_7->brg.brgc[VAR_8 - VAR_1], VAR_12);

 return 0;
}
