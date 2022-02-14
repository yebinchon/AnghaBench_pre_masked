
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int x; scalar_t__ y; } ;
struct TYPE_7__ {int (* get_kerning ) (TYPE_1__*,int ,int ) ;} ;
struct TYPE_6__ {int sfnt; } ;
typedef TYPE_1__* TT_Face ;
typedef TYPE_2__* SFNT_Service ;
typedef TYPE_3__ FT_Vector ;
typedef int FT_UInt ;
typedef int FT_Face ;
typedef int FT_Error ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static FT_Error
  FUNC_1( FT_Face VAR_0,
                  FT_UInt VAR_1,
                  FT_UInt VAR_2,
                  FT_Vector* VAR_3 )
  {
    TT_Face VAR_4 = (TT_Face)VAR_0;
    SFNT_Service VAR_5 = (SFNT_Service)VAR_4->sfnt;


    VAR_3->x = 0;
    VAR_3->y = 0;

    if ( VAR_5 )
      VAR_3->x = VAR_5->get_kerning( VAR_4, VAR_1, VAR_2 );

    return 0;
  }
