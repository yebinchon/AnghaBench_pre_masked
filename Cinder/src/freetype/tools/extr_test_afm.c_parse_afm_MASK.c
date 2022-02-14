
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int get_index; int FontInfo; } ;
struct TYPE_16__ {int memory; } ;
struct TYPE_15__ {int limit; int cursor; int size; } ;
struct TYPE_14__ {TYPE_1__* afm_parser_funcs; } ;
struct TYPE_13__ {int (* init ) (TYPE_5__*,int ,int ,int ) ;int (* parse ) (TYPE_5__*) ;int (* done ) (TYPE_5__*) ;} ;
typedef TYPE_2__* PSAux_Service ;
typedef TYPE_3__* FT_Stream ;
typedef TYPE_4__* FT_Library ;
typedef int FT_Error ;
typedef TYPE_5__ AFM_ParserRec ;
typedef int AFM_FontInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;

FT_Error
  FUNC_5( FT_Library VAR_2,
             FT_Stream VAR_3,
             AFM_FontInfo VAR_4 )
  {
    PSAux_Service VAR_5;
    AFM_ParserRec VAR_6;
    FT_Error VAR_7 = VAR_0;


    VAR_5 = (PSAux_Service)FUNC_0( VAR_2, "psaux" );
    if ( !VAR_5 || !VAR_5->afm_parser_funcs )
      return -1;

    VAR_7 = FUNC_1( VAR_3, VAR_3->size );
    if ( VAR_7 )
      return VAR_7;

    VAR_7 = VAR_5->afm_parser_funcs->init( &VAR_6,
                                           VAR_2->memory,
                                           VAR_3->cursor,
                                           VAR_3->limit );
    if ( VAR_7 )
      return VAR_7;

    VAR_6.FontInfo = VAR_4;
    VAR_6.get_index = VAR_1;

    VAR_7 = VAR_5->afm_parser_funcs->parse( &VAR_6 );

    VAR_5->afm_parser_funcs->done( &VAR_6 );

    return VAR_7;
  }
