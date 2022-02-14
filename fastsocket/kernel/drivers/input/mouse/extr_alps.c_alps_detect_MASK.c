
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {char* vendor; char* name; int model; } ;
struct alps_data {int flags; int proto_version; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct psmouse*,struct alps_data*) ;

int FUNC_1(struct psmouse *VAR_1, bool VAR_2)
{
 struct alps_data VAR_3;

 if (FUNC_0(VAR_1, &VAR_3) < 0)
  return -1;

 if (VAR_2) {
  VAR_1->vendor = "ALPS";
  VAR_1->name = VAR_3.flags & VAR_0 ?
    "DualPoint TouchPad" : "GlidePoint";
  VAR_1->model = VAR_3.proto_version << 8;
 }
 return 0;
}
