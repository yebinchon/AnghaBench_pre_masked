
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; scalar_t__ start_arg; scalar_t__ scan_begin_arg; scalar_t__ convert_arg; int scan_end_arg; scalar_t__ stop_arg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_5,
          struct comedi_subdevice *VAR_6,
          struct comedi_cmd *VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9;



 VAR_9 = VAR_7->start_src;
 VAR_7->start_src &= VAR_4;
 if (!VAR_7->start_src || VAR_9 != VAR_7->start_src)
  VAR_8++;

 VAR_9 = VAR_7->scan_begin_src;
 VAR_7->scan_begin_src &= VAR_1;
 if (!VAR_7->scan_begin_src || VAR_9 != VAR_7->scan_begin_src)
  VAR_8++;

 VAR_9 = VAR_7->convert_src;
 VAR_7->convert_src &= VAR_2;
 if (!VAR_7->convert_src || VAR_9 != VAR_7->convert_src)
  VAR_8++;

 VAR_9 = VAR_7->scan_end_src;
 VAR_7->scan_end_src &= VAR_0;
 if (!VAR_7->scan_end_src || VAR_9 != VAR_7->scan_end_src)
  VAR_8++;

 VAR_9 = VAR_7->stop_src;
 VAR_7->stop_src &= VAR_3;
 if (!VAR_7->stop_src || VAR_9 != VAR_7->stop_src)
  VAR_8++;

 if (VAR_8)
  return 1;



 if (VAR_8)
  return 2;



 if (VAR_7->start_arg != 0) {
  VAR_7->start_arg = 0;
  VAR_8++;
 }
 if (VAR_7->scan_begin_arg != 0) {
  VAR_7->scan_begin_arg = 0;
  VAR_8++;
 }
 if (VAR_7->convert_arg != 0) {
  VAR_7->convert_arg = 0;
  VAR_8++;
 }
 if (VAR_7->scan_end_arg != 1) {
  VAR_7->scan_end_arg = 1;
  VAR_8++;
 }
 if (VAR_7->stop_arg != 0) {
  VAR_7->stop_arg = 0;
  VAR_8++;
 }

 if (VAR_8)
  return 3;



 if (VAR_8)
  return 4;

 return 0;
}
