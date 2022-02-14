
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int sfxHandle_t ;
struct TYPE_15__ {int flags; int x; int y; int (* callback ) (TYPE_2__*,int ) ;} ;
struct TYPE_16__ {int width; int seperation; int columns; int height; int top; int numitems; int oldvalue; int curvalue; int** itemnames; TYPE_1__ generic; } ;
typedef TYPE_2__ menulist_s ;
struct TYPE_17__ {int cursory; int cursorx; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 TYPE_3__ VAR_8 ;

sfxHandle_t FUNC_13( menulist_s *VAR_9, int VAR_10 )
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;

 switch (VAR_10)
 {
  case 132:
   if (VAR_9->generic.flags & VAR_1)
   {

    VAR_11 = VAR_9->generic.x;
    VAR_12 = VAR_9->generic.y;
    VAR_13 = ( (VAR_9->width + VAR_9->seperation) * VAR_9->columns - VAR_9->seperation) * VAR_4;
    if( VAR_9->generic.flags & VAR_0 ) {
     VAR_11 -= VAR_13 / 2;
    }
    if (FUNC_2( VAR_11, VAR_12, VAR_13, VAR_9->height*VAR_3 ))
    {
     VAR_17 = (VAR_8.cursorx - VAR_11)/VAR_4;
     VAR_19 = VAR_17 / (VAR_9->width + VAR_9->seperation);
     VAR_18 = (VAR_8.cursory - VAR_12)/VAR_3;
     VAR_20 = VAR_19 * VAR_9->height + VAR_18;
     if (VAR_9->top + VAR_20 < VAR_9->numitems)
     {
      VAR_9->oldvalue = VAR_9->curvalue;
      VAR_9->curvalue = VAR_9->top + VAR_20;

      if (VAR_9->oldvalue != VAR_9->curvalue && VAR_9->generic.callback)
      {
       VAR_9->generic.callback( VAR_9, VAR_2 );
       return (VAR_6);
      }
     }
    }


    return (VAR_7);
   }
   break;

  case 139:
  case 142:
   VAR_9->oldvalue = VAR_9->curvalue;
   VAR_9->curvalue = 0;
   VAR_9->top = 0;

   if (VAR_9->oldvalue != VAR_9->curvalue && VAR_9->generic.callback)
   {
    VAR_9->generic.callback( VAR_9, VAR_2 );
    return (VAR_6);
   }
   return (VAR_5);

  case 140:
  case 143:
   VAR_9->oldvalue = VAR_9->curvalue;
   VAR_9->curvalue = VAR_9->numitems-1;
   if( VAR_9->columns > 1 ) {
    VAR_16 = (VAR_9->curvalue / VAR_9->height + 1) * VAR_9->height;
    VAR_9->top = VAR_16 - (VAR_9->columns * VAR_9->height);
   }
   else {
    VAR_9->top = VAR_9->curvalue - (VAR_9->height - 1);
   }
   if (VAR_9->top < 0)
    VAR_9->top = 0;

   if (VAR_9->oldvalue != VAR_9->curvalue && VAR_9->generic.callback)
   {
    VAR_9->generic.callback( VAR_9, VAR_2 );
    return (VAR_6);
   }
   return (VAR_5);

  case 130:
  case 136:
   if( VAR_9->columns > 1 ) {
    return VAR_7;
   }

   if (VAR_9->curvalue > 0)
   {
    VAR_9->oldvalue = VAR_9->curvalue;
    VAR_9->curvalue -= VAR_9->height-1;
    if (VAR_9->curvalue < 0)
     VAR_9->curvalue = 0;
    VAR_9->top = VAR_9->curvalue;
    if (VAR_9->top < 0)
     VAR_9->top = 0;

    if (VAR_9->generic.callback)
     VAR_9->generic.callback( VAR_9, VAR_2 );

    return (VAR_6);
   }
   return (VAR_5);

  case 131:
  case 137:
   if( VAR_9->columns > 1 ) {
    return VAR_7;
   }

   if (VAR_9->curvalue < VAR_9->numitems-1)
   {
    VAR_9->oldvalue = VAR_9->curvalue;
    VAR_9->curvalue += VAR_9->height-1;
    if (VAR_9->curvalue > VAR_9->numitems-1)
     VAR_9->curvalue = VAR_9->numitems-1;
    VAR_9->top = VAR_9->curvalue - (VAR_9->height-1);
    if (VAR_9->top < 0)
     VAR_9->top = 0;

    if (VAR_9->generic.callback)
     VAR_9->generic.callback( VAR_9, VAR_2 );

    return (VAR_6);
   }
   return (VAR_5);

  case 134:
  case 128:
   if( VAR_9->curvalue == 0 ) {
    return VAR_5;
   }

   VAR_9->oldvalue = VAR_9->curvalue;
   VAR_9->curvalue--;

   if( VAR_9->curvalue < VAR_9->top ) {
    if( VAR_9->columns == 1 ) {
     VAR_9->top--;
    }
    else {
     VAR_9->top -= VAR_9->height;
    }
   }

   if( VAR_9->generic.callback ) {
    VAR_9->generic.callback( VAR_9, VAR_2 );
   }

   return (VAR_6);

  case 141:
  case 144:
   if( VAR_9->curvalue == VAR_9->numitems - 1 ) {
    return VAR_5;
   }

   VAR_9->oldvalue = VAR_9->curvalue;
   VAR_9->curvalue++;

   if( VAR_9->curvalue >= VAR_9->top + VAR_9->columns * VAR_9->height ) {
    if( VAR_9->columns == 1 ) {
     VAR_9->top++;
    }
    else {
     VAR_9->top += VAR_9->height;
    }
   }

   if( VAR_9->generic.callback ) {
    VAR_9->generic.callback( VAR_9, VAR_2 );
   }

   return VAR_6;

  case 138:
  case 133:
   if( VAR_9->columns == 1 ) {
    return VAR_7;
   }

   if( VAR_9->curvalue < VAR_9->height ) {
    return VAR_5;
   }

   VAR_9->oldvalue = VAR_9->curvalue;
   VAR_9->curvalue -= VAR_9->height;

   if( VAR_9->curvalue < VAR_9->top ) {
    VAR_9->top -= VAR_9->height;
   }

   if( VAR_9->generic.callback ) {
    VAR_9->generic.callback( VAR_9, VAR_2 );
   }

   return VAR_6;

  case 135:
  case 129:
   if( VAR_9->columns == 1 ) {
    return VAR_7;
   }

   VAR_16 = VAR_9->curvalue + VAR_9->height;

   if( VAR_16 >= VAR_9->numitems ) {
    return VAR_5;
   }

   VAR_9->oldvalue = VAR_9->curvalue;
   VAR_9->curvalue = VAR_16;

   if( VAR_9->curvalue > VAR_9->top + VAR_9->columns * VAR_9->height - 1 ) {
    VAR_9->top += VAR_9->height;
   }

   if( VAR_9->generic.callback ) {
    VAR_9->generic.callback( VAR_9, VAR_2 );
   }

   return VAR_6;
 }


 if ( !FUNC_0( VAR_10 ) )
  return (0);


 if ( FUNC_1( VAR_10 ) )
 {
  VAR_10 -= 'A' - 'a';
 }


 for (VAR_14=1; VAR_14<=VAR_9->numitems; VAR_14++)
 {
  VAR_15 = (VAR_9->curvalue + VAR_14) % VAR_9->numitems;
  VAR_16 = VAR_9->itemnames[VAR_15][0];
  if ( FUNC_1( VAR_16 ) )
  {
   VAR_16 -= 'A' - 'a';
  }

  if (VAR_16 == VAR_10)
  {

   if (VAR_15 < VAR_9->top)
   {

    VAR_9->top = VAR_15;
   }
   else if (VAR_15 > VAR_9->top+VAR_9->height-1)
   {

    VAR_9->top = (VAR_15+1) - VAR_9->height;
   }

   if (VAR_9->curvalue != VAR_15)
   {
    VAR_9->oldvalue = VAR_9->curvalue;
    VAR_9->curvalue = VAR_15;
    if (VAR_9->generic.callback)
     VAR_9->generic.callback( VAR_9, VAR_2 );
    return ( VAR_6 );
   }

   return (VAR_5);
  }
 }

 return (VAR_5);
}
