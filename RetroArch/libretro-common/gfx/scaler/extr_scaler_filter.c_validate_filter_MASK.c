
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int filter_len; int* filter_pos; } ;
struct TYPE_3__ {int filter_len; int* filter_pos; } ;
struct scaler_ctx {int in_width; int out_width; int in_height; int out_height; TYPE_2__ vert; TYPE_1__ horiz; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct scaler_ctx *VAR_1)
{
   int VAR_2;
   int VAR_3;
   int VAR_4 = VAR_1->in_width - VAR_1->horiz.filter_len;

   for (VAR_2 = 0; VAR_2 < VAR_1->out_width; VAR_2++)
   {
      if (VAR_1->horiz.filter_pos[VAR_2] > VAR_4 || VAR_1->horiz.filter_pos[VAR_2] < 0)
      {
         FUNC_0(VAR_0, "Out X = %d => In X = %d\n", VAR_2, VAR_1->horiz.filter_pos[VAR_2]);
         return 0;
      }
   }

   VAR_3 = VAR_1->in_height - VAR_1->vert.filter_len;

   for (VAR_2 = 0; VAR_2 < VAR_1->out_height; VAR_2++)
   {
      if (VAR_1->vert.filter_pos[VAR_2] > VAR_3 || VAR_1->vert.filter_pos[VAR_2] < 0)
      {
         FUNC_0(VAR_0, "Out Y = %d => In Y = %d\n", VAR_2, VAR_1->vert.filter_pos[VAR_2]);
         return 0;
      }
   }

   return 1;
}
