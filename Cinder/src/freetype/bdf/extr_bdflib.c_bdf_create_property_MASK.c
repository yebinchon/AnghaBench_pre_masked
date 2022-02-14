
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int format; scalar_t__ name; scalar_t__ builtin; } ;
typedef TYPE_1__ bdf_property_t ;
struct TYPE_7__ {int nuser_props; int proptbl; TYPE_1__* user_props; int memory; } ;
typedef TYPE_2__ bdf_font_t ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Error ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__,size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__,size_t,int *,int ) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static FT_Error
  FUNC_8( char* VAR_4,
                       int VAR_5,
                       bdf_font_t* VAR_6 )
  {
    size_t VAR_7;
    bdf_property_t* VAR_8;
    FT_Memory VAR_9 = VAR_6->memory;
    FT_Error VAR_10 = VAR_0;





    if ( FUNC_6( VAR_4, &(VAR_6->proptbl) ) )
      goto Exit;

    if ( FUNC_2( VAR_6->user_props,
                         VAR_6->nuser_props,
                         VAR_6->nuser_props + 1 ) )
      goto Exit;

    VAR_8 = VAR_6->user_props + VAR_6->nuser_props;
    FUNC_4( VAR_8 );

    VAR_7 = FUNC_7( VAR_4 ) + 1;
    if ( VAR_7 > VAR_1 )
      return FUNC_3( VAR_2 );

    if ( FUNC_1( VAR_8->name, VAR_7 ) )
      goto Exit;

    FUNC_0( (char *)VAR_8->name, VAR_4, VAR_7 );

    VAR_8->format = VAR_5;
    VAR_8->builtin = 0;

    VAR_7 = VAR_3 + VAR_6->nuser_props;

    VAR_10 = FUNC_5( VAR_8->name, VAR_7, &(VAR_6->proptbl), VAR_9 );
    if ( VAR_10 )
      goto Exit;

    VAR_6->nuser_props++;

  Exit:
    return VAR_10;
  }
