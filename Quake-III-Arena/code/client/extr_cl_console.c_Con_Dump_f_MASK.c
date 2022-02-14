
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fileHandle_t ;
struct TYPE_2__ {int current; int totallines; short* text; int linewidth; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

void FUNC_8 (void)
{
 int VAR_1, VAR_2, VAR_3;
 short *VAR_4;
 fileHandle_t VAR_5;
 char VAR_6[1024];

 if (FUNC_0() != 2)
 {
  FUNC_2 ("usage: condump <filename>\n");
  return;
 }

 FUNC_2 ("Dumped console text to %s.\n", FUNC_1(1) );

 VAR_5 = FUNC_4( FUNC_1( 1 ) );
 if (!VAR_5)
 {
  FUNC_2 ("ERROR: couldn't open.\n");
  return;
 }


 for (VAR_1 = VAR_0.current - VAR_0.totallines + 1 ; VAR_1 <= VAR_0.current ; VAR_1++)
 {
  VAR_4 = VAR_0.text + (VAR_1%VAR_0.totallines)*VAR_0.linewidth;
  for (VAR_2=0 ; VAR_2<VAR_0.linewidth ; VAR_2++)
   if ((VAR_4[VAR_2] & 0xff) != ' ')
    break;
  if (VAR_2 != VAR_0.linewidth)
   break;
 }


 VAR_6[VAR_0.linewidth] = 0;
 for ( ; VAR_1 <= VAR_0.current ; VAR_1++)
 {
  VAR_4 = VAR_0.text + (VAR_1%VAR_0.totallines)*VAR_0.linewidth;
  for(VAR_3=0; VAR_3<VAR_0.linewidth; VAR_3++)
   VAR_6[VAR_3] = VAR_4[VAR_3] & 0xff;
  for (VAR_2=VAR_0.linewidth-1 ; VAR_2>=0 ; VAR_2--)
  {
   if (VAR_6[VAR_2] == ' ')
    VAR_6[VAR_2] = 0;
   else
    break;
  }
  FUNC_6( VAR_6, "\n" );
  FUNC_5(VAR_6, FUNC_7(VAR_6), VAR_5);
 }

 FUNC_3( VAR_5 );
}
