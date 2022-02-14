
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,unsigned char,unsigned char,unsigned char) ;
 scalar_t__ FUNC_1 (struct ps2dev*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_2, int VAR_3,
   int VAR_4, unsigned char *VAR_5)
{
 struct ps2dev *VAR_6 = &VAR_2->ps2dev;

 VAR_5[0] = 0;
 if (VAR_3 && FUNC_1(VAR_6, VAR_5, VAR_3))
  return -VAR_0;

 if (FUNC_1(VAR_6, ((void*)0), VAR_4) ||
     FUNC_1(VAR_6, ((void*)0), VAR_4) ||
     FUNC_1(VAR_6, ((void*)0), VAR_4))
  return -VAR_0;

 VAR_5[0] = VAR_5[1] = VAR_5[2] = 0xff;
 if (FUNC_1(VAR_6, VAR_5, VAR_1))
  return -VAR_0;

 FUNC_0("%2.2X report: %2.2x %2.2x %2.2x\n",
     VAR_4, VAR_5[0], VAR_5[1], VAR_5[2]);
 return 0;
}
