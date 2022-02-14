
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_const_bytep ;
typedef int png_alloc_size_t ;
struct TYPE_3__ {scalar_t__ output_len; int input_len; int input; } ;
typedef TYPE_1__ compression_state ;



__attribute__((used)) static void
FUNC_0(compression_state *VAR_0, png_const_bytep VAR_1,
    png_alloc_size_t VAR_2)
{
   VAR_0->input = VAR_1;
   VAR_0->input_len = VAR_2;
   VAR_0->output_len = 0;
}
