
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_mbox* FUNC_0 (int ) ;
 struct omap_mbox** FUNC_1 (char const*) ;
 int VAR_2 ;
 int FUNC_2 (struct omap_mbox*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct omap_mbox *FUNC_5(const char *VAR_3)
{
 struct omap_mbox *VAR_4;
 int VAR_5;

 FUNC_3(&VAR_2);
 VAR_4 = *(FUNC_1(VAR_3));
 if (VAR_4 == ((void*)0)) {
  FUNC_4(&VAR_2);
  return FUNC_0(-VAR_1);
 }

 FUNC_4(&VAR_2);

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  return FUNC_0(-VAR_0);

 return VAR_4;
}
