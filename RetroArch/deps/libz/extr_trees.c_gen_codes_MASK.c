
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ushf ;
typedef int ush ;
struct TYPE_4__ {int Len; int Code; } ;
typedef TYPE_1__ ct_data ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5 (ct_data *VAR_3, int VAR_4, ushf *VAR_5)
{
   ush VAR_6[VAR_0+1];
   ush VAR_7 = 0;
   int VAR_8;
   int VAR_9;




   for (VAR_8 = 1; VAR_8 <= VAR_0; VAR_8++) {
      VAR_6[VAR_8] = VAR_7 = (VAR_7 + VAR_5[VAR_8-1]) << 1;
   }



   FUNC_0 (VAR_7 + VAR_5[VAR_0]-1 == (1<<VAR_0)-1,
         "inconsistent bit counts");
   FUNC_2((VAR_2,"\ngen_codes: max_code %d ", VAR_4));

   for (VAR_9 = 0; VAR_9 <= VAR_4; VAR_9++) {
      int VAR_10 = VAR_3[VAR_9].Len;
      if (VAR_10 == 0) continue;

      VAR_3[VAR_9].Code = FUNC_3(VAR_6[VAR_10]++, VAR_10);

      FUNC_1(VAR_3 != VAR_1, (VAR_2,"\nn %3d %c l %2d c %4x (%x) ",
               VAR_9, (FUNC_4(VAR_9) ? VAR_9 : ' '), VAR_10, VAR_3[VAR_9].Code, VAR_6[VAR_10]-1));
   }
}
