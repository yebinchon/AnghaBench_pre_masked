
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long itc_offset; unsigned long itc_last; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (unsigned long*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static unsigned long
FUNC_5(void)
{
 unsigned long VAR_2;
 unsigned long VAR_3;
 unsigned long VAR_4;
 unsigned long VAR_5;

 VAR_3 = VAR_0->itc_offset;
 do {
  VAR_4 = VAR_0->itc_last;
  VAR_2 = FUNC_2(VAR_1);
  VAR_2 += VAR_3;
  if (VAR_4 >= VAR_2)
   VAR_2 = VAR_4 + 1;
  VAR_5 = FUNC_1(&VAR_0->itc_last,
           VAR_4, VAR_2);
 } while (FUNC_4(VAR_5 != VAR_4));
 return VAR_2;
}
