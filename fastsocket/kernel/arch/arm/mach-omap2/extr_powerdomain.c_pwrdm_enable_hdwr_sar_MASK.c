
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int flags; int prcm_offs; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int,int ,int ) ;

int FUNC_2(struct powerdomain *VAR_4)
{
 if (!VAR_4)
  return -VAR_0;

 if (!(VAR_4->flags & VAR_3))
  return -VAR_0;

 FUNC_0("powerdomain: %s: setting SAVEANDRESTORE bit\n",
   VAR_4->name);

 FUNC_1(0, 1 << VAR_1,
        VAR_4->prcm_offs, VAR_2);

 return 0;
}
