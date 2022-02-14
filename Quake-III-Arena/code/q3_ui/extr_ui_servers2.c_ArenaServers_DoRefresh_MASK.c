
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ refreshtime; scalar_t__ nextpingtime; size_t numqueriedservers; size_t numfavoriteaddresses; size_t currentping; char** favoriteaddresses; TYPE_1__* pinglist; } ;
struct TYPE_5__ {scalar_t__ realtime; } ;
struct TYPE_4__ {char* adrstr; int start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,char*) ;
 TYPE_3__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*,int,int*) ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__,size_t,char*,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 TYPE_2__ VAR_8 ;
 int FUNC_13 (char*,char*) ;

__attribute__((used)) static void FUNC_14( void )
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 char VAR_13[VAR_3];
 char VAR_14[VAR_4];

 if (VAR_8.realtime < VAR_6.refreshtime)
 {
   if (VAR_7 != VAR_0) {
   if (VAR_7 == VAR_1) {
    if (!FUNC_12(VAR_7)) {
     return;
    }
   }
   if (FUNC_12(VAR_7) < 0) {

     return;
   }
   }
 }

 if (VAR_8.realtime < VAR_6.nextpingtime)
 {

  return;
 }


 VAR_6.nextpingtime = VAR_8.realtime + 10;


 VAR_12 = FUNC_1();
 for (VAR_9=0; VAR_9<VAR_5; VAR_9++)
 {
  FUNC_8( VAR_9, VAR_13, VAR_3, &VAR_11 );
  if (!VAR_13[0])
  {

   continue;
  }


  for (VAR_10=0; VAR_10<VAR_5; VAR_10++)
   if (!FUNC_4( VAR_13, VAR_6.pinglist[VAR_10].adrstr ))
    break;

  if (VAR_10 < VAR_5)
  {

   if (!VAR_11)
   {
    VAR_11 = VAR_8.realtime - VAR_6.pinglist[VAR_10].start;
    if (VAR_11 < VAR_12)
    {

     continue;
    }
   }

   if (VAR_11 > VAR_12)
   {

    VAR_14[0] = '\0';
    VAR_11 = VAR_12;
   }
   else
   {
    FUNC_9( VAR_9, VAR_14, VAR_4 );
   }


   FUNC_0( VAR_13, VAR_14, VAR_11 );


   VAR_6.pinglist[VAR_10].adrstr[0] = '\0';
     }


  FUNC_7( VAR_9 );
 }



 if (VAR_7 == VAR_0) {
   VAR_6.numqueriedservers = VAR_6.numfavoriteaddresses;
 } else {
   VAR_6.numqueriedservers = FUNC_12(VAR_7);
 }






 for (VAR_9=0; VAR_9<VAR_5 && VAR_6.currentping < VAR_6.numqueriedservers; VAR_9++)
 {
  if (FUNC_10() >= VAR_5)
  {

   break;
  }


  for (VAR_10=0; VAR_10<VAR_5; VAR_10++)
   if (!VAR_6.pinglist[VAR_10].adrstr[0])
    break;

  if (VAR_10 >= VAR_5)

   break;



  if (VAR_7 == VAR_0) {
    FUNC_5( VAR_13, VAR_6.favoriteaddresses[VAR_6.currentping] );
  } else {
    FUNC_11(VAR_7, VAR_6.currentping, VAR_13, VAR_3 );
  }

  FUNC_5( VAR_6.pinglist[VAR_10].adrstr, VAR_13 );
  VAR_6.pinglist[VAR_10].start = VAR_8.realtime;

  FUNC_6( VAR_2, FUNC_13( "ping %s\n", VAR_13 ) );


  VAR_6.currentping++;
 }

 if (!FUNC_10())
 {

  FUNC_2();
  return;
 }


 FUNC_3();
}
