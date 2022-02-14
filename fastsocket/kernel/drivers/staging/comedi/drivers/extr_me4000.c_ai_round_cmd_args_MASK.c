
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned int start_arg; unsigned int scan_begin_arg; unsigned int convert_arg; int flags; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        struct comedi_cmd *VAR_4,
        unsigned int *VAR_5,
        unsigned int *VAR_6, unsigned int *VAR_7)
{

 int VAR_8;

 FUNC_0("In ai_round_cmd_args()\n");

 *VAR_5 = 0;
 *VAR_6 = 0;
 *VAR_7 = 0;

 FUNC_1("ai_round_cmd_arg(): start_arg = %d\n", VAR_4->start_arg);
 FUNC_1("ai_round_cmd_arg(): scan_begin_arg = %d\n",
        VAR_4->scan_begin_arg);
 FUNC_1("ai_round_cmd_arg(): convert_arg = %d\n", VAR_4->convert_arg);

 if (VAR_4->start_arg) {
  *VAR_5 = (VAR_4->start_arg * 33) / 1000;
  VAR_8 = (VAR_4->start_arg * 33) % 1000;

  if (VAR_4->flags & VAR_0) {
   if (VAR_8 > 33)
    (*VAR_5)++;
  } else if (VAR_4->flags & VAR_1) {
   if (VAR_8)
    (*VAR_5)++;
  }
 }

 if (VAR_4->scan_begin_arg) {
  *VAR_6 = (VAR_4->scan_begin_arg * 33) / 1000;
  VAR_8 = (VAR_4->scan_begin_arg * 33) % 1000;

  if (VAR_4->flags & VAR_0) {
   if (VAR_8 > 33)
    (*VAR_6)++;
  } else if (VAR_4->flags & VAR_1) {
   if (VAR_8)
    (*VAR_6)++;
  }
 }

 if (VAR_4->convert_arg) {
  *VAR_7 = (VAR_4->convert_arg * 33) / 1000;
  VAR_8 = (VAR_4->convert_arg * 33) % 1000;

  if (VAR_4->flags & VAR_0) {
   if (VAR_8 > 33)
    (*VAR_7)++;
  } else if (VAR_4->flags & VAR_1) {
   if (VAR_8)
    (*VAR_7)++;
  }
 }

 FUNC_1("ai_round_cmd_args(): init_ticks = %d\n", *VAR_5);
 FUNC_1("ai_round_cmd_args(): scan_ticks = %d\n", *VAR_6);
 FUNC_1("ai_round_cmd_args(): chan_ticks = %d\n", *VAR_7);

 return 0;
}
