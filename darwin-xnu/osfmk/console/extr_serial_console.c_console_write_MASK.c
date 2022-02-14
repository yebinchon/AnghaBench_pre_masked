
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_2__ {int len; int write_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(char * VAR_3, int VAR_4)
{
 FUNC_0();
 int VAR_5 = VAR_4;
 int VAR_6 = 0;

 if (VAR_4 > VAR_2.len)
  VAR_5 = VAR_0;

 while (VAR_4 > 0) {
  boolean_t VAR_7 = FUNC_5(VAR_1);

  FUNC_6(&VAR_2.write_lock);
  while (VAR_5 > FUNC_3()) {
   FUNC_7(&VAR_2.write_lock);
   FUNC_1(VAR_7);

   FUNC_4();

   VAR_7 = FUNC_5(VAR_1);
   FUNC_6(&VAR_2.write_lock);
  }

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   FUNC_2(VAR_3[VAR_6]);

  VAR_3 = &VAR_3[VAR_6];
  VAR_4 -= VAR_5;
  FUNC_7(&VAR_2.write_lock);
  FUNC_1(VAR_7);
 }

 FUNC_4();
}
