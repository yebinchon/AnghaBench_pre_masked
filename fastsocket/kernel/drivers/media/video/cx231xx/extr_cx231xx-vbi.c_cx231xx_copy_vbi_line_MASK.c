
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct cx231xx_dmaqueue {int current_field; scalar_t__ lines_completed; scalar_t__ bytes_left_in_line; scalar_t__ lines_per_field; int is_partial_line; scalar_t__ pos; } ;
struct cx231xx_buffer {int dummy; } ;
struct TYPE_3__ {struct cx231xx_buffer* buf; } ;
struct TYPE_4__ {TYPE_1__ bulk_ctl; } ;
struct cx231xx {int width; TYPE_2__ vbi_mode; } ;


 int FUNC_0 (struct cx231xx*,struct cx231xx_dmaqueue*,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (struct cx231xx*,struct cx231xx_dmaqueue*) ;
 int FUNC_2 (struct cx231xx*,struct cx231xx_dmaqueue*) ;
 int FUNC_3 (struct cx231xx*,struct cx231xx_dmaqueue*,struct cx231xx_buffer*) ;

u32 FUNC_4(struct cx231xx *VAR_0, struct cx231xx_dmaqueue *VAR_1,
     u8 *VAR_2, u32 VAR_3, int VAR_4)
{
 u32 VAR_5;
 struct cx231xx_buffer *VAR_6;
 u32 VAR_7 = VAR_0->width * 2;

 if (VAR_1->current_field == -1) {

  FUNC_2(VAR_0, VAR_1);
 }

 if (VAR_1->current_field != VAR_4)
  VAR_1->lines_completed = 0;


 VAR_6 = VAR_0->vbi_mode.bulk_ctl.buf;


 VAR_1->current_field = VAR_4;

 VAR_5 = VAR_1->bytes_left_in_line;
 if (VAR_5 > VAR_3)
  VAR_5 = VAR_3;

 if (VAR_1->lines_completed >= VAR_1->lines_per_field) {
  VAR_1->bytes_left_in_line -= VAR_5;
  VAR_1->is_partial_line =
      (VAR_1->bytes_left_in_line == 0) ? 0 : 1;
  return 0;
 }

 VAR_1->is_partial_line = 1;



 if (!VAR_6) {
  VAR_1->bytes_left_in_line -= VAR_5;
  VAR_1->is_partial_line =
      (VAR_1->bytes_left_in_line == 0) ? 0 : 1;
  return VAR_5;
 }


 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5);

 VAR_1->pos += VAR_5;
 VAR_1->bytes_left_in_line -= VAR_5;

 if (VAR_1->bytes_left_in_line == 0) {

  VAR_1->bytes_left_in_line = VAR_7;
  VAR_1->lines_completed++;
  VAR_1->is_partial_line = 0;

  if (FUNC_1(VAR_0, VAR_1) && VAR_6) {

   FUNC_3(VAR_0, VAR_1, VAR_6);

   VAR_1->pos = 0;
   VAR_1->lines_completed = 0;
   FUNC_2(VAR_0, VAR_1);
  }
 }

 return VAR_5;
}
