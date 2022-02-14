
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,int,int,int,int,int,...) ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1("DMACTL=%02X    CHACTL=%02X    DLISTL=%02X    "
     "DLISTH=%02X    HSCROL=%02X    VSCROL=%02X\n",
     VAR_2, VAR_0, VAR_8 & 0xff, VAR_8 >> 8, VAR_3, VAR_7);
 FUNC_1("PMBASE=%02X    CHBASE=%02X    VCOUNT=%02X    "
     "NMIEN= %02X    ypos=%4d\n",
     VAR_6, VAR_1, FUNC_0(VAR_5, VAR_10), VAR_4, VAR_9);
}
