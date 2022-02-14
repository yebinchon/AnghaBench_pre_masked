
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int wpstat; int connected; } ;
struct TYPE_3__ {int rd_data_reg_sel; unsigned char wd_data; } ;


 int FUNC_0 (char*) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int,int *) ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7( unsigned long VAR_8 )
{
 static int VAR_9 = 0;

 unsigned long VAR_10;
 unsigned char VAR_11;
 int VAR_12;

 if (++VAR_9 > 1 || !VAR_5.connected)
  VAR_9 = 0;


 FUNC_3(VAR_10);

 if (!FUNC_6()) {
  VAR_7.rd_data_reg_sel = 14;
  VAR_11 = VAR_7.rd_data_reg_sel;
  VAR_7.wd_data = (VAR_11 | VAR_2) &
                  ~(VAR_9 == 0 ? VAR_0 : VAR_1);
  VAR_12 = !!(FUNC_1( VAR_3 ) & VAR_4);
  VAR_7.wd_data = VAR_11;

  if (VAR_12 != VAR_5.wpstat) {
   FUNC_0(( "wpstat[%d] = %d\n", VAR_9, VAR_12 ));
   VAR_5.wpstat = VAR_12;
   FUNC_4 (VAR_9, &VAR_6);
  }
 }
 FUNC_2(VAR_10);

 FUNC_5();
}
