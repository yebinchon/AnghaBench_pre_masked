
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e100_serial {unsigned char* ioport; int line; int forced_eop; } ;
struct TYPE_2__ {int timeout_flush_cnt; } ;


 int FUNC_0 (int,char*,unsigned char) ;
 int FUNC_1 (struct e100_serial*) ;
 int FUNC_2 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_3 (struct e100_serial*,char*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_5(struct e100_serial *VAR_5)
{



 unsigned char VAR_6 = VAR_5->ioport[VAR_1];


 if (VAR_6 & VAR_3) {





  FUNC_0(VAR_5->line, "timeout err: rstat 0x%03X\n",
            VAR_6 | (VAR_5->line << 8));
  return 0;
 }

 if (VAR_6 & VAR_2) {

  FUNC_4(FUNC_0(VAR_5->line, "timeout: rstat 0x%03X\n",
            VAR_6 | (VAR_5->line << 8)));

  (void)VAR_5->ioport[VAR_0];

  VAR_5->forced_eop = 0;
  FUNC_3(VAR_5, "magic");
  return 0;
 }




 if (!VAR_5->forced_eop) {
  VAR_5->forced_eop = 1;
  FUNC_2(VAR_4[VAR_5->line].timeout_flush_cnt++);
  FUNC_4(FUNC_0(VAR_5->line, "timeout EOP %i\n", VAR_5->line));
  FUNC_1(VAR_5);
 }

 return 1;
}
