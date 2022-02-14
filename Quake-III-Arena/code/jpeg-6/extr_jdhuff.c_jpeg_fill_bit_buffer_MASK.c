
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ boolean ;
struct TYPE_8__ {size_t bytes_in_buffer; int unread_marker; int get_buffer; int bits_left; int const* next_input_byte; scalar_t__* printed_eod_ptr; TYPE_3__* cinfo; } ;
typedef TYPE_2__ bitread_working_state ;
typedef int bit_buf_type ;
struct TYPE_9__ {TYPE_1__* src; } ;
struct TYPE_7__ {size_t bytes_in_buffer; int const* next_input_byte; int (* fill_input_buffer ) (TYPE_3__*) ;} ;
typedef int const JOCTET ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

boolean
FUNC_4 (bitread_working_state * VAR_4,
        register bit_buf_type VAR_5, register int VAR_6,
        int VAR_7)

{

  register const JOCTET * VAR_8 = VAR_4->next_input_byte;
  register size_t VAR_9 = VAR_4->bytes_in_buffer;
  register int VAR_10;




  while (VAR_6 < VAR_2) {

    if (VAR_4->unread_marker != 0)
      goto no_more_data;

    if (VAR_9 == 0) {
      if (! (*VAR_4->cinfo->src->fill_input_buffer) (VAR_4->cinfo))
 return VAR_0;
      VAR_8 = VAR_4->cinfo->src->next_input_byte;
      VAR_9 = VAR_4->cinfo->src->bytes_in_buffer;
    }
    VAR_9--;
    VAR_10 = FUNC_0(*VAR_8++);


    if (VAR_10 == 0xFF) {
      do {
 if (VAR_9 == 0) {
   if (! (*VAR_4->cinfo->src->fill_input_buffer) (VAR_4->cinfo))
     return VAR_0;
   VAR_8 = VAR_4->cinfo->src->next_input_byte;
   VAR_9 = VAR_4->cinfo->src->bytes_in_buffer;
 }
 VAR_9--;
 VAR_10 = FUNC_0(*VAR_8++);
      } while (VAR_10 == 0xFF);

      if (VAR_10 == 0) {

 VAR_10 = 0xFF;
      } else {


 VAR_4->unread_marker = VAR_10;

      no_more_data:


 if (VAR_6 >= VAR_7)
   break;






 if (! *(VAR_4->printed_eod_ptr)) {
   FUNC_1(VAR_4->cinfo, VAR_1);
   *(VAR_4->printed_eod_ptr) = VAR_3;
 }
 VAR_10 = 0;
      }
    }


    VAR_5 = (VAR_5 << 8) | VAR_10;
    VAR_6 += 8;
  }


  VAR_4->next_input_byte = VAR_8;
  VAR_4->bytes_in_buffer = VAR_9;
  VAR_4->get_buffer = VAR_5;
  VAR_4->bits_left = VAR_6;

  return VAR_3;
}
