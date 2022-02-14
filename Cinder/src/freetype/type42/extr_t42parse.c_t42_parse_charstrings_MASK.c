
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_23__ {TYPE_1__* ps_table_funcs; } ;
struct TYPE_22__ {char** elements; int* lengths; scalar_t__ init; } ;
struct TYPE_21__ {int psaux; } ;
struct TYPE_18__ {char* limit; char* cursor; scalar_t__ error; int memory; } ;
struct TYPE_19__ {TYPE_2__ root; } ;
struct TYPE_20__ {int num_glyphs; TYPE_6__ swap_table; TYPE_6__ glyph_names; TYPE_6__ charstrings; TYPE_3__ parser; } ;
struct TYPE_17__ {scalar_t__ (* init ) (TYPE_6__*,int,int ) ;} ;
typedef TYPE_3__* T42_Parser ;
typedef TYPE_4__* T42_Loader ;
typedef TYPE_5__* T42_Face ;
typedef TYPE_6__* PS_Table ;
typedef TYPE_7__* PSAux_Service ;
typedef int FT_UInt ;
typedef int FT_Memory ;
typedef size_t FT_Int ;
typedef scalar_t__ FT_Error ;
typedef char FT_Byte ;
typedef scalar_t__ FT_Bool ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_6__*,size_t,char*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (char) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;
 scalar_t__ FUNC_10 (TYPE_6__*,size_t,int ) ;
 scalar_t__ FUNC_11 (TYPE_6__*,size_t,int ) ;
 scalar_t__ FUNC_12 (TYPE_6__*,int,int ) ;
 scalar_t__ FUNC_13 (char) ;

__attribute__((used)) static void
  FUNC_14( T42_Face VAR_1,
                         T42_Loader VAR_2 )
  {
    T42_Parser VAR_3 = &VAR_2->parser;
    PS_Table VAR_4 = &VAR_2->charstrings;
    PS_Table VAR_5 = &VAR_2->glyph_names;
    PS_Table VAR_6 = &VAR_2->swap_table;
    FT_Memory VAR_7 = VAR_3->root.memory;
    FT_Error VAR_8;

    PSAux_Service VAR_9 = (PSAux_Service)VAR_1->psaux;

    FT_Byte* VAR_10;
    FT_Byte* VAR_11 = VAR_3->root.limit;
    FT_Int VAR_12;
    FT_Int VAR_13 = 0;
    FT_Byte VAR_14 = 0;


    FUNC_6( VAR_3 );

    if ( VAR_3->root.cursor >= VAR_11 )
    {
      FUNC_1(( "t42_parse_charstrings: out of bounds\n" ));
      VAR_8 = FUNC_2( VAR_0 );
      goto Fail;
    }

    if ( FUNC_8( *VAR_3->root.cursor ) )
    {
      VAR_2->num_glyphs = FUNC_7( VAR_3 );
      if ( VAR_3->root.error )
        return;
      if ( VAR_2->num_glyphs < 0 )
      {
        FUNC_1(( "t42_parse_encoding: invalid number of glyphs\n" ));
        VAR_8 = FUNC_2( VAR_0 );
        goto Fail;
      }


      if ( VAR_2->num_glyphs > ( VAR_11 - VAR_3->root.cursor ) >> 2 )
      {
        FUNC_3(( "t42_parse_charstrings: adjusting number of glyphs"
                    " (from %d to %d)\n",
                    VAR_2->num_glyphs,
                    ( VAR_11 - VAR_3->root.cursor ) >> 2 ));
        VAR_2->num_glyphs = ( VAR_11 - VAR_3->root.cursor ) >> 2;
      }

    }
    else if ( *VAR_3->root.cursor == '<' )
    {


      FT_Int VAR_15 = 0;


      FUNC_5( VAR_3 );
      if ( VAR_3->root.error )
        return;
      FUNC_6( VAR_3 );
      VAR_10 = VAR_3->root.cursor;

      while ( VAR_3->root.cursor < VAR_11 )
      {
        if ( *VAR_3->root.cursor == '/' )
          VAR_15++;
        else if ( *VAR_3->root.cursor == '>' )
        {
          VAR_2->num_glyphs = VAR_15;
          VAR_3->root.cursor = VAR_10;
          break;
        }
        FUNC_5( VAR_3 );
        if ( VAR_3->root.error )
          return;
        FUNC_6( VAR_3 );
      }
    }
    else
    {
      FUNC_1(( "t42_parse_charstrings: invalid token\n" ));
      VAR_8 = FUNC_2( VAR_0 );
      goto Fail;
    }

    if ( VAR_3->root.cursor >= VAR_11 )
    {
      FUNC_1(( "t42_parse_charstrings: out of bounds\n" ));
      VAR_8 = FUNC_2( VAR_0 );
      goto Fail;
    }




    if ( VAR_6->init )
    {
      FUNC_1(( "t42_parse_charstrings:"
                 " only one CharStrings array allowed\n" ));
      VAR_8 = FUNC_2( VAR_0 );
      goto Fail;
    }

    VAR_8 = VAR_9->ps_table_funcs->init( VAR_4,
                                         VAR_2->num_glyphs,
                                         VAR_7 );
    if ( VAR_8 )
      goto Fail;

    VAR_8 = VAR_9->ps_table_funcs->init( VAR_5,
                                         VAR_2->num_glyphs,
                                         VAR_7 );
    if ( VAR_8 )
      goto Fail;




    VAR_8 = VAR_9->ps_table_funcs->init( VAR_6, 4, VAR_7 );
    if ( VAR_8 )
      goto Fail;

    VAR_12 = 0;

    for (;;)
    {
      FUNC_6( VAR_3 );

      VAR_10 = VAR_3->root.cursor;
      if ( VAR_10 >= VAR_11 )
        break;


      if ( *VAR_10 == 'e' &&
           VAR_10 + 3 < VAR_11 &&
           VAR_10[1] == 'n' &&
           VAR_10[2] == 'd' &&
           FUNC_13( VAR_10[3] ) )
        break;
      if ( *VAR_10 == '>' )
        break;

      FUNC_5( VAR_3 );
      if ( VAR_3->root.cursor >= VAR_11 )
      {
        FUNC_1(( "t42_parse_charstrings: out of bounds\n" ));
        VAR_8 = FUNC_2( VAR_0 );
        goto Fail;
      }
      if ( VAR_3->root.error )
        return;

      if ( *VAR_10 == '/' || *VAR_10 == '(' )
      {
        FT_UInt VAR_16;
        FT_Bool VAR_17 = FUNC_0( *VAR_10 == '(' );


        if ( VAR_10 + ( VAR_17 ? 3 : 2 ) >= VAR_11 )
        {
          FUNC_1(( "t42_parse_charstrings: out of bounds\n" ));
          VAR_8 = FUNC_2( VAR_0 );
          goto Fail;
        }

        VAR_10++;
        VAR_16 = (FT_UInt)( VAR_3->root.cursor - VAR_10 );
        if ( VAR_17 )
          VAR_16--;

        VAR_8 = FUNC_4( VAR_5, VAR_12, VAR_10, VAR_16 + 1 );
        if ( VAR_8 )
          goto Fail;


        VAR_5->elements[VAR_12][VAR_16] = '\0';


        if ( *VAR_10 == '.' &&
             FUNC_9( ".notdef",
                        (const char*)(VAR_5->elements[VAR_12]) ) == 0 )
        {
          VAR_13 = VAR_12;
          VAR_14 = 1;
        }

        FUNC_6( VAR_3 );

        if ( VAR_17 )
          FUNC_5( VAR_3 );

        VAR_10 = VAR_3->root.cursor;

        (void)FUNC_7( VAR_3 );
        if ( VAR_3->root.cursor >= VAR_11 )
        {
          FUNC_1(( "t42_parse_charstrings: out of bounds\n" ));
          VAR_8 = FUNC_2( VAR_0 );
          goto Fail;
        }

        VAR_16 = (FT_UInt)( VAR_3->root.cursor - VAR_10 );

        VAR_8 = FUNC_4( VAR_4, VAR_12, VAR_10, VAR_16 + 1 );
        if ( VAR_8 )
          goto Fail;

        VAR_4->elements[VAR_12][VAR_16] = '\0';

        VAR_12++;
        if ( VAR_12 >= VAR_2->num_glyphs )
          break;
      }
    }

    VAR_2->num_glyphs = VAR_12;

    if ( !VAR_14 )
    {
      FUNC_1(( "t42_parse_charstrings: no /.notdef glyph\n" ));
      VAR_8 = FUNC_2( VAR_0 );
      goto Fail;
    }


    if ( FUNC_9( (const char*)".notdef",
                    (const char*)VAR_5->elements[0] ) )
    {







      VAR_8 = FUNC_4( VAR_6, 0,
                            VAR_5->elements[0],
                            VAR_5->lengths [0] );
      if ( VAR_8 )
        goto Fail;


      VAR_8 = FUNC_4( VAR_6, 1,
                            VAR_4->elements[0],
                            VAR_4->lengths [0] );
      if ( VAR_8 )
        goto Fail;


      VAR_8 = FUNC_4( VAR_6, 2,
                            VAR_5->elements[VAR_13],
                            VAR_5->lengths [VAR_13] );
      if ( VAR_8 )
        goto Fail;


      VAR_8 = FUNC_4( VAR_6, 3,
                            VAR_4->elements[VAR_13],
                            VAR_4->lengths [VAR_13] );
      if ( VAR_8 )
        goto Fail;

      VAR_8 = FUNC_4( VAR_5, VAR_13,
                            VAR_6->elements[0],
                            VAR_6->lengths [0] );
      if ( VAR_8 )
        goto Fail;

      VAR_8 = FUNC_4( VAR_4, VAR_13,
                            VAR_6->elements[1],
                            VAR_6->lengths [1] );
      if ( VAR_8 )
        goto Fail;

      VAR_8 = FUNC_4( VAR_5, 0,
                            VAR_6->elements[2],
                            VAR_6->lengths [2] );
      if ( VAR_8 )
        goto Fail;

      VAR_8 = FUNC_4( VAR_4, 0,
                            VAR_6->elements[3],
                            VAR_6->lengths [3] );
      if ( VAR_8 )
        goto Fail;

    }

    return;

  Fail:
    VAR_3->root.error = VAR_8;
  }
