
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {int * card; } ;
struct TYPE_2__ {int name; int isapnp_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char,char,char) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_2 (struct pnp_dev*) ;
 scalar_t__ FUNC_3 (struct pnp_dev*) ;
 int FUNC_4 (struct pnp_dev*) ;
 struct pnp_dev* FUNC_5 (int *,int ,int ,int *) ;
 int FUNC_6 (struct pnp_dev*,int ) ;
 int FUNC_7 (struct pnp_dev*,int ) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int FUNC_9(struct pnp_dev **VAR_5)
{
 struct pnp_dev *VAR_6 = ((void*)0);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_5(((void*)0),
       FUNC_1('N', 'I', 'C'),
       FUNC_0(VAR_4[VAR_7].
         isapnp_id), ((void*)0));

  if (VAR_6 == ((void*)0) || VAR_6->card == ((void*)0))
   continue;

  if (FUNC_3(VAR_6) < 0) {
   FUNC_8
       ("ni_atmio: %s found but already active, skipping.\n",
        VAR_4[VAR_7].name);
   continue;
  }
  if (FUNC_2(VAR_6) < 0) {
   FUNC_4(VAR_6);
   return -VAR_0;
  }
  if (!FUNC_7(VAR_6, 0)
      || !FUNC_6(VAR_6, 0)) {
   FUNC_4(VAR_6);
   FUNC_8("ni_atmio: pnp invalid port or irq, aborting\n");
   return -VAR_2;
  }
  break;
 }
 if (VAR_7 == VAR_3)
  return -VAR_1;
 *VAR_5 = VAR_6;
 return 0;
}
