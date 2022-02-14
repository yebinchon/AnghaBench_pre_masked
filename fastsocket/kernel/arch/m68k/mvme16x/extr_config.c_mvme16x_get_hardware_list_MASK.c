
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
typedef TYPE_1__* p_bdid ;
struct TYPE_3__ {int brdno; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (struct seq_file*,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_5)
{
    p_bdid VAR_6 = &VAR_4;

    if (VAR_6->brdno == 0x0162 || VAR_6->brdno == 0x0172)
    {
 unsigned char VAR_7 = *(unsigned char *)VAR_0;

 FUNC_0 (VAR_5, "VMEchip2        %spresent\n",
   VAR_7 & VAR_3 ? "NOT " : "");
 FUNC_0 (VAR_5, "SCSI interface  %spresent\n",
   VAR_7 & VAR_2 ? "NOT " : "");
 FUNC_0 (VAR_5, "Ethernet i/f    %spresent\n",
   VAR_7 & VAR_1 ? "NOT " : "");
    }
}
