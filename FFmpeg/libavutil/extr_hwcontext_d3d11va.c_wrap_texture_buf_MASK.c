
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int desc ;
struct TYPE_4__ {int index; int * texture; } ;
typedef int ID3D11Texture2D ;
typedef TYPE_1__ AVD3D11FrameDescriptor ;
typedef int AVBufferRef ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int,int ,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static AVBufferRef *FUNC_4(ID3D11Texture2D *VAR_1, int VAR_2)
{
    AVBufferRef *VAR_3;
    AVD3D11FrameDescriptor *VAR_4 = FUNC_3(sizeof(*VAR_4));
    if (!VAR_4) {
        FUNC_0(VAR_1);
        return ((void*)0);
    }

    VAR_4->texture = VAR_1;
    VAR_4->index = VAR_2;

    VAR_3 = FUNC_1((uint8_t *)VAR_4, sizeof(VAR_4), VAR_0, VAR_1, 0);
    if (!VAR_3) {
        FUNC_0(VAR_1);
        FUNC_2(VAR_4);
        return ((void*)0);
    }

    return VAR_3;
}
