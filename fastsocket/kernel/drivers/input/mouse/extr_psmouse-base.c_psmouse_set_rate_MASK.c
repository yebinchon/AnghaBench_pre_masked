
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char rate; int ps2dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int ) ;

__attribute__((used)) static void FUNC_1(struct psmouse *VAR_1, unsigned int VAR_2)
{
 static const unsigned char VAR_3[] = { 200, 100, 80, 60, 40, 20, 10, 0 };
 unsigned char VAR_4;
 int VAR_5 = 0;

 while (VAR_3[VAR_5] > VAR_2) VAR_5++;
 VAR_4 = VAR_3[VAR_5];
 FUNC_0(&VAR_1->ps2dev, &VAR_4, VAR_0);
 VAR_1->rate = VAR_4;
}
