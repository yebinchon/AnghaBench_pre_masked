
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int targetName ;
typedef int gender_t ;
struct TYPE_12__ {int otherEntityNum; int otherEntityNum2; int eventParm; } ;
typedef TYPE_3__ entityState_t ;
struct TYPE_13__ {int gender; } ;
typedef TYPE_4__ clientInfo_t ;
typedef int attackerName ;
struct TYPE_17__ {char* killerName; TYPE_2__* snap; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {scalar_t__ gametype; TYPE_4__* clientinfo; } ;
struct TYPE_10__ {int clientNum; scalar_t__* persistant; } ;
struct TYPE_11__ {TYPE_1__ ps; } ;


 int VAR_0 ;
 int FUNC_0 (char*,double,int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_5 (char const*,char*) ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_6 (char*,char*,int) ;
 double VAR_9 ;
 int VAR_10 ;
 TYPE_8__ VAR_11 ;
 TYPE_7__ VAR_12 ;
 TYPE_6__ VAR_13 ;
 TYPE_5__ VAR_14 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*,char*,...) ;

__attribute__((used)) static void FUNC_10( entityState_t *VAR_15 ) {
 int VAR_16;
 int VAR_17, VAR_18;
 char *VAR_19;
 char *VAR_20;
 const char *VAR_21;
 const char *VAR_22;
 char VAR_23[32];
 char VAR_24[32];
 gender_t VAR_25;
 clientInfo_t *VAR_26;

 VAR_17 = VAR_15->otherEntityNum;
 VAR_18 = VAR_15->otherEntityNum2;
 VAR_16 = VAR_15->eventParm;

 if ( VAR_17 < 0 || VAR_17 >= VAR_6 ) {
  FUNC_2( "CG_Obituary: target out of range" );
 }
 VAR_26 = &VAR_14.clientinfo[VAR_17];

 if ( VAR_18 < 0 || VAR_18 >= VAR_6 ) {
  VAR_18 = VAR_2;
  VAR_22 = ((void*)0);
 } else {
  VAR_22 = FUNC_1( VAR_1 + VAR_18 );
 }

 VAR_21 = FUNC_1( VAR_1 + VAR_17 );
 if ( !VAR_21 ) {
  return;
 }
 FUNC_6( VAR_23, FUNC_5( VAR_21, "n" ), sizeof(VAR_23) - 2);
 FUNC_7( VAR_23, VAR_10 );

 VAR_20 = "";



 switch( VAR_16 ) {
 case 132:
  VAR_19 = "suicides";
  break;
 case 151:
  VAR_19 = "cratered";
  break;
 case 152:
  VAR_19 = "was squished";
  break;
 case 128:
  VAR_19 = "sank like a rock";
  break;
 case 133:
  VAR_19 = "melted";
  break;
 case 144:
  VAR_19 = "does a back flip into the lava";
  break;
 case 131:
  VAR_19 = "saw the light";
  break;
 case 129:
  VAR_19 = "was in the wrong place";
  break;
 default:
  VAR_19 = ((void*)0);
  break;
 }

 if (VAR_18 == VAR_17) {
  VAR_25 = VAR_26->gender;
  switch (VAR_16) {





  case 147:
   if ( VAR_25 == VAR_3 )
    VAR_19 = "tripped on her own grenade";
   else if ( VAR_25 == VAR_4 )
    VAR_19 = "tripped on its own grenade";
   else
    VAR_19 = "tripped on his own grenade";
   break;
  case 135:
   if ( VAR_25 == VAR_3 )
    VAR_19 = "blew herself up";
   else if ( VAR_25 == VAR_4 )
    VAR_19 = "blew itself up";
   else
    VAR_19 = "blew himself up";
   break;
  case 139:
   if ( VAR_25 == VAR_3 )
    VAR_19 = "melted herself";
   else if ( VAR_25 == VAR_4 )
    VAR_19 = "melted itself";
   else
    VAR_19 = "melted himself";
   break;
  case 154:
   VAR_19 = "should have used a smaller gun";
   break;
  default:
   if ( VAR_25 == VAR_3 )
    VAR_19 = "killed herself";
   else if ( VAR_25 == VAR_4 )
    VAR_19 = "killed itself";
   else
    VAR_19 = "killed himself";
   break;
  }
 }

 if (VAR_19) {
  FUNC_4( "%s %s.\n", VAR_23, VAR_19);
  return;
 }


 if ( VAR_18 == VAR_11.snap->ps.clientNum ) {
  char *VAR_27;

  if ( VAR_14.gametype < VAR_5 ) {
   VAR_27 = FUNC_9("You fragged %s\n%s place with %i", VAR_23,
    FUNC_3( VAR_11.snap->ps.persistant[VAR_7] + 1 ),
    VAR_11.snap->ps.persistant[VAR_8] );
  } else {
   VAR_27 = FUNC_9("You fragged %s", VAR_23 );
  }





  FUNC_0( VAR_27, VAR_9 * 0.30, VAR_0 );



 }


 if ( !VAR_22 ) {
  VAR_18 = VAR_2;
  FUNC_8( VAR_24, "noname" );
 } else {
  FUNC_6( VAR_24, FUNC_5( VAR_22, "n" ), sizeof(VAR_24) - 2);
  FUNC_7( VAR_24, VAR_10 );

  if ( VAR_17 == VAR_11.snap->ps.clientNum ) {
   FUNC_6( VAR_11.killerName, VAR_24, sizeof( VAR_11.killerName ) );
  }
 }

 if ( VAR_18 != VAR_2 ) {
  switch (VAR_16) {
  case 149:
   VAR_19 = "was caught by";
   break;
  case 150:
   VAR_19 = "was pummeled by";
   break;
  case 142:
   VAR_19 = "was machinegunned by";
   break;
  case 134:
   VAR_19 = "was gunned down by";
   break;
  case 148:
   VAR_19 = "ate";
   VAR_20 = "'s grenade";
   break;
  case 147:
   VAR_19 = "was shredded by";
   VAR_20 = "'s shrapnel";
   break;
  case 136:
   VAR_19 = "ate";
   VAR_20 = "'s rocket";
   break;
  case 135:
   VAR_19 = "almost dodged";
   VAR_20 = "'s rocket";
   break;
  case 140:
   VAR_19 = "was melted by";
   VAR_20 = "'s plasmagun";
   break;
  case 139:
   VAR_19 = "was melted by";
   VAR_20 = "'s plasmagun";
   break;
  case 137:
   VAR_19 = "was railed by";
   break;
  case 143:
   VAR_19 = "was electrocuted by";
   break;
  case 155:
  case 154:
   VAR_19 = "was blasted by";
   VAR_20 = "'s BFG";
   break;
  case 130:
   VAR_19 = "tried to invade";
   VAR_20 = "'s personal space";
   break;
  default:
   VAR_19 = "was killed by";
   break;
  }

  if (VAR_19) {
   FUNC_4( "%s %s %s%s\n",
    VAR_23, VAR_19, VAR_24, VAR_20);
   return;
  }
 }


 FUNC_4( "%s died.\n", VAR_23 );
}
