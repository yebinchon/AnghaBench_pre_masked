
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {int chanlist_len; int scan_end_arg; int stop_arg; int scan_end_src; int stop_src; int convert_arg; int scan_begin_arg; int start_arg; int convert_src; int scan_begin_src; int start_src; } ;


 int FUNC_0 (char*,int,int ,int ,...) ;

__attribute__((used)) static void FUNC_1(int VAR_0, struct comedi_cmd *VAR_1)
{
 FUNC_0("pcl816 e=%d startsrc=%x scansrc=%x convsrc=%x\n", VAR_0,
        VAR_1->start_src, VAR_1->scan_begin_src, VAR_1->convert_src);
 FUNC_0("pcl816 e=%d startarg=%d scanarg=%d convarg=%d\n", VAR_0,
        VAR_1->start_arg, VAR_1->scan_begin_arg, VAR_1->convert_arg);
 FUNC_0("pcl816 e=%d stopsrc=%x scanend=%x\n", VAR_0, VAR_1->stop_src,
        VAR_1->scan_end_src);
 FUNC_0("pcl816 e=%d stoparg=%d scanendarg=%d chanlistlen=%d\n", VAR_0,
        VAR_1->stop_arg, VAR_1->scan_end_arg, VAR_1->chanlist_len);
}
