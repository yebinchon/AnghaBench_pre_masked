
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,int*,int) ;
 int VAR_3 ;
 int* VAR_4 ;

void FUNC_3 (void)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;
 long *VAR_11, *VAR_12;
 byte *VAR_13;
 int VAR_14;
 byte VAR_15[VAR_0/8];

 FUNC_1 ("Building PHS...\n");

 VAR_14 = 0;
 for (VAR_5=0 ; VAR_5<VAR_3 ; VAR_5++)
 {
  VAR_13 = VAR_4 + VAR_5*VAR_1;
  FUNC_2 (VAR_15, VAR_13, VAR_1);
  for (VAR_6=0 ; VAR_6<VAR_1 ; VAR_6++)
  {
   VAR_10 = VAR_13[VAR_6];
   if (!VAR_10)
    continue;
   for (VAR_7=0 ; VAR_7<8 ; VAR_7++)
   {
    if (! (VAR_10 & (1<<VAR_7)) )
     continue;

    VAR_9 = ((VAR_6<<3)+VAR_7);
    if (VAR_9 >= VAR_3)
     FUNC_0 ("Bad bit in PVS");
    VAR_12 = (long *)(VAR_4 + VAR_9*VAR_1);
    VAR_11 = (long *)VAR_15;
    for (VAR_8=0 ; VAR_8<VAR_2 ; VAR_8++)
     ((long *)VAR_15)[VAR_8] |= VAR_12[VAR_8];
   }
  }
  for (VAR_6=0 ; VAR_6<VAR_3 ; VAR_6++)
   if (VAR_15[VAR_6>>3] & (1<<(VAR_6&7)) )
    VAR_14++;


 }

 FUNC_1 ("Average clusters hearable: %i\n", VAR_14/VAR_3);
}
