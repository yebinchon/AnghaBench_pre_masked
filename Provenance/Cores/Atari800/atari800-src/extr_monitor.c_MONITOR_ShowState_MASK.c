
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int,int,int,int,int,char,char,char,char,char,char) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(FILE *VAR_5, UWORD VAR_6, UBYTE VAR_7, UBYTE VAR_8, UBYTE VAR_9, UBYTE VAR_10,
                char VAR_11, char VAR_12, char VAR_13, char VAR_14)
{
 FUNC_0(VAR_5, "%3d %3d A=%02X X=%02X Y=%02X S=%02X P=%c%c*-%c%c%c%c PC=",
  VAR_1, VAR_0, VAR_7, VAR_8, VAR_9, VAR_10,
  VAR_11, VAR_12, (VAR_4 & VAR_2) ? 'D' : '-', (VAR_4 & VAR_3) ? 'I' : '-', VAR_13, VAR_14);
 FUNC_1(VAR_5, VAR_6);
}
