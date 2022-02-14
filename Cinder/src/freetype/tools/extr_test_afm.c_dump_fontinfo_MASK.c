
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int xMin; int yMin; int xMax; int yMax; } ;
struct TYPE_9__ {int Ascender; int Descender; int NumTrackKern; scalar_t__ TrackKerns; int NumKernPair; scalar_t__ KernPairs; TYPE_1__ FontBBox; scalar_t__ IsCIDFont; } ;
struct TYPE_8__ {int index1; int index2; int x; int y; } ;
struct TYPE_7__ {int degree; int min_ptsize; int min_kern; int max_ptsize; int max_kern; } ;
typedef scalar_t__ FT_UInt ;
typedef TYPE_2__* AFM_TrackKern ;
typedef TYPE_3__* AFM_KernPair ;
typedef TYPE_4__* AFM_FontInfo ;


 int FUNC_0 (char*,...) ;

void FUNC_1( AFM_FontInfo VAR_0 )
  {
    FT_UInt VAR_1;


    FUNC_0( "This AFM is for %sCID font.\n\n",
            ( VAR_0->IsCIDFont ) ? "" : "non-" );

    FUNC_0( "FontBBox: %.2f %.2f %.2f %.2f\n", VAR_0->FontBBox.xMin / 65536.,
                                               VAR_0->FontBBox.yMin / 65536.,
                                               VAR_0->FontBBox.xMax / 65536.,
                                               VAR_0->FontBBox.yMax / 65536. );
    FUNC_0( "Ascender: %.2f\n", VAR_0->Ascender / 65536. );
    FUNC_0( "Descender: %.2f\n\n", VAR_0->Descender / 65536. );

    if ( VAR_0->NumTrackKern )
      FUNC_0( "There are %d sets of track kernings:\n",
              VAR_0->NumTrackKern );
    else
      FUNC_0( "There is no track kerning.\n" );

    for ( VAR_1 = 0; VAR_1 < VAR_0->NumTrackKern; VAR_1++ )
    {
      AFM_TrackKern VAR_2 = VAR_0->TrackKerns + VAR_1;


      FUNC_0( "\t%2d: %5.2f %5.2f %5.2f %5.2f\n", VAR_2->degree,
                                                  VAR_2->min_ptsize / 65536.,
                                                  VAR_2->min_kern / 65536.,
                                                  VAR_2->max_ptsize / 65536.,
                                                  VAR_2->max_kern / 65536. );
    }

    FUNC_0( "\n" );

    if ( VAR_0->NumKernPair )
      FUNC_0( "There are %d kerning pairs:\n",
              VAR_0->NumKernPair );
    else
      FUNC_0( "There is no kerning pair.\n" );

    for ( VAR_1 = 0; VAR_1 < VAR_0->NumKernPair; VAR_1++ )
    {
      AFM_KernPair VAR_3 = VAR_0->KernPairs + VAR_1;


      FUNC_0( "\t%3d + %3d => (%4d, %4d)\n", VAR_3->index1,
                                             VAR_3->index2,
                                             VAR_3->x,
                                             VAR_3->y );
    }

  }
