
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jpeg_error_mgr {int last_jpeg_message; scalar_t__ last_addon_message; scalar_t__ first_addon_message; int * addon_message_table; int jpeg_message_table; scalar_t__ msg_code; scalar_t__ num_warnings; scalar_t__ trace_level; int reset_error_mgr; int format_message; int output_message; int emit_message; int error_exit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

struct jpeg_error_mgr *
FUNC_0 (struct jpeg_error_mgr * VAR_7)
{
  VAR_7->error_exit = VAR_2;
  VAR_7->emit_message = VAR_1;
  VAR_7->output_message = VAR_5;
  VAR_7->format_message = VAR_3;
  VAR_7->reset_error_mgr = VAR_6;

  VAR_7->trace_level = 0;
  VAR_7->num_warnings = 0;
  VAR_7->msg_code = 0;


  VAR_7->jpeg_message_table = VAR_4;
  VAR_7->last_jpeg_message = (int) VAR_0 - 1;

  VAR_7->addon_message_table = ((void*)0);
  VAR_7->first_addon_message = 0;
  VAR_7->last_addon_message = 0;

  return VAR_7;
}
