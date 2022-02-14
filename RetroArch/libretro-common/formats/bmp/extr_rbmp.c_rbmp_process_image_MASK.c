
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * output_image; int buff_data; } ;
typedef TYPE_1__ rbmp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (int ,int,unsigned int*,unsigned int*,int*,int) ;

int FUNC_2(rbmp_t *VAR_2, void **VAR_3,
      size_t VAR_4, unsigned *VAR_5, unsigned *VAR_6)
{
   int VAR_7;

   if (!VAR_2)
      return VAR_1;

   VAR_2->output_image = (uint32_t*)FUNC_1(VAR_2->buff_data,
                           (int)VAR_4, VAR_5, VAR_6, &VAR_7, 4);
   *VAR_3 = VAR_2->output_image;

   FUNC_0(VAR_2->output_image, *VAR_5, *VAR_6);

   return VAR_0;
}
