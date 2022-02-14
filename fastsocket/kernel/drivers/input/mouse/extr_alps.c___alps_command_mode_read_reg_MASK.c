
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ps2dev*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_1, int VAR_2)
{
 struct ps2dev *VAR_3 = &VAR_1->ps2dev;
 unsigned char VAR_4[4];

 if (FUNC_0(VAR_3, VAR_4, VAR_0))
  return -1;






 if (VAR_2 != ((VAR_4[0] << 8) | VAR_4[1]))
  return -1;

 return VAR_4[2];
}
