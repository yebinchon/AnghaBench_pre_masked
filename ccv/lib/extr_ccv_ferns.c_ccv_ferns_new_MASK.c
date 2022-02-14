
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int dsfmt_t ;
struct TYPE_5__ {double width; double height; } ;
typedef TYPE_1__ ccv_size_t ;
typedef int ccv_point_t ;
struct TYPE_6__ {int structs; int features; int scales; int posteriors; float* posterior; int* rnum; scalar_t__ threshold; void** fern; scalar_t__* cnum; } ;
typedef TYPE_2__ ccv_ferns_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int,int) ;
 double FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 double FUNC_6 (double) ;
 float FUNC_7 (double) ;
 int FUNC_8 (int*,int ,int) ;

ccv_ferns_t* FUNC_9(int VAR_0, int VAR_1, int VAR_2, ccv_size_t* VAR_3)
{
 FUNC_0(VAR_0 > 0 && VAR_1 > 0 && VAR_2 > 0);
 int VAR_4 = 1 << VAR_1;
 ccv_ferns_t* VAR_5 = (ccv_ferns_t*)FUNC_1(sizeof(ccv_ferns_t) + sizeof(ccv_point_t) * (VAR_0 * VAR_1 * VAR_2 * 2 - 1) + sizeof(float) * VAR_0 * VAR_4 * 2 + sizeof(int) * VAR_0 * VAR_4 * 2);
 VAR_5->structs = VAR_0;
 VAR_5->features = VAR_1;
 VAR_5->scales = VAR_2;
 VAR_5->posteriors = VAR_4;
 VAR_5->cnum[0] = VAR_5->cnum[1] = 0;
 VAR_5->posterior = (float*)((uint8_t*)(VAR_5 + 1) + sizeof(ccv_point_t) * (VAR_0 * VAR_1 * VAR_2 * 2 - 1));

 VAR_5->rnum = (int*)(VAR_5->posterior + VAR_0 * VAR_4 * 2);
 FUNC_8(VAR_5->rnum, 0, sizeof(int) * VAR_0 * VAR_4 * 2);
 int VAR_6, VAR_7, VAR_8;
 float VAR_9 = FUNC_7(0.5);
 for (VAR_6 = 0; VAR_6 < VAR_0 * VAR_4 * 2; VAR_6++)
  VAR_5->posterior[VAR_6] = VAR_9;
 dsfmt_t VAR_10;
 FUNC_5(&VAR_10, (uint32_t)VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
 {
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  {
   double VAR_11, VAR_12, VAR_13, VAR_14;

   if (FUNC_4(&VAR_10) & 0x01)
   {
    do {
     VAR_11 = FUNC_3(&VAR_10);
     VAR_13 = FUNC_3(&VAR_10);
     VAR_12 = VAR_14 = FUNC_3(&VAR_10);
    } while (FUNC_6(VAR_11 - VAR_13) >= 0.2);
   } else {
    do {
     VAR_11 = VAR_13 = FUNC_3(&VAR_10);
     VAR_12 = FUNC_3(&VAR_10);
     VAR_14 = FUNC_3(&VAR_10);
    } while (FUNC_6(VAR_12 - VAR_14) >= 0.2);
   }
   for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   {
    VAR_5->fern[(VAR_7 * VAR_0 * VAR_1 + VAR_6 * VAR_1 + VAR_8) * 2] = FUNC_2((int)(VAR_11 * VAR_3[VAR_7].width), (int)(VAR_12 * VAR_3[VAR_7].height));
    VAR_5->fern[(VAR_7 * VAR_0 * VAR_1 + VAR_6 * VAR_1 + VAR_8) * 2 + 1] = FUNC_2((int)(VAR_13 * VAR_3[VAR_7].width), (int)(VAR_14 * VAR_3[VAR_7].height));
   }
  }
 }
 VAR_5->threshold = 0;
 return VAR_5;
}
