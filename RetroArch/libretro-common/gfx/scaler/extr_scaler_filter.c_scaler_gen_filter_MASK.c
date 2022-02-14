
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int filter_len; int filter_stride; int* filter_pos; int * filter; } ;
struct scaler_ctx {int scaler_type; int in_width; int out_width; int out_height; int in_height; TYPE_1__ vert; TYPE_1__ horiz; int scaler_special; } ;
typedef int int16_t ;






 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int,double) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int,double) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int FUNC_6 (struct scaler_ctx*) ;

bool FUNC_7(struct scaler_ctx *VAR_1)
{
   int VAR_2, VAR_3, VAR_4, VAR_5;
   int VAR_6 = 0;

   switch (VAR_1->scaler_type)
   {
      case 130:
         VAR_1->horiz.filter_len = 1;
         VAR_1->horiz.filter_stride = 1;
         VAR_1->vert.filter_len = 1;
         VAR_1->vert.filter_stride = 1;
         break;
      case 131:
         VAR_1->horiz.filter_len = 2;
         VAR_1->horiz.filter_stride = 2;
         VAR_1->vert.filter_len = 2;
         VAR_1->vert.filter_stride = 2;
         break;
      case 129:
         VAR_6 = 8 * ((VAR_1->in_width > VAR_1->out_width)
               ? FUNC_5(VAR_1->in_width / VAR_1->out_width) : 1);
         VAR_1->horiz.filter_len = VAR_6;
         VAR_1->horiz.filter_stride = VAR_6;
         VAR_1->vert.filter_len = VAR_6;
         VAR_1->vert.filter_stride = VAR_6;
         break;
      case 128:
      default:
         return 0;
   }

   VAR_1->horiz.filter = (int16_t*)FUNC_0(sizeof(int16_t), VAR_1->horiz.filter_stride * VAR_1->out_width);
   VAR_1->horiz.filter_pos = (int*)FUNC_0(sizeof(int), VAR_1->out_width);

   VAR_1->vert.filter = (int16_t*)FUNC_0(sizeof(int16_t), VAR_1->vert.filter_stride * VAR_1->out_height);
   VAR_1->vert.filter_pos = (int*)FUNC_0(sizeof(int), VAR_1->out_height);

   if (!VAR_1->horiz.filter || !VAR_1->vert.filter)
      return 0;

   VAR_3 = (1 << 16) * VAR_1->in_width / VAR_1->out_width;
   VAR_5 = (1 << 16) * VAR_1->in_height / VAR_1->out_height;

   switch (VAR_1->scaler_type)
   {
      case 130:
         VAR_2 = (1 << 15) * VAR_1->in_width / VAR_1->out_width - (1 << 15);
         VAR_4 = (1 << 15) * VAR_1->in_height / VAR_1->out_height - (1 << 15);

         FUNC_3(&VAR_1->horiz, VAR_1->out_width, VAR_2, VAR_3);
         FUNC_3(&VAR_1->vert, VAR_1->out_height, VAR_4, VAR_5);

         VAR_1->scaler_special = VAR_0;
         break;

      case 131:
         VAR_2 = (1 << 15) * VAR_1->in_width / VAR_1->out_width - (1 << 15);
         VAR_4 = (1 << 15) * VAR_1->in_height / VAR_1->out_height - (1 << 15);

         FUNC_2(&VAR_1->horiz, VAR_1->out_width, VAR_2, VAR_3);
         FUNC_2(&VAR_1->vert, VAR_1->out_height, VAR_4, VAR_5);
         break;

      case 129:



         VAR_2 = (1 << 15) * VAR_1->in_width / VAR_1->out_width - (1 << 15) - (VAR_6 << 15);
         VAR_4 = (1 << 15) * VAR_1->in_height / VAR_1->out_height - (1 << 15) - (VAR_6 << 15);

         FUNC_4(&VAR_1->horiz, VAR_1->out_width, VAR_2, VAR_3,
               VAR_1->in_width > VAR_1->out_width ? (double)VAR_1->out_width / VAR_1->in_width : 1.0);
         FUNC_4(&VAR_1->vert, VAR_1->out_height, VAR_4, VAR_5,
               VAR_1->in_height > VAR_1->out_height ? (double)VAR_1->out_height / VAR_1->in_height : 1.0
               );
         break;
      case 128:
         break;
   }


   FUNC_1(&VAR_1->horiz, VAR_1->out_width, VAR_1->in_width);
   FUNC_1(&VAR_1->vert, VAR_1->out_height, VAR_1->in_height);

   return FUNC_6(VAR_1);
}
