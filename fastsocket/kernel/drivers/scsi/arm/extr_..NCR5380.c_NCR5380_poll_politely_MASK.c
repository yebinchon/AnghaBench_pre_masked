
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct Scsi_Host *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 FUNC_0();
 int VAR_7 = 500;
 unsigned long VAR_8 = VAR_1 + VAR_6;
 int VAR_9;

 FUNC_2(VAR_2);

 while( VAR_7-- > 0)
 {
  VAR_9 = FUNC_1(VAR_3);
  if((VAR_9 & VAR_4) == VAR_5)
   return 0;
  FUNC_4();
 }


 while(FUNC_6(VAR_1, VAR_8))
 {
  VAR_9 = FUNC_1(VAR_3);
  if((VAR_9 & VAR_4) == VAR_5)
   return 0;
  if(!FUNC_5())
   FUNC_3();
  else
   FUNC_4();
 }
 return -VAR_0;
}
