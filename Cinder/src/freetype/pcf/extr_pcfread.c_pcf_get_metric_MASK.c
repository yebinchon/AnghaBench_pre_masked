
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int leftSideBearing; int rightSideBearing; int characterWidth; int ascent; int descent; scalar_t__ attributes; } ;
typedef TYPE_1__* PCF_Metric ;
typedef TYPE_1__ PCF_Compressed_MetricRec ;
typedef int FT_ULong ;
typedef int FT_Stream ;
typedef void* FT_Short ;
typedef int FT_Frame_Field ;
typedef int FT_Error ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int const* VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static FT_Error
  FUNC_4( FT_Stream VAR_6,
                  FT_ULong VAR_7,
                  PCF_Metric VAR_8 )
  {
    FT_Error VAR_9 = VAR_0;


    if ( FUNC_3( VAR_7, VAR_2 ) )
    {
      const FT_Frame_Field* VAR_10;



      VAR_10 = ( FUNC_2( VAR_7 ) == VAR_1 )
               ? VAR_5
               : VAR_4;


      (void)FUNC_0( VAR_10, VAR_8 );
    }
    else
    {
      PCF_Compressed_MetricRec VAR_11;



      if ( FUNC_0( VAR_3, &VAR_11 ) )
        goto Exit;

      VAR_8->leftSideBearing = (FT_Short)( VAR_11.leftSideBearing - 0x80 );
      VAR_8->rightSideBearing = (FT_Short)( VAR_11.rightSideBearing - 0x80 );
      VAR_8->characterWidth = (FT_Short)( VAR_11.characterWidth - 0x80 );
      VAR_8->ascent = (FT_Short)( VAR_11.ascent - 0x80 );
      VAR_8->descent = (FT_Short)( VAR_11.descent - 0x80 );
      VAR_8->attributes = 0;
    }

    FUNC_1(( " width=%d,"
                " lsb=%d, rsb=%d,"
                " ascent=%d, descent=%d,"
                " attributes=%d\n",
                VAR_8->characterWidth,
                VAR_8->leftSideBearing,
                VAR_8->rightSideBearing,
                VAR_8->ascent,
                VAR_8->descent,
                VAR_8->attributes ));

  Exit:
    return VAR_9;
  }
