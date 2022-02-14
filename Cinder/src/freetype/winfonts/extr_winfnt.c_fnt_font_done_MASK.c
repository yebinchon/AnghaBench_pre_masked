
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int stream; int memory; } ;
struct TYPE_8__ {TYPE_1__* font; } ;
struct TYPE_7__ {struct TYPE_7__* family_name; scalar_t__ fnt_frame; } ;
typedef int FT_Stream ;
typedef int FT_Memory ;
typedef TYPE_1__* FNT_Font ;
typedef TYPE_2__* FNT_Face ;


 TYPE_5__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_3( FNT_Face VAR_0 )
  {
    FT_Memory VAR_1 = FUNC_0( VAR_0 )->memory;
    FT_Stream VAR_2 = FUNC_0( VAR_0 )->stream;
    FNT_Font VAR_3 = VAR_0->font;


    if ( !VAR_3 )
      return;

    if ( VAR_3->fnt_frame )
      FUNC_1( VAR_3->fnt_frame );
    FUNC_2( VAR_3->family_name );

    FUNC_2( VAR_3 );
    VAR_0->font = ((void*)0);
  }
