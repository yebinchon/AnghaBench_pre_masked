
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_19__ {int flags; } ;
struct TYPE_20__ {TYPE_8__ generic; } ;
struct TYPE_17__ {int flags; } ;
struct TYPE_18__ {TYPE_6__ generic; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_16__ {TYPE_4__ generic; } ;
struct TYPE_13__ {int flags; int * name; } ;
struct TYPE_14__ {TYPE_2__ generic; scalar_t__ shader; } ;
struct TYPE_12__ {int color; } ;
struct TYPE_11__ {int modelpage; int numBots; int selectedmodel; int numpages; TYPE_9__ right; TYPE_7__ left; TYPE_5__* picbuttons; TYPE_3__* pics; scalar_t__** botnames; TYPE_1__* picnames; int ** boticons; int * sortedBotNums; } ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (int ,int *,int ) ;
 char* FUNC_5 (int ) ;
 TYPE_10__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_6( void ) {
 const char *VAR_10;
 int VAR_11;
    int VAR_12;

 VAR_12 = VAR_7.modelpage * VAR_0;
 for( VAR_11 = 0; VAR_11 < (VAR_3 * VAR_2); VAR_11++, VAR_12++) {
  if( VAR_12 < VAR_7.numBots ) {
   VAR_10 = FUNC_5( VAR_7.sortedBotNums[VAR_12] );
   FUNC_4( FUNC_1( VAR_10, "model" ), VAR_7.boticons[VAR_11], VAR_1 );
   FUNC_3( VAR_7.botnames[VAR_11], FUNC_1( VAR_10, "name" ), 16 );
   FUNC_2( VAR_7.botnames[VAR_11] );
    VAR_7.pics[VAR_11].generic.name = VAR_7.boticons[VAR_11];
   if( FUNC_0( VAR_7.botnames[VAR_11] ) ) {
    VAR_7.picnames[VAR_11].color = VAR_9;
   }
   else {
    VAR_7.picnames[VAR_11].color = VAR_8;
   }
   VAR_7.picbuttons[VAR_11].generic.flags &= ~VAR_5;
  }
  else {

    VAR_7.pics[VAR_11].generic.name = ((void*)0);
   VAR_7.picbuttons[VAR_11].generic.flags |= VAR_5;
   VAR_7.botnames[VAR_11][0] = 0;
  }

   VAR_7.pics[VAR_11].generic.flags &= ~VAR_4;
   VAR_7.pics[VAR_11].shader = 0;
   VAR_7.picbuttons[VAR_11].generic.flags |= VAR_6;
 }


 VAR_11 = VAR_7.selectedmodel % VAR_0;
 VAR_7.pics[VAR_11].generic.flags |= VAR_4;
 VAR_7.picbuttons[VAR_11].generic.flags &= ~VAR_6;

 if( VAR_7.numpages > 1 ) {
  if( VAR_7.modelpage > 0 ) {
   VAR_7.left.generic.flags &= ~VAR_5;
  }
  else {
   VAR_7.left.generic.flags |= VAR_5;
  }

  if( VAR_7.modelpage < (VAR_7.numpages - 1) ) {
   VAR_7.right.generic.flags &= ~VAR_5;
  }
  else {
   VAR_7.right.generic.flags |= VAR_5;
  }
 }
 else {

  VAR_7.left.generic.flags |= VAR_5;
  VAR_7.right.generic.flags |= VAR_5;
 }
}
