
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VIDEOMODE_resolution_t ;
struct TYPE_8__ {int min_h; int min_w; } ;
struct TYPE_7__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; } ;


 int FUNC_0 (double*,double*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* FUNC_2 (size_t*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 double VAR_3 ;
 double VAR_4 ;
 size_t VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_7 (TYPE_1__*,size_t,int,int *) ;
 TYPE_1__* VAR_8 ;
 size_t VAR_9 ;

int FUNC_8(void)
{

 VAR_8 = FUNC_2(&VAR_9);
 if (VAR_8 == ((void*)0)) {
  FUNC_1("Fatal error: System reports no display resolutions available");
  return VAR_1;
 }

 FUNC_7(VAR_8, VAR_9, sizeof(VIDEOMODE_resolution_t), &VAR_0);
 FUNC_4();
 if (VAR_9 == 0) {
  FUNC_1("Fatal error: System reports no resolution higher than minimal %ux%u available",
            VAR_6[0].min_w, VAR_6[0].min_h);
  return VAR_1;
 }


 for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5 ++) {
  if (VAR_8[VAR_5].width >= VAR_7.width &&
      VAR_8[VAR_5].height >= VAR_7.height)
   break;
 }
 if (VAR_5 >= VAR_9) {

  VAR_5 = VAR_9 - 1;
  FUNC_1("Requested resolution %ux%u is too big, using %ux%u instead.",
            VAR_7.width, VAR_7.height,
            VAR_8[VAR_5].width, VAR_8[VAR_5].height);
 } else if (VAR_8[VAR_5].width != VAR_7.width ||
            VAR_8[VAR_5].height != VAR_7.height)
  FUNC_1("Requested resolution %ux%u is not available, using %ux%u instead.",
            VAR_7.width, VAR_7.height,
            VAR_8[VAR_5].width, VAR_8[VAR_5].height);

 if (VAR_4 == 0.0 || VAR_3 == 0.0)
  FUNC_0(&VAR_4, &VAR_3);

 FUNC_5();
 if (!FUNC_6()) {
  FUNC_1("Fatal error: Cannot initialise video");
  return VAR_1;
 }



 return VAR_2;
}
