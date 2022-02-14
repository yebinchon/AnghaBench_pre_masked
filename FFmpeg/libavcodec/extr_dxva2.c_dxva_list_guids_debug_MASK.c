
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pix_fmt; } ;
struct TYPE_7__ {int * Data4; int Data3; int Data2; scalar_t__ Data1; } ;
typedef TYPE_1__ GUID ;
typedef TYPE_2__ FFDXVASharedContext ;
typedef int DXGI_FORMAT ;
typedef int D3DFORMAT ;
typedef int AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int const*) ;
 int const FUNC_2 (char,char,char,char) ;
 int FUNC_3 (int *,int ,char*,...) ;
 scalar_t__ FUNC_4 (void*,TYPE_1__ const,int*) ;
 scalar_t__ FUNC_5 (void*,TYPE_1__ const,int const*) ;

__attribute__((used)) static void FUNC_6(AVCodecContext *VAR_3, void *VAR_4,
                                 unsigned VAR_5, const GUID *VAR_6)
{
    FFDXVASharedContext *VAR_7 = FUNC_0(VAR_3);
    int VAR_8;

    FUNC_3(VAR_3, VAR_0, "Decoder GUIDs reported as supported:\n");

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        const GUID *VAR_9 = &VAR_6[VAR_8];

        FUNC_3(VAR_3, VAR_0,
             "{%8.8x-%4.4x-%4.4x-%2.2x%2.2x-%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x}",
             (unsigned) VAR_9->Data1, VAR_9->Data2, VAR_9->Data3,
             VAR_9->Data4[0], VAR_9->Data4[1],
             VAR_9->Data4[2], VAR_9->Data4[3],
             VAR_9->Data4[4], VAR_9->Data4[5],
             VAR_9->Data4[6], VAR_9->Data4[7]);
        FUNC_3(VAR_3, VAR_0, "\n");
    }
}
