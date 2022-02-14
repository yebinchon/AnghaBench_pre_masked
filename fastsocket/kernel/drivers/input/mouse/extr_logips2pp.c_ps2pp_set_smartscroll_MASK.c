
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ps2dev*,unsigned char*,int ) ;
 int FUNC_1 (struct psmouse*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(struct psmouse *VAR_1, bool VAR_2)
{
 struct ps2dev *VAR_3 = &VAR_1->ps2dev;
 unsigned char VAR_4[4];

 FUNC_1(VAR_1, VAR_4, 0x32);

 VAR_4[0] = 0;
 FUNC_0(VAR_3, VAR_4, VAR_0);
 FUNC_0(VAR_3, VAR_4, VAR_0);
 FUNC_0(VAR_3, VAR_4, VAR_0);

 VAR_4[0] = VAR_2;
 FUNC_0(VAR_3, VAR_4, VAR_0);
}
