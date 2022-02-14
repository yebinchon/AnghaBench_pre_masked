
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int host_lock; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 int VAR_0 ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char,int ) ;
 int FUNC_5 (unsigned long,int ) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct Scsi_Host *VAR_1, unsigned long VAR_2,
        unsigned char VAR_3)
{
 unsigned long VAR_4;

 while (1) {
  FUNC_6(VAR_1->host_lock, VAR_4);
  if (!(FUNC_3(FUNC_2(VAR_1)) & VAR_0))
   break;
  FUNC_7(VAR_1->host_lock, VAR_4);
 }

 FUNC_5(VAR_2, FUNC_1(VAR_1));
 FUNC_4(VAR_3, FUNC_0(VAR_1));
 FUNC_7(VAR_1->host_lock, VAR_4);
}
