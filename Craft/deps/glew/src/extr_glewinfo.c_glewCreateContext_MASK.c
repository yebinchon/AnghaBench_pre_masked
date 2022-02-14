
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int colormap; scalar_t__ border_pixel; } ;
typedef TYPE_1__ XSetWindowAttributes ;
struct TYPE_9__ {int visual; int depth; int screen; } ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int,int,int ,int ,int ,int ,int,TYPE_1__*) ;
 TYPE_2__* FUNC_4 (int *,int ,int *,int*) ;
 int * FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 TYPE_2__* FUNC_7 (int *,int ,int*) ;
 int * FUNC_8 (int *,TYPE_2__*,int,int ) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *,int*,int*) ;
 TYPE_2__* VAR_13 ;
 TYPE_2__* VAR_14 ;
 int VAR_15 ;

GLboolean FUNC_11 (const char* VAR_16, int* VAR_17)
{
  int VAR_18[] = { VAR_4, VAR_3, VAR_8 };
  int VAR_19, VAR_20;
  XSetWindowAttributes VAR_21;

  VAR_12 = FUNC_5(VAR_16);
  if (((void*)0) == VAR_12) return VAR_6;

  if (!FUNC_10(VAR_12, &VAR_19, &VAR_20)) return VAR_6;

  if (*VAR_17 == -1)
  {
    VAR_13 = FUNC_7(VAR_12, FUNC_0(VAR_12), VAR_18);
    if (((void*)0) == VAR_13) return VAR_6;
    *VAR_17 = (int)FUNC_6(VAR_13->visual);
  }
  else
  {
    int VAR_22, VAR_23;
    VAR_14 = FUNC_4(VAR_12, 0, ((void*)0), &VAR_22);
    for (VAR_23=0; VAR_23<VAR_22; VAR_23++)
    {
      if ((int)FUNC_6(VAR_14[VAR_23].visual) == *VAR_17)
        VAR_13 = &VAR_14[VAR_23];
    }
    if (VAR_13 == ((void*)0)) return VAR_6;
  }

  VAR_11 = FUNC_8(VAR_12, VAR_13, VAR_8, VAR_9);
  if (((void*)0) == VAR_11) return VAR_6;


  VAR_10 = FUNC_2(VAR_12, FUNC_1(VAR_12, VAR_13->screen), VAR_13->visual, VAR_0);
  VAR_21.border_pixel = 0;
  VAR_21.colormap = VAR_10;
  VAR_15 = FUNC_3(VAR_12, FUNC_1(VAR_12, VAR_13->screen),
                      0, 0, 1, 1, 0, VAR_13->depth, VAR_7, VAR_13->visual,
                      VAR_1 | VAR_2, &VAR_21);

  if (!FUNC_9(VAR_12, VAR_15, VAR_11)) return VAR_6;
  return VAR_5;
}
