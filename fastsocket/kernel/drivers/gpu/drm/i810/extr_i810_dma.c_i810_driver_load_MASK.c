
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int counters; int pdev; int * types; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct drm_device *VAR_4, unsigned long VAR_5)
{

 VAR_4->counters += 4;
 VAR_4->types[6] = VAR_1;
 VAR_4->types[7] = VAR_2;
 VAR_4->types[8] = VAR_3;
 VAR_4->types[9] = VAR_0;

 FUNC_0(VAR_4->pdev);

 return 0;
}
