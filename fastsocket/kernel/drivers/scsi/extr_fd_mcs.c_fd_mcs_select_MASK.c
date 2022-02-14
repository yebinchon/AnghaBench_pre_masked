
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct Scsi_Host *VAR_6, int VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;

 FUNC_2(0x82, VAR_1);
 FUNC_2(VAR_5 | (1 << VAR_7), VAR_2);


 FUNC_2(VAR_0, VAR_4);

 VAR_9 = 350;


 do {
  VAR_8 = FUNC_1(VAR_3);
  if (VAR_8 & 1) {

   FUNC_2(0x80, VAR_1);
   return 0;
  }
  FUNC_4(1000);
 } while (--VAR_9);


 FUNC_0(VAR_6);
 return 1;
}
