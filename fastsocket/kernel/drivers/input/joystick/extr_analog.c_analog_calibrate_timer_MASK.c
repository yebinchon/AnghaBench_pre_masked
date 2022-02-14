
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;
struct analog_port {unsigned int loop; void* speed; struct gameport* gameport; } ;


 void* FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (struct gameport*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static void FUNC_7(struct analog_port *VAR_1)
{
 struct gameport *VAR_2 = VAR_1->gameport;
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;

 FUNC_4(VAR_9);
 FUNC_1(VAR_6);



 FUNC_5(1);
 FUNC_1(VAR_7);
 FUNC_1(VAR_8);
 FUNC_3(VAR_9);

 VAR_1->speed = FUNC_0(VAR_6, VAR_7) - FUNC_0(VAR_7, VAR_8);

 VAR_5 = ~0;

 for (VAR_3 = 0; VAR_3 < 50; VAR_3++) {
  FUNC_4(VAR_9);
  FUNC_1(VAR_6);
  for (VAR_4 = 0; VAR_4 < 50; VAR_4++) { FUNC_2(VAR_2); FUNC_1(VAR_7); }
  FUNC_1(VAR_8);
  FUNC_3(VAR_9);
  FUNC_6(VAR_3);
  VAR_4 = FUNC_0(VAR_6, VAR_7) - FUNC_0(VAR_7, VAR_8);
  if (VAR_4 < VAR_5) VAR_5 = VAR_4;
 }

        VAR_1->loop = VAR_5 / 50;
}
