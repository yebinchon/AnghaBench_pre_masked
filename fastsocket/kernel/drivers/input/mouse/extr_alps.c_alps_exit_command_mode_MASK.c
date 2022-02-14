
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ps2dev*,int *,int ) ;

__attribute__((used)) static inline int FUNC_1(struct psmouse *VAR_1)
{
 struct ps2dev *VAR_2 = &VAR_1->ps2dev;
 if (FUNC_0(VAR_2, ((void*)0), VAR_0))
  return -1;
 return 0;
}
