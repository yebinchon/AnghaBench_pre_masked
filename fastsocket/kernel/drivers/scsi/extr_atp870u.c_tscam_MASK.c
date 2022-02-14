
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atp_unit {int* ioport; int scam_on; unsigned short* host_id; int chip_ver; } ;
struct Scsi_Host {int hostdata; } ;


 int FUNC_0 () ;
 unsigned char FUNC_1 (struct atp_unit*,unsigned short*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (unsigned short,unsigned int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct Scsi_Host *VAR_0)
{

 unsigned int VAR_1;
 unsigned char VAR_2, VAR_3, VAR_4;
 unsigned long VAR_5;
 unsigned short int VAR_6, VAR_7, VAR_8;
 unsigned char VAR_9[33], VAR_10[2];
 struct atp_unit *VAR_11 = (struct atp_unit *)&VAR_0->hostdata;
 static unsigned char VAR_12[8] = {
  0x38, 0x31, 0x32, 0x2b, 0x34, 0x2d, 0x2e, 0x27
 };
 VAR_1 = VAR_11->ioport[0] + 1;
 FUNC_5(0x08, VAR_1++);
 FUNC_5(0x7f, VAR_1);
 VAR_1 = VAR_11->ioport[0] + 0x11;
 FUNC_5(0x20, VAR_1);

 if ((VAR_11->scam_on & 0x40) == 0) {
  return;
 }
 VAR_6 = 1;
 VAR_6 <<= VAR_11->host_id[0];
 VAR_3 = 16;
 if (VAR_11->chip_ver < 4) {
  VAR_6 |= 0xff00;
  VAR_3 = 8;
 }
 VAR_7 = VAR_6;
 VAR_1 = VAR_11->ioport[0] + 0x02;
 FUNC_5(0x02, VAR_1++);
 FUNC_5(0, VAR_1++);
 FUNC_5(0, VAR_1++);
 FUNC_5(0, VAR_1++);
 FUNC_5(0, VAR_1++);
 FUNC_5(0, VAR_1++);
 FUNC_5(0, VAR_1++);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_6 = 1;
  VAR_6 = VAR_6 << VAR_2;
  if ((VAR_6 & VAR_7) != 0) {
   continue;
  }
  VAR_1 = VAR_11->ioport[0] + 0x0f;
  FUNC_5(0, VAR_1++);
  VAR_1 += 0x02;
  FUNC_5(0, VAR_1++);
  FUNC_5(0, VAR_1++);
  FUNC_5(0, VAR_1++);
  if (VAR_2 > 7) {
   VAR_4 = (VAR_2 & 0x07) | 0x40;
  } else {
   VAR_4 = VAR_2;
  }
  FUNC_5(VAR_4, VAR_1++);
  VAR_1 = VAR_11->ioport[0] + 0x1b;
  if (VAR_11->chip_ver == 4) {
   FUNC_5(0x01, VAR_1);
  } else {
   FUNC_5(0x00, VAR_1);
  }
wait_rdyok:
  VAR_1 = VAR_11->ioport[0] + 0x18;
  FUNC_5(0x09, VAR_1);
  VAR_1 += 0x07;

  while ((FUNC_2(VAR_1) & 0x80) == 0x00)
   FUNC_0();
  VAR_1 -= 0x08;
  VAR_4 = FUNC_2(VAR_1);
  if (VAR_4 != 0x16) {
   if ((VAR_4 == 0x85) || (VAR_4 == 0x42)) {
    continue;
   }
   VAR_1 = VAR_11->ioport[0] + 0x10;
   FUNC_5(0x41, VAR_1);
   goto wait_rdyok;
  }
  VAR_7 |= VAR_6;

 }
 VAR_1 = VAR_11->ioport[0] + 0x02;
 FUNC_5(0x7f, VAR_1);
 VAR_1 = VAR_11->ioport[0] + 0x1b;
 FUNC_5(0x02, VAR_1);

 FUNC_5(0, 0x80);

 VAR_8 = 0x0080;
 VAR_1 = VAR_11->ioport[0] + 0x1c;
 FUNC_6(VAR_8, VAR_1);
 VAR_8 |= 0x0040;
 FUNC_6(VAR_8, VAR_1);
 VAR_8 |= 0x0004;
 FUNC_6(VAR_8, VAR_1);
 FUNC_2(0x80);
 VAR_8 &= 0x007f;
 FUNC_6(VAR_8, VAR_1);
 FUNC_4(128);
 VAR_8 &= 0x00fb;
 FUNC_6(VAR_8, VAR_1);
wait_nomsg:
 if ((FUNC_2(VAR_1) & 0x04) != 0) {
  goto wait_nomsg;
 }
 FUNC_5(1, 0x80);
 FUNC_7(100);
 for (VAR_5 = 0; VAR_5 < 0x30000; VAR_5++) {
  if ((FUNC_2(VAR_1) & 0x80) != 0) {
   goto wait_io;
  }
 }
 goto TCM_SYNC;
wait_io:
 for (VAR_5 = 0; VAR_5 < 0x30000; VAR_5++) {
  if ((FUNC_2(VAR_1) & 0x81) == 0x0081) {
   goto wait_io1;
  }
 }
 goto TCM_SYNC;
wait_io1:
 FUNC_2(0x80);
 VAR_8 |= 0x8003;
 FUNC_6(VAR_8, VAR_1);
 FUNC_2(0x80);
 VAR_8 &= 0x00bf;
 FUNC_6(VAR_8, VAR_1);
 FUNC_5(2, 0x80);
TCM_SYNC:
 FUNC_7(0x800);
 if ((FUNC_2(VAR_1) & 0x80) == 0x00) {
  FUNC_6(0, VAR_1--);
  FUNC_5(0, VAR_1);
  VAR_1 = VAR_11->ioport[0] + 0x15;
  FUNC_5(0, VAR_1);
  VAR_1 += 0x03;
  FUNC_5(0x09, VAR_1);
  VAR_1 += 0x07;
  while ((FUNC_2(VAR_1) & 0x80) == 0)
   FUNC_0();
  VAR_1 -= 0x08;
  FUNC_2(VAR_1);
  return;
 }
 VAR_8 &= 0x00ff;
 VAR_8 |= 0x3f00;
 FUNC_1(VAR_11, &VAR_8);
 FUNC_5(3, 0x80);
 VAR_8 &= 0x00ff;
 VAR_8 |= 0x2000;
 FUNC_1(VAR_11, &VAR_8);
 FUNC_5(4, 0x80);
 VAR_2 = 8;
 VAR_3 = 0;
TCM_ID:
 if ((FUNC_3(VAR_1) & 0x2000) == 0) {
  goto TCM_ID;
 }
 FUNC_5(5, 0x80);
 VAR_8 &= 0x00ff;
 VAR_8 |= 0x2000;
 VAR_4 = FUNC_1(VAR_11, &VAR_8);
 if ((VAR_4 & 0x03) == 0) {
  goto TCM_5;
 }
 VAR_9[VAR_3] <<= 0x01;
 VAR_9[VAR_3] &= 0xfe;
 if ((VAR_4 & 0x02) != 0) {
  VAR_9[VAR_3] |= 0x01;
 }
 VAR_2--;
 if (VAR_2 > 0) {
  goto TCM_ID;
 }
 VAR_3++;
 VAR_2 = 8;
 goto TCM_ID;

TCM_5:


 VAR_2 = 15;
 VAR_3 = VAR_9[0];
 if ((VAR_3 & 0x20) != 0) {
  VAR_2 = 7;
 }
 if ((VAR_3 & 0x06) == 0) {
  goto G2Q5;
 }
 VAR_4 = VAR_9[1];
small_id:
 VAR_6 = 1;
 VAR_6 <<= VAR_4;
 if ((VAR_6 & VAR_7) == 0) {
  goto G2Q_QUIN;
 }
 if (VAR_4 > 0) {
  VAR_4--;
  goto small_id;
 }
G2Q5:
 VAR_4 = VAR_2;
G2Q_LP:
 VAR_6 = 1;
 VAR_6 <<= VAR_4;
 if ((VAR_6 & VAR_7) == 0) {
  goto G2Q_QUIN;
 }
 if (VAR_4 > 0) {
  VAR_4--;
  goto G2Q_LP;
 }
G2Q_QUIN:
 VAR_7 |= VAR_6;
 if (VAR_4 < 8) {
  VAR_10[0] = 0x38;
 } else {
  VAR_10[0] = 0x31;
 }
 VAR_4 &= 0x07;
 VAR_10[1] = VAR_12[VAR_4];

 VAR_8 &= 0x00ff;
 VAR_6 = VAR_10[0] << 8;
 VAR_8 |= VAR_6;
 FUNC_1(VAR_11, &VAR_8);
 VAR_8 &= 0x00ff;
 VAR_6 = VAR_10[1] << 8;
 VAR_8 |= VAR_6;
 FUNC_1(VAR_11, &VAR_8);

 goto TCM_SYNC;

}
