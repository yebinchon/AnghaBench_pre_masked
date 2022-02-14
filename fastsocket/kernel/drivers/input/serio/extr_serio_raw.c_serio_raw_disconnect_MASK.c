
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_raw {int wait; int * serio; } ;
struct serio {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct serio*) ;
 struct serio_raw* FUNC_3 (struct serio*) ;
 int FUNC_4 (struct serio_raw*) ;
 int VAR_0 ;
 int FUNC_5 (struct serio*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct serio *VAR_1)
{
 struct serio_raw *VAR_2;

 FUNC_0(&VAR_0);

 VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1);
 FUNC_5(VAR_1, ((void*)0));

 VAR_2->serio = ((void*)0);
 if (!FUNC_4(VAR_2))
  FUNC_6(&VAR_2->wait);

 FUNC_1(&VAR_0);
}
