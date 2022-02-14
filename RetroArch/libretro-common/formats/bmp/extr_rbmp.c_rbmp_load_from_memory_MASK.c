
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* img_buffer; unsigned char* img_buffer_original; unsigned char* img_buffer_end; } ;
typedef TYPE_1__ rbmp_context ;


 unsigned char* FUNC_0 (TYPE_1__*,unsigned int*,unsigned int*,int*,int) ;

__attribute__((used)) static unsigned char *FUNC_1(unsigned char const *VAR_0, int VAR_1,
      unsigned *VAR_2, unsigned *VAR_3, int *VAR_4, int VAR_5)
{
   rbmp_context VAR_6;

   VAR_6.img_buffer = (unsigned char*)VAR_0;
   VAR_6.img_buffer_original = (unsigned char*)VAR_0;
   VAR_6.img_buffer_end = (unsigned char*)VAR_0+VAR_1;

   return FUNC_0(&VAR_6,VAR_2,VAR_3,VAR_4,VAR_5);
}
