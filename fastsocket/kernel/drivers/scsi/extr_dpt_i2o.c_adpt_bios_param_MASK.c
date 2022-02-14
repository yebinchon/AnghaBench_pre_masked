
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int type; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_0, struct block_device *VAR_1,
  sector_t VAR_2, int VAR_3[])
{
 int VAR_4=-1;
 int VAR_5=-1;
 int VAR_6=-1;




 if (VAR_2 < 0x2000 ) {
  VAR_4 = 18;
  VAR_5 = 2;
 }

 else if (VAR_2 < 0x20000) {
  VAR_4 = 64;
  VAR_5 = 32;
 }

 else if (VAR_2 < 0x40000) {
  VAR_4 = 65;
  VAR_5 = 63;
 }

 else if (VAR_2 < 0x80000) {
  VAR_4 = 128;
  VAR_5 = 63;
 }

 else {
  VAR_4 = 255;
  VAR_5 = 63;
 }
 VAR_6 = FUNC_1(VAR_2, VAR_4 * VAR_5);


 if(VAR_0->type == 5) {
  VAR_4 = 252;
  VAR_5 = 63;
  VAR_6 = 1111;
 }

 VAR_3[0] = VAR_4;
 VAR_3[1] = VAR_5;
 VAR_3[2] = VAR_6;

 FUNC_0("adpt_bios_param: exit\n");
 return 0;
}
