
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {scalar_t__ model; struct ps2dev ps2dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct psmouse*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ps2dev*,int *,int) ;
 int FUNC_3 (struct ps2dev*,int,int) ;
 int FUNC_4 (struct psmouse*) ;
 int FUNC_5 (struct psmouse*,int ) ;

__attribute__((used)) static int FUNC_6(struct psmouse *VAR_6, int VAR_7)
{
 struct ps2dev *VAR_8 = &VAR_6->ps2dev;
 int VAR_9;


 if (VAR_6->model < VAR_0)
  return 0;

 if (VAR_7) {
  FUNC_5(VAR_6, VAR_5);
  for (VAR_9 = 20; VAR_9 > 0; VAR_9--) {
   if (!FUNC_3(&VAR_6->ps2dev,
     VAR_2, 20))
    break;
   FUNC_1(50);
  }

  FUNC_4(VAR_6);


  FUNC_2(&VAR_6->ps2dev, ((void*)0), VAR_3);
  FUNC_5(VAR_6, VAR_1);

 } else {
  FUNC_0(VAR_6, "Powering off touchpad.\n");
  FUNC_5(VAR_6, VAR_4);

  if (FUNC_2(VAR_8, ((void*)0), 0xec) ||
      FUNC_2(VAR_8, ((void*)0), 0xec) ||
      FUNC_2(VAR_8, ((void*)0), 0xea)) {
   return -1;
  }


  FUNC_3(&VAR_6->ps2dev, 0xec, 20);
 }

 return 0;
}
