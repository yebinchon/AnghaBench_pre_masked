
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int counter_index; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; unsigned int scan_begin_arg; scalar_t__ convert_src; unsigned int convert_arg; int flags; } ;
struct comedi_async {struct comedi_cmd cmd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ni_gpct*,int ,int ,int ) ;
 int FUNC_3 (struct ni_gpct*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct ni_gpct *VAR_2, struct comedi_async *VAR_3)
{
 struct comedi_cmd *VAR_4 = &VAR_3->cmd;
 int VAR_5 = 0;
 unsigned VAR_6;
 int VAR_7 = 0;

 if (VAR_4->scan_begin_src == VAR_0) {
  VAR_5 = 1;
  VAR_6 = VAR_4->scan_begin_arg;
 } else if (VAR_4->convert_src == VAR_0) {
  VAR_5 = 1;
  VAR_6 = VAR_4->convert_arg;
 }
 if (VAR_5) {
  VAR_7 = FUNC_3(VAR_2, 0, VAR_6);
 }
 if (VAR_4->flags & VAR_1) {
  FUNC_2(VAR_2,
    FUNC_1(VAR_2->
             counter_index),
    FUNC_0(VAR_2->
            counter_index),
    FUNC_0(VAR_2->
            counter_index));
 }
 return VAR_7;
}
