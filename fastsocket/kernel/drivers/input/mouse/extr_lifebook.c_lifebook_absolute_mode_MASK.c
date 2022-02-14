
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ps2dev*,unsigned char*,int ) ;
 scalar_t__ FUNC_1 (struct psmouse*) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_2)
{
 struct ps2dev *VAR_3 = &VAR_2->ps2dev;
 unsigned char VAR_4;

 if (FUNC_1(VAR_2))
  return -1;






 VAR_4 = VAR_1 ? 0x08 : 0x07;
 FUNC_0(VAR_3, &VAR_4, VAR_0);

 return 0;
}
