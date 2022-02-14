
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct psmouse*,int) ;
 scalar_t__ FUNC_1 (struct psmouse*) ;
 int FUNC_2 (struct psmouse*) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_2, int VAR_3)
{
 int VAR_4 = -VAR_0, VAR_5;

 if (FUNC_1(VAR_2))
  goto error;

 VAR_5 = FUNC_0(VAR_2, VAR_3 + 0x08);
 if (VAR_5 == -1)
  goto error;


 VAR_4 = VAR_5 & 0x80 ? 0 : -VAR_1;

error:
 FUNC_2(VAR_2);
 return VAR_4;
}
