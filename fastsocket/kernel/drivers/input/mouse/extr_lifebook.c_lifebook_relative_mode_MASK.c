
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ps2dev*,unsigned char*,int ) ;

__attribute__((used)) static void FUNC_1(struct psmouse *VAR_1)
{
 struct ps2dev *VAR_2 = &VAR_1->ps2dev;
 unsigned char VAR_3 = 0x06;

 FUNC_0(VAR_2, &VAR_3, VAR_0);
}
