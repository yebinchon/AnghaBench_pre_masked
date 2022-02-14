
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sfmt_t ;
typedef int ccv_matrix_t ;
struct TYPE_11__ {int type; } ;
typedef TYPE_1__ ccv_dense_matrix_t ;
struct TYPE_12__ {int lighting; int contrast; int saturation; int brightness; } ;
typedef TYPE_2__ ccv_cnnp_random_jitter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;
 int FUNC_2 (int * const,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__**,int ,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__**,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int **,int ,int ) ;
 int FUNC_7 (int * const) ;
 int FUNC_8 (int * const,int*,int,int) ;

__attribute__((used)) static void FUNC_9(ccv_dense_matrix_t* VAR_1, const ccv_cnnp_random_jitter_t VAR_2, sfmt_t* const VAR_3)
{
 FUNC_3(VAR_3 && FUNC_0(VAR_1->type) == VAR_0);
 int VAR_4[4] = {0, 1, 2, 3};
 FUNC_8(VAR_3, VAR_4, 4, sizeof(int));
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)

  switch (VAR_4[VAR_5])
  {
   case 0:
    if (VAR_2.brightness == 0)
     break;

    FUNC_6(VAR_1, (ccv_matrix_t**)&VAR_1, 0, FUNC_2(VAR_3, VAR_2.brightness));
    break;
   case 1:

    if (VAR_2.saturation == 0)
     break;
    FUNC_5(VAR_1, &VAR_1, 0, FUNC_2(VAR_3, VAR_2.saturation));
    break;
   case 2:

    if (VAR_2.contrast == 0)
     break;
    FUNC_4(VAR_1, &VAR_1, 0, FUNC_2(VAR_3, VAR_2.contrast));
    break;
   case 3:
    if (VAR_2.lighting == 0)
     break;
    FUNC_1(VAR_1, FUNC_7(VAR_3) * VAR_2.lighting, FUNC_7(VAR_3) * VAR_2.lighting, FUNC_7(VAR_3) * VAR_2.lighting);
    break;
  }
}
