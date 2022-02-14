
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; int resolution; int (* set_resolution ) (struct psmouse*,int ) ;int rate; int (* set_rate ) (struct psmouse*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct psmouse*,int ) ;
 int FUNC_2 (struct psmouse*,int ) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_3)
{




 if (VAR_2 != VAR_1) {
  VAR_3->set_rate(VAR_3, VAR_3->rate);
  VAR_3->set_resolution(VAR_3, VAR_3->resolution);
  FUNC_0(&VAR_3->ps2dev, ((void*)0), VAR_0);
 }
}
