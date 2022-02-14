
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {unsigned char (* read_isac ) (struct isac*,int ) ;int (* write_isac ) (struct isac*,int ,int ) ;} ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int FUNC_1 (struct isac*,int) ;
 int FUNC_2 (struct isac*) ;
 int FUNC_3 (struct isac*) ;
 int FUNC_4 (struct isac*) ;
 unsigned char FUNC_5 (struct isac*,int ) ;
 int FUNC_6 (struct isac*,int ,int ) ;

__attribute__((used)) static inline void FUNC_7(struct isac *VAR_11)
{
 unsigned char VAR_12;

 VAR_12 = VAR_11->read_isac(VAR_11, VAR_4);
 FUNC_0(VAR_0, "ISTAD %#x", VAR_12);
 if (VAR_12 & VAR_8) {
  FUNC_0(VAR_1, "ISTAD XDU");
  FUNC_2(VAR_11);
 }
 if (VAR_12 & VAR_9) {
  FUNC_0(VAR_1, "ISTAD XMR");
  FUNC_2(VAR_11);
 }
 if (VAR_12 & VAR_10) {
  FUNC_0(VAR_0, "ISTAD XPR");
  FUNC_4(VAR_11);
 }
 if (VAR_12 & VAR_5) {
  FUNC_0(VAR_1, "ISTAD RFO");
  VAR_11->write_isac(VAR_11, VAR_2, VAR_3);
 }
 if (VAR_12 & VAR_6) {
  FUNC_0(VAR_0, "ISTAD RME");
  FUNC_3(VAR_11);
 }
 if (VAR_12 & VAR_7) {
  FUNC_0(VAR_0, "ISTAD RPF");
  FUNC_1(VAR_11, 0x20);
 }
}
