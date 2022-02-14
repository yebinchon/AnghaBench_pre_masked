
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rd_data_reg_sel; int wd_data; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2( int VAR_1 )
{
 unsigned long VAR_2;


 FUNC_1(VAR_2);

 VAR_0.rd_data_reg_sel = 14;
 VAR_0.wd_data = (VAR_1 == 0) ? VAR_0.rd_data_reg_sel | 0x01 :
                                  VAR_0.rd_data_reg_sel & 0xfe;

 FUNC_0(VAR_2);
}
