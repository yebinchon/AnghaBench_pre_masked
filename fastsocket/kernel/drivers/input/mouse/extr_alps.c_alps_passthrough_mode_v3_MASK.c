
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 int FUNC_0 (struct psmouse*,int) ;
 int FUNC_1 (struct psmouse*,int) ;
 scalar_t__ FUNC_2 (struct psmouse*) ;
 scalar_t__ FUNC_3 (struct psmouse*) ;

__attribute__((used)) static int FUNC_4(struct psmouse *VAR_0,
        int VAR_1, bool VAR_2)
{
 int VAR_3, VAR_4 = -1;

 if (FUNC_2(VAR_0))
  return -1;

 VAR_3 = FUNC_1(VAR_0, VAR_1 + 0x0008);
 if (VAR_3 == -1)
  goto error;

 if (VAR_2)
  VAR_3 |= 0x01;
 else
  VAR_3 &= ~0x01;

 VAR_4 = FUNC_0(VAR_0, VAR_3);

error:
 if (FUNC_3(VAR_0))
  VAR_4 = -1;
 return VAR_4;
}
