
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int limit; scalar_t__ colour_type; scalar_t__ bit_depth; scalar_t__ encoding_ignored; scalar_t__ current_encoding; scalar_t__ current_gamma; scalar_t__ test_uses_encoding; int state; int * modifications; scalar_t__ buffer_position; scalar_t__ buffer_count; scalar_t__ flush; scalar_t__ pending_chunk; scalar_t__ pending_len; int this; } ;
typedef TYPE_1__ png_modifier ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(png_modifier *VAR_1)
{
   FUNC_1(&VAR_1->this);
   VAR_1->limit = 4E-3;
   VAR_1->pending_len = VAR_1->pending_chunk = 0;
   VAR_1->flush = VAR_1->buffer_count = VAR_1->buffer_position = 0;
   VAR_1->modifications = ((void*)0);
   VAR_1->state = VAR_0;
   FUNC_0(VAR_1);




   VAR_1->test_uses_encoding = 0;
   VAR_1->current_gamma = 0;
   VAR_1->current_encoding = 0;
   VAR_1->encoding_ignored = 0;

   VAR_1->bit_depth = VAR_1->colour_type = 0;
}
