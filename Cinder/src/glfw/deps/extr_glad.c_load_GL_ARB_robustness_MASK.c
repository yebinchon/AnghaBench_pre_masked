
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLREADNPIXELSARBPROC ;
typedef scalar_t__ PFNGLGETNUNIFORMUIVARBPROC ;
typedef scalar_t__ PFNGLGETNUNIFORMIVARBPROC ;
typedef scalar_t__ PFNGLGETNUNIFORMFVARBPROC ;
typedef scalar_t__ PFNGLGETNUNIFORMDVARBPROC ;
typedef scalar_t__ PFNGLGETNTEXIMAGEARBPROC ;
typedef scalar_t__ PFNGLGETNSEPARABLEFILTERARBPROC ;
typedef scalar_t__ PFNGLGETNPOLYGONSTIPPLEARBPROC ;
typedef scalar_t__ PFNGLGETNPIXELMAPUSVARBPROC ;
typedef scalar_t__ PFNGLGETNPIXELMAPUIVARBPROC ;
typedef scalar_t__ PFNGLGETNPIXELMAPFVARBPROC ;
typedef scalar_t__ PFNGLGETNMINMAXARBPROC ;
typedef scalar_t__ PFNGLGETNMAPIVARBPROC ;
typedef scalar_t__ PFNGLGETNMAPFVARBPROC ;
typedef scalar_t__ PFNGLGETNMAPDVARBPROC ;
typedef scalar_t__ PFNGLGETNHISTOGRAMARBPROC ;
typedef scalar_t__ PFNGLGETNCONVOLUTIONFILTERARBPROC ;
typedef scalar_t__ PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC ;
typedef scalar_t__ PFNGLGETNCOLORTABLEARBPROC ;
typedef scalar_t__ PFNGLGETGRAPHICSRESETSTATUSARBPROC ;
typedef scalar_t__ (* GLADloadproc ) (char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static void FUNC_0(GLADloadproc VAR_21) {
 if(!VAR_0) return;
 VAR_1 = (PFNGLGETGRAPHICSRESETSTATUSARBPROC)VAR_21("glGetGraphicsResetStatusARB");
 VAR_15 = (PFNGLGETNTEXIMAGEARBPROC)VAR_21("glGetnTexImageARB");
 VAR_20 = (PFNGLREADNPIXELSARBPROC)VAR_21("glReadnPixelsARB");
 VAR_3 = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC)VAR_21("glGetnCompressedTexImageARB");
 VAR_17 = (PFNGLGETNUNIFORMFVARBPROC)VAR_21("glGetnUniformfvARB");
 VAR_18 = (PFNGLGETNUNIFORMIVARBPROC)VAR_21("glGetnUniformivARB");
 VAR_19 = (PFNGLGETNUNIFORMUIVARBPROC)VAR_21("glGetnUniformuivARB");
 VAR_16 = (PFNGLGETNUNIFORMDVARBPROC)VAR_21("glGetnUniformdvARB");
 VAR_6 = (PFNGLGETNMAPDVARBPROC)VAR_21("glGetnMapdvARB");
 VAR_7 = (PFNGLGETNMAPFVARBPROC)VAR_21("glGetnMapfvARB");
 VAR_8 = (PFNGLGETNMAPIVARBPROC)VAR_21("glGetnMapivARB");
 VAR_10 = (PFNGLGETNPIXELMAPFVARBPROC)VAR_21("glGetnPixelMapfvARB");
 VAR_11 = (PFNGLGETNPIXELMAPUIVARBPROC)VAR_21("glGetnPixelMapuivARB");
 VAR_12 = (PFNGLGETNPIXELMAPUSVARBPROC)VAR_21("glGetnPixelMapusvARB");
 VAR_13 = (PFNGLGETNPOLYGONSTIPPLEARBPROC)VAR_21("glGetnPolygonStippleARB");
 VAR_2 = (PFNGLGETNCOLORTABLEARBPROC)VAR_21("glGetnColorTableARB");
 VAR_4 = (PFNGLGETNCONVOLUTIONFILTERARBPROC)VAR_21("glGetnConvolutionFilterARB");
 VAR_14 = (PFNGLGETNSEPARABLEFILTERARBPROC)VAR_21("glGetnSeparableFilterARB");
 VAR_5 = (PFNGLGETNHISTOGRAMARBPROC)VAR_21("glGetnHistogramARB");
 VAR_9 = (PFNGLGETNMINMAXARBPROC)VAR_21("glGetnMinmaxARB");
}
