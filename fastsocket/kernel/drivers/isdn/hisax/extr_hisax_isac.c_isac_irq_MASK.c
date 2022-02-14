
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {unsigned char (* read_isac ) (struct isac*,int ) ;int (* write_isac ) (struct isac*,int ,int) ;} ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct isac*) ;
 int FUNC_2 (struct isac*,int) ;
 int FUNC_3 (struct isac*) ;
 int FUNC_4 (struct isac*) ;
 int FUNC_5 (struct isac*) ;
 unsigned char FUNC_6 (struct isac*,int ) ;
 int FUNC_7 (struct isac*,int ,int) ;
 int FUNC_8 (struct isac*,int ,int) ;

void FUNC_9(struct isac *VAR_11)
{
 unsigned char VAR_12;

 VAR_12 = VAR_11->read_isac(VAR_11, VAR_2);
 FUNC_0(VAR_0, "ISTA %#x", VAR_12);

 if (VAR_12 & VAR_4) {
  FUNC_0(VAR_0, "EXI");
  FUNC_3(VAR_11);
 }
 if (VAR_12 & VAR_9) {
  FUNC_0(VAR_0, "XPR");
  FUNC_5(VAR_11);
 }
 if (VAR_12 & VAR_5) {
  FUNC_0(VAR_0, "RME");
  FUNC_4(VAR_11);
 }
 if (VAR_12 & VAR_6) {
  FUNC_0(VAR_0, "RPF");
  FUNC_2(VAR_11, 0x20);
 }
 if (VAR_12 & VAR_3) {
  FUNC_0(VAR_0, "CISQ");
  FUNC_1(VAR_11);
 }
 if (VAR_12 & VAR_7) {
  FUNC_0(VAR_1, "RSC");
 }
 if (VAR_12 & VAR_8) {
  FUNC_0(VAR_1, "SIN");
 }
 VAR_11->write_isac(VAR_11, VAR_10, 0xff);
 VAR_11->write_isac(VAR_11, VAR_10, 0x00);
}
