
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {scalar_t__ lbpme; int lbpvpd; unsigned char lbpu; unsigned char lbpws; unsigned char lbpws10; int device; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int const,int ) ;
 scalar_t__ FUNC_2 (int ,int,unsigned char*,int const) ;

__attribute__((used)) static void FUNC_3(struct scsi_disk *VAR_1)
{
 unsigned char *VAR_2;
 const int VAR_3 = 8;

 if (VAR_1->lbpme == 0)
  return;

 VAR_2 = FUNC_1(VAR_3, VAR_0);

 if (!VAR_2 || FUNC_2(VAR_1->device, 0xb2, VAR_2, VAR_3))
  goto out;

 VAR_1->lbpvpd = 1;
 VAR_1->lbpu = (VAR_2[5] >> 7) & 1;
 VAR_1->lbpws = (VAR_2[5] >> 6) & 1;
 VAR_1->lbpws10 = (VAR_2[5] >> 5) & 1;

 out:
 FUNC_0(VAR_2);
}
