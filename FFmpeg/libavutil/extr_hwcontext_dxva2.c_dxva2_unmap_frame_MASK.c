
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int priv; TYPE_1__* source; } ;
struct TYPE_4__ {scalar_t__* data; } ;
typedef int IDirect3DSurface9 ;
typedef TYPE_2__ HWMapDescriptor ;
typedef int AVHWFramesContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(AVHWFramesContext *VAR_0, HWMapDescriptor *VAR_1)
{
    IDirect3DSurface9 *VAR_2 = (IDirect3DSurface9*)VAR_1->source->data[3];
    FUNC_0(VAR_2);
    FUNC_1(&VAR_1->priv);
}
