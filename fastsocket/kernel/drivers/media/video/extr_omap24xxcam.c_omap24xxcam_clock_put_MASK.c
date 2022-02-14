
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap24xxcam_device {int * fck; int * ick; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct omap24xxcam_device *VAR_0)
{
 if (VAR_0->ick != ((void*)0) && !FUNC_0(VAR_0->ick))
  FUNC_1(VAR_0->ick);
 if (VAR_0->fck != ((void*)0) && !FUNC_0(VAR_0->fck))
  FUNC_1(VAR_0->fck);

 VAR_0->ick = VAR_0->fck = ((void*)0);
}
