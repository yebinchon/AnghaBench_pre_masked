
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; scalar_t__ scan_begin_arg; scalar_t__ convert_arg; int scan_end_arg; scalar_t__ stop_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_4,
    struct comedi_subdevice *VAR_5,
    struct comedi_cmd *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;



 VAR_8 = VAR_6->start_src;
 VAR_6->start_src &= VAR_2;
 if (!VAR_6->start_src || VAR_8 != VAR_6->start_src)
  VAR_7++;

 VAR_8 = VAR_6->scan_begin_src;
 VAR_6->scan_begin_src &= VAR_3;
 if (!VAR_6->scan_begin_src || VAR_8 != VAR_6->scan_begin_src)
  VAR_7++;

 VAR_8 = VAR_6->convert_src;
 VAR_6->convert_src &= VAR_1;
 if (!VAR_6->convert_src || VAR_8 != VAR_6->convert_src)
  VAR_7++;

 VAR_8 = VAR_6->scan_end_src;
 VAR_6->scan_end_src &= VAR_0;
 if (!VAR_6->scan_end_src || VAR_8 != VAR_6->scan_end_src)
  VAR_7++;

 VAR_8 = VAR_6->stop_src;
 VAR_6->stop_src &= VAR_0;
 if (!VAR_6->stop_src || VAR_8 != VAR_6->stop_src)
  VAR_7++;

 if (VAR_7)
  return 1;



 if (VAR_7)
  return 2;



 if (VAR_6->start_arg != 0) {
  VAR_6->start_arg = 0;
  VAR_7++;
 }
 if (VAR_6->scan_begin_arg != 0) {
  VAR_6->scan_begin_arg = 0;
  VAR_7++;
 }
 if (VAR_6->convert_arg != 0) {
  VAR_6->convert_arg = 0;
  VAR_7++;
 }

 if (VAR_6->scan_end_arg != 1) {
  VAR_6->scan_end_arg = 1;
  VAR_7++;
 }
 if (VAR_6->stop_arg != 0) {
  VAR_6->stop_arg = 0;
  VAR_7++;
 }

 if (VAR_7)
  return 3;



 if (VAR_7)
  return 4;

 return 0;
}
