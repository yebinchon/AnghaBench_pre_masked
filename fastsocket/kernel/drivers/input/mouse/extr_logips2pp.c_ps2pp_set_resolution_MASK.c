
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {int resolution; struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ps2dev*,unsigned char*,int ) ;
 int FUNC_1 (struct psmouse*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct psmouse *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 > 400) {
  struct ps2dev *VAR_4 = &VAR_2->ps2dev;
  unsigned char VAR_5 = 3;

  FUNC_0(VAR_4, ((void*)0), VAR_1);
  FUNC_0(VAR_4, ((void*)0), VAR_1);
  FUNC_0(VAR_4, ((void*)0), VAR_1);
  FUNC_0(VAR_4, &VAR_5, VAR_0);
  VAR_2->resolution = 800;
 } else
  FUNC_1(VAR_2, VAR_3);
}
