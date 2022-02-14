
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_iso_recv {int ohci; } ;
struct hpsb_iso {struct ohci_iso_recv* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct hpsb_iso *VAR_5, unsigned char VAR_6, int VAR_7)
{
 struct ohci_iso_recv *VAR_8 = VAR_5->hostdata;
 int VAR_9, VAR_10;

 if (VAR_6 < 32) {
  VAR_9 = VAR_7 ? VAR_3 : VAR_2;
  VAR_10 = VAR_6;
 } else {
  VAR_9 = VAR_7 ? VAR_1 : VAR_0;
  VAR_10 = VAR_6 - 32;
 }

 FUNC_2(VAR_8->ohci, VAR_9, (1 << VAR_10));


 FUNC_0();
 FUNC_1(VAR_8->ohci, VAR_4);
}
