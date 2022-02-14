
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct psmouse*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_2, int *VAR_3)
{
 static const int VAR_4[] = {
  0x16,
  0x06,
  0x04,
  0x02,
 };
 int VAR_5;

 if (FUNC_0(VAR_2, VAR_1, &VAR_5) == -1)
  return -VAR_0;

 *VAR_3 = VAR_4[(VAR_5 & 0x30) >> 4];
 return 0;
}
