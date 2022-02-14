
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct claw_privbk {struct claw_privbk* p_mtc_envelope; struct claw_privbk* p_env; } ;
struct ccwgroup_device {int dev; } ;


 int FUNC_0 (int,int ,char*) ;
 struct claw_privbk* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct claw_privbk*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4( struct ccwgroup_device *VAR_1)
{
 struct claw_privbk *VAR_2;

 FUNC_0(4, VAR_0, "proberr");
 VAR_2 = FUNC_1(&VAR_1->dev);
 if (VAR_2 != ((void*)0)) {
  FUNC_2(&VAR_1->dev, ((void*)0));
  FUNC_3(VAR_2->p_env);
  FUNC_3(VAR_2->p_mtc_envelope);
  FUNC_3(VAR_2);
 }
}
