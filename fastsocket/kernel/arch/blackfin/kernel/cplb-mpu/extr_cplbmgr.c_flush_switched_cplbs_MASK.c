
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ) ;
 TYPE_2__** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int * VAR_7 ;

void FUNC_7(unsigned int VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;

 VAR_7[VAR_8]++;

 FUNC_6(VAR_10);
 FUNC_1();
 for (VAR_9 = VAR_5; VAR_9 < VAR_2; VAR_9++) {
  VAR_6[VAR_8][VAR_9].data = 0;
  FUNC_4(VAR_1 + VAR_9 * 4, 0);
 }
 FUNC_3();

 FUNC_0();
 for (VAR_9 = VAR_4; VAR_9 < VAR_2; VAR_9++) {
  VAR_3[VAR_8][VAR_9].data = 0;
  FUNC_4(VAR_0 + VAR_9 * 4, 0);
 }
 FUNC_2();
 FUNC_5(VAR_10);

}
