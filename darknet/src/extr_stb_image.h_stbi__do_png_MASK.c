
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int stbi__uint16 ;
struct TYPE_8__ {int bits_per_channel; } ;
typedef TYPE_2__ stbi__result_info ;
struct TYPE_9__ {int depth; int * idata; int * expanded; int * out; TYPE_1__* s; } ;
typedef TYPE_3__ stbi__png ;
struct TYPE_7__ {int img_out_n; int img_x; int img_y; int img_n; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 void* FUNC_1 (unsigned char*,int,int,int,int) ;
 void* FUNC_2 (int *,int,int,int,int) ;
 void* FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void *FUNC_5(stbi__png *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int VAR_5, stbi__result_info *VAR_6)
{
   void *VAR_7=((void*)0);
   if (VAR_5 < 0 || VAR_5 > 4) return FUNC_3("bad req_comp", "Internal error");
   if (FUNC_4(VAR_1, VAR_0, VAR_5)) {
      if (VAR_1->depth < 8)
         VAR_6->bits_per_channel = 8;
      else
         VAR_6->bits_per_channel = VAR_1->depth;
      VAR_7 = VAR_1->out;
      VAR_1->out = ((void*)0);
      if (VAR_5 && VAR_5 != VAR_1->s->img_out_n) {
         if (VAR_6->bits_per_channel == 8)
            VAR_7 = FUNC_1((unsigned char *) VAR_7, VAR_1->s->img_out_n, VAR_5, VAR_1->s->img_x, VAR_1->s->img_y);
         else
            VAR_7 = FUNC_2((stbi__uint16 *) VAR_7, VAR_1->s->img_out_n, VAR_5, VAR_1->s->img_x, VAR_1->s->img_y);
         VAR_1->s->img_out_n = VAR_5;
         if (VAR_7 == ((void*)0)) return VAR_7;
      }
      *VAR_2 = VAR_1->s->img_x;
      *VAR_3 = VAR_1->s->img_y;
      if (VAR_4) *VAR_4 = VAR_1->s->img_n;
   }
   FUNC_0(VAR_1->out); VAR_1->out = ((void*)0);
   FUNC_0(VAR_1->expanded); VAR_1->expanded = ((void*)0);
   FUNC_0(VAR_1->idata); VAR_1->idata = ((void*)0);

   return VAR_7;
}
