
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* u8; } ;
struct TYPE_6__ {int step; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int,int,int,int ,int ) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_3(ccv_dense_matrix_t** VAR_2, const void* VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = (VAR_4 & 0xF00) ? VAR_0 | ((VAR_4 & 0xF00) >> 8) : VAR_0 | VAR_1;
 ccv_dense_matrix_t* VAR_9 = *VAR_2 = FUNC_1(VAR_5, VAR_6, VAR_8, 0, 0);
 int VAR_10, VAR_11;
 switch (VAR_4 & 0xF00)
 {
  case 129:
  {
   unsigned char* VAR_12 = VAR_9->data.u8;
   unsigned char* VAR_13 = (unsigned char*)VAR_3;
   int VAR_14 = VAR_7 - VAR_6 * 3;
   FUNC_0(VAR_14 >= 0);
   for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
   {
    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
     VAR_12[VAR_11] = (unsigned char)((VAR_13[0] * 6969 + VAR_13[1] * 23434 + VAR_13[2] * 2365) >> 15), VAR_13 += 3;
    VAR_13 += VAR_14;
    VAR_12 += VAR_9->step;
   }
   break;
  }
  case 128:
  default:
  {
   unsigned char* VAR_15 = VAR_9->data.u8;
   unsigned char* VAR_16 = (unsigned char*)VAR_3;
   FUNC_0(VAR_7 >= VAR_6 * 3);
   for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
   {
    FUNC_2(VAR_15, VAR_16, VAR_6 * 3);
    VAR_16 += VAR_7;
    VAR_15 += VAR_9->step;
   }
   break;
  }
 }
}
