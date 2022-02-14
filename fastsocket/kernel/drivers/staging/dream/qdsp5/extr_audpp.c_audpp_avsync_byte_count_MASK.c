
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct TYPE_2__ {unsigned int* avsync; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 TYPE_1__ VAR_1 ;

unsigned FUNC_3(int VAR_2)
{
 uint16_t *VAR_3 = VAR_1.avsync;
 unsigned VAR_4;
 unsigned long VAR_5;
 unsigned VAR_6;

 if (FUNC_0(VAR_2))
  return 0;

 VAR_6 = 1 << VAR_2;
 VAR_2 = VAR_2 * VAR_0 + 5;
 FUNC_2(VAR_5);
 if (VAR_3[0] & VAR_6)
  VAR_4 = (VAR_3[VAR_2] << 16) | VAR_3[VAR_2 + 1];
 else
  VAR_4 = 0;
 FUNC_1(VAR_5);

 return VAR_4;
}
