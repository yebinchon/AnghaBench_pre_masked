
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int soundLength; size_t soundCompressionMethod; size_t inMemory; int soundName; } ;
typedef TYPE_1__ sfx_t ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;

void FUNC_3( void ) {
 int VAR_2;
 sfx_t *VAR_3;
 int VAR_4, VAR_5;
 char VAR_6[4][16];
 char VAR_7[2][16];

 FUNC_2(VAR_6[0], "16bit");
 FUNC_2(VAR_6[1], "adpcm");
 FUNC_2(VAR_6[2], "daub4");
 FUNC_2(VAR_6[3], "mulaw");
 FUNC_2(VAR_7[0], "paged out");
 FUNC_2(VAR_7[1], "resident ");
 VAR_5 = 0;
 for (VAR_3=VAR_0, VAR_2=0 ; VAR_2<VAR_1 ; VAR_2++, VAR_3++) {
  VAR_4 = VAR_3->soundLength;
  VAR_5 += VAR_4;
  FUNC_0("%6i[%s] : %s[%s]\n", VAR_4, VAR_6[VAR_3->soundCompressionMethod], VAR_3->soundName, VAR_7[VAR_3->inMemory] );
 }
 FUNC_0 ("Total resident: %i\n", VAR_5);
 FUNC_1();
}
