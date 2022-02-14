
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; int scan_begin_arg; int convert_arg; int scan_end_arg; int chanlist_len; int stop_arg; int flags; } ;
struct TYPE_2__ {int ai_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int*,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_5,
      struct comedi_subdevice *VAR_6, struct comedi_cmd *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9;



 VAR_9 = VAR_7->start_src;
 VAR_7->start_src &= VAR_1;
 if (!VAR_7->start_src || VAR_9 != VAR_7->start_src)
  VAR_8++;

 VAR_9 = VAR_7->scan_begin_src;
 VAR_7->scan_begin_src &= VAR_3;
 if (!VAR_7->scan_begin_src || VAR_9 != VAR_7->scan_begin_src)
  VAR_8++;

 VAR_9 = VAR_7->convert_src;
 VAR_7->convert_src &= VAR_3;
 if (!VAR_7->convert_src || VAR_9 != VAR_7->convert_src)
  VAR_8++;

 VAR_9 = VAR_7->scan_end_src;
 VAR_7->scan_end_src &= VAR_0;
 if (!VAR_7->scan_end_src || VAR_9 != VAR_7->scan_end_src)
  VAR_8++;

 VAR_9 = VAR_7->stop_src;
 VAR_7->stop_src &= VAR_0;
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

 if (VAR_7->scan_begin_src == VAR_3) {
  if (VAR_7->scan_begin_arg < VAR_4->ai_speed) {
   VAR_7->scan_begin_arg = VAR_4->ai_speed;
   VAR_8++;
  }
  if (VAR_7->scan_begin_arg > 100 * 16 * 65535) {
   VAR_7->scan_begin_arg = 100 * 16 * 65535;
   VAR_8++;
  }
 } else {

 }
 if (VAR_7->convert_src == VAR_3) {
  if (VAR_7->convert_arg < VAR_4->ai_speed) {
   VAR_7->convert_arg = VAR_4->ai_speed;
   VAR_8++;
  }
  if (VAR_7->convert_arg > 50 * 16 * 65535) {
   VAR_7->convert_arg = 50 * 16 * 65535;
   VAR_8++;
  }
 } else {

 }

 if (VAR_7->scan_end_arg != VAR_7->chanlist_len) {
  VAR_7->scan_end_arg = VAR_7->chanlist_len;
  VAR_8++;
 }
 if (VAR_7->stop_src == VAR_0) {
  if (VAR_7->stop_arg > 0x00ffffff) {
   VAR_7->stop_arg = 0x00ffffff;
   VAR_8++;
  }
 } else {

  if (VAR_7->stop_arg != 0) {
   VAR_7->stop_arg = 0;
   VAR_8++;
  }
 }

 if (VAR_8)
  return 3;



 if (VAR_7->scan_begin_src == VAR_3) {
  VAR_9 = VAR_7->scan_begin_arg;
  FUNC_0(100, &VAR_7->scan_begin_arg,
     VAR_7->flags & VAR_2);
  if (VAR_9 != VAR_7->scan_begin_arg)
   VAR_8++;
 } else {

 }
 if (VAR_7->convert_src == VAR_3) {
  VAR_9 = VAR_7->convert_arg;
  FUNC_0(50, &VAR_7->convert_arg,
     VAR_7->flags & VAR_2);
  if (VAR_9 != VAR_7->convert_arg)
   VAR_8++;
  if (VAR_7->scan_begin_src == VAR_3 &&
      VAR_7->scan_begin_arg <
      VAR_7->convert_arg * VAR_7->scan_end_arg) {
   VAR_7->scan_begin_arg =
       VAR_7->convert_arg * VAR_7->scan_end_arg;
   VAR_8++;
  }
 } else {

 }

 if (VAR_8)
  return 4;

 return 0;
}
