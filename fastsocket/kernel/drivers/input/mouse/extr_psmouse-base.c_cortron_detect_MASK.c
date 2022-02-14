
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {char* vendor; char* name; TYPE_1__* dev; } ;
struct TYPE_2__ {int keybit; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_1, bool VAR_2)
{
 if (VAR_2) {
  VAR_1->vendor = "Cortron";
  VAR_1->name = "PS/2 Trackball";
  FUNC_0(VAR_0, VAR_1->dev->keybit);
 }

 return 0;
}
