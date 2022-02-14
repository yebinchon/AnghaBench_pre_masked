
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_15__ {int w; int h; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_14__ {int w; int h; int pitch; int flags; scalar_t__ pixels; } ;
typedef TYPE_1__ SDL_Surface ;
typedef TYPE_2__ SDL_Rect ;


 int FUNC_0 (int *,int *,int,int,int,int,int,int ,int ) ;
 int FUNC_1 (int *,int *,int,int,int,int,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_1__*,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int,int,int,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

void FUNC_10(uint8 *VAR_15)
{
 SDL_Surface *VAR_16;
 uint8 *VAR_17;
 int VAR_18=0,VAR_19=0;

 if(!VAR_10) return;

 if(VAR_9)
 {
  FUNC_3();
  VAR_9=0;
 }
 VAR_15+=VAR_12*256;

 if(VAR_0) VAR_16=VAR_0;
 else VAR_16=VAR_10;

 if(FUNC_7(VAR_16))
  if(FUNC_6(VAR_16))
  {
   return;
  }

 VAR_17=(uint8*)VAR_16->pixels;

 if(VAR_4)
 {
  VAR_18=(((VAR_16->w-VAR_2*VAR_7))/2);
  VAR_17+=VAR_18*(VAR_5>>3);
  if(VAR_16->h>(VAR_13*VAR_8))
  {
   VAR_19=((VAR_16->h-VAR_13*VAR_8)/2);
   VAR_17+=VAR_19*VAR_16->pitch;
  }
 }

 if(VAR_5>8)
 {
  if(VAR_0)
   FUNC_1(VAR_15+VAR_1,VAR_17, VAR_2, VAR_13, VAR_16->pitch,1,1);
  else
   FUNC_1(VAR_15+VAR_1,VAR_17, VAR_2, VAR_13, VAR_16->pitch,VAR_7,VAR_8);
 }
 else
 {
  if(VAR_0)
   FUNC_0(VAR_15+VAR_1,VAR_17, VAR_2, VAR_13, VAR_16->pitch,1,1,0,VAR_11);
  else
   FUNC_0(VAR_15+VAR_1,VAR_17, VAR_2, VAR_13, VAR_16->pitch,VAR_7,VAR_8,VAR_6,VAR_11);
 }
 if(FUNC_7(VAR_16))
  FUNC_8(VAR_16);

 if(VAR_0)
 {
  SDL_Rect VAR_20;
  SDL_Rect VAR_21;

  VAR_20.x=0;
  VAR_20.y=0;
  VAR_20.w=VAR_2;
  VAR_20.h=VAR_13;

  VAR_21.x=0;
  VAR_21.y=0;
  VAR_21.w=VAR_7*VAR_2;
  VAR_21.h=VAR_8*VAR_13;

  FUNC_4(VAR_0, &VAR_20,VAR_10,&VAR_21);
 }

 FUNC_9(VAR_10, VAR_18, VAR_19, VAR_2*VAR_7, VAR_13*VAR_8);

 if(VAR_10->flags&VAR_3)
  FUNC_5(VAR_10);
}
