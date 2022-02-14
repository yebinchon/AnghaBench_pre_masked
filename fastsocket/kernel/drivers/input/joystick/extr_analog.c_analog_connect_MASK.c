
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gameport_driver {int dummy; } ;
struct gameport {int dummy; } ;
struct analog_port {TYPE_1__* analog; } ;
struct TYPE_2__ {int dev; scalar_t__ mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct analog_port*,TYPE_1__*,int) ;
 int FUNC_1 (struct analog_port*) ;
 int FUNC_2 (struct gameport*,struct gameport_driver*,struct analog_port*) ;
 int VAR_2 ;
 int FUNC_3 (struct gameport*) ;
 int FUNC_4 (struct gameport*,int *) ;
 int FUNC_5 (struct gameport*,int ) ;
 int FUNC_6 (struct gameport*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct analog_port*) ;
 struct analog_port* FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct gameport *VAR_3, struct gameport_driver *VAR_4)
{
 struct analog_port *VAR_5;
 int VAR_6;
 int VAR_7;

 if (!(VAR_5 = FUNC_9(sizeof(struct analog_port), VAR_1)))
  return - VAR_0;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  goto fail1;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  goto fail2;

 FUNC_5(VAR_3, VAR_2);
 FUNC_6(VAR_3, 10);

 for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
  if (VAR_5->analog[VAR_6].mask) {
   VAR_7 = FUNC_0(VAR_5, VAR_5->analog + VAR_6, VAR_6);
   if (VAR_7)
    goto fail3;
  }

 return 0;

 fail3: while (--VAR_6 >= 0)
  if (VAR_5->analog[VAR_6].mask)
   FUNC_7(VAR_5->analog[VAR_6].dev);
 fail2: FUNC_3(VAR_3);
 fail1: FUNC_4(VAR_3, ((void*)0));
 FUNC_8(VAR_5);
 return VAR_7;
}
