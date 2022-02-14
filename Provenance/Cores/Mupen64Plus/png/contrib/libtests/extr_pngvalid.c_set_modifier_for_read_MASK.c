
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_structp ;
struct TYPE_3__ {int colour_type; int this; scalar_t__ buffer_position; scalar_t__ buffer_count; scalar_t__ flush; scalar_t__ pending_chunk; scalar_t__ pending_len; scalar_t__ bit_depth; int state; } ;
typedef TYPE_1__ png_modifier ;
typedef int png_infopp ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,char const*) ;

__attribute__((used)) static png_structp
FUNC_1(png_modifier *VAR_1, png_infopp VAR_2, png_uint_32 VAR_3,
    const char *VAR_4)
{




   VAR_1->state = VAR_0;
   VAR_1->bit_depth = 0;
   VAR_1->colour_type = 255;

   VAR_1->pending_len = 0;
   VAR_1->pending_chunk = 0;
   VAR_1->flush = 0;
   VAR_1->buffer_count = 0;
   VAR_1->buffer_position = 0;

   return FUNC_0(&VAR_1->this, VAR_2, VAR_3, VAR_4);
}
