
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int track; } ;
struct TYPE_7__ {int fdc_speed; } ;
struct TYPE_6__ {int fdc_speed; } ;
struct TYPE_5__ {int rd_data_reg_sel; unsigned char wd_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 TYPE_1__ VAR_10 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5( int VAR_11 )
{
 unsigned long VAR_12;
 unsigned char VAR_13;

 if (VAR_11 == VAR_5)
   return;


 FUNC_3(VAR_12);
 VAR_10.rd_data_reg_sel = 14;
 VAR_13 = VAR_10.rd_data_reg_sel;
 VAR_10.wd_data = (VAR_13 | VAR_2) & ~(VAR_11 == 0 ? VAR_0 : VAR_1);
 VAR_8 = 1;
 FUNC_2(VAR_12);


 FUNC_1( VAR_3, VAR_6.track );
 FUNC_4(25);


 if (VAR_7)
  if (FUNC_0(VAR_4))
   VAR_9.fdc_speed = VAR_7->fdc_speed;

 VAR_5 = VAR_11;
}
