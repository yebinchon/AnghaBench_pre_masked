
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ush ;
typedef void* uch ;
typedef int ct_data ;
struct TYPE_10__ {int extra_bits; } ;
struct TYPE_9__ {int* extra_bits; TYPE_3__* static_tree; } ;
struct TYPE_8__ {int Len; int Code; } ;
struct TYPE_7__ {int* extra_bits; TYPE_1__* static_tree; } ;
struct TYPE_6__ {int Len; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void** VAR_4 ;
 void** VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_1 (unsigned int,int) ;
 int VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int FUNC_2 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_3 () ;
 TYPE_5__ VAR_11 ;
 TYPE_4__ VAR_12 ;
 TYPE_3__* VAR_13 ;
 TYPE_2__ VAR_14 ;
 TYPE_1__* VAR_15 ;

__attribute__((used)) static void FUNC_4(void)
{

   static int VAR_16 = 0;
   int VAR_17;
   int VAR_18;
   int VAR_19;
   int VAR_20;
   int VAR_21;
   ush VAR_22[VAR_3+1];


   if (VAR_16) return;
   VAR_19 = 0;
   for (VAR_20 = 0; VAR_20 < VAR_1-1; VAR_20++) {
      VAR_7[VAR_20] = VAR_19;
      for (VAR_17 = 0; VAR_17 < (1<<VAR_10[VAR_20]); VAR_17++) {
         VAR_5[VAR_19++] = (uch)VAR_20;
      }
   }
   FUNC_0 (VAR_19 == 256, "tr_static_init: length != 256");




   VAR_5[VAR_19-1] = (uch)VAR_20;


   VAR_21 = 0;
   for (VAR_20 = 0 ; VAR_20 < 16; VAR_20++) {
      VAR_6[VAR_20] = VAR_21;
      for (VAR_17 = 0; VAR_17 < (1<<VAR_9[VAR_20]); VAR_17++) {
         VAR_4[VAR_21++] = (uch)VAR_20;
      }
   }
   FUNC_0 (VAR_21 == 256, "tr_static_init: dist != 256");
   VAR_21 >>= 7;
   for ( ; VAR_20 < VAR_0; VAR_20++) {
      VAR_6[VAR_20] = VAR_21 << 7;
      for (VAR_17 = 0; VAR_17 < (1<<(VAR_9[VAR_20]-7)); VAR_17++) {
         VAR_4[256 + VAR_21++] = (uch)VAR_20;
      }
   }
   FUNC_0 (VAR_21 == 256, "tr_static_init: 256+dist != 512");


   for (VAR_18 = 0; VAR_18 <= VAR_3; VAR_18++) VAR_22[VAR_18] = 0;
   VAR_17 = 0;
   while (VAR_17 <= 143) VAR_15[VAR_17++].Len = 8, VAR_22[8]++;
   while (VAR_17 <= 255) VAR_15[VAR_17++].Len = 9, VAR_22[9]++;
   while (VAR_17 <= 279) VAR_15[VAR_17++].Len = 7, VAR_22[7]++;
   while (VAR_17 <= 287) VAR_15[VAR_17++].Len = 8, VAR_22[8]++;




   FUNC_2((ct_data *)VAR_15, VAR_2+1, VAR_22);


   for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
      VAR_13[VAR_17].Len = 5;
      VAR_13[VAR_17].Code = FUNC_1((unsigned)VAR_17, 5);
   }
   VAR_16 = 1;





}
