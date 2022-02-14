
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,int,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_1(u8 VAR_9, u8 VAR_10)
{
 FUNC_0(VAR_8, "IRQ 0x%02x (IREN 0x%02x) :%s%s%s%s%s%s%s%s%s",
  VAR_9, VAR_10,
  VAR_9 & VAR_2 ? " RDR" : "",
  VAR_9 & VAR_4 ? " RTR" : "",
  VAR_9 & VAR_1 ? " PE" : "",
  VAR_9 & VAR_3 ? " RFO" : "",
  VAR_9 & VAR_5 ? " TE" : "",
  VAR_9 & VAR_7 ? " TTR" : "",
  VAR_9 & VAR_6 ? " TFU" : "",
  VAR_9 & VAR_0 ? " GH" : "",
  VAR_9 & ~(VAR_2 | VAR_4 | VAR_1 |
      VAR_3 | VAR_5 | VAR_7 |
      VAR_6 | VAR_0) ? " ?" : "");
}
