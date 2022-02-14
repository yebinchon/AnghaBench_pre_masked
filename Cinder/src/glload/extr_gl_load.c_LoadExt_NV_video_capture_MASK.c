
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC ;
typedef scalar_t__ PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC ;
typedef scalar_t__ PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC ;
typedef scalar_t__ PFNGLVIDEOCAPTURENVPROC ;
typedef scalar_t__ PFNGLGETVIDEOCAPTURESTREAMIVNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOCAPTURESTREAMFVNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOCAPTURESTREAMDVNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOCAPTUREIVNVPROC ;
typedef scalar_t__ PFNGLENDVIDEOCAPTURENVPROC ;
typedef scalar_t__ PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC ;
typedef scalar_t__ PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC ;
typedef scalar_t__ PFNGLBEGINVIDEOCAPTURENVPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
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

__attribute__((used)) static int FUNC_1()
{
 int VAR_12 = 0;
 VAR_0 = (PFNGLBEGINVIDEOCAPTURENVPROC)FUNC_0("glBeginVideoCaptureNV");
 if(!VAR_0) ++VAR_12;
 VAR_1 = (PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC)FUNC_0("glBindVideoCaptureStreamBufferNV");
 if(!VAR_1) ++VAR_12;
 VAR_2 = (PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC)FUNC_0("glBindVideoCaptureStreamTextureNV");
 if(!VAR_2) ++VAR_12;
 VAR_3 = (PFNGLENDVIDEOCAPTURENVPROC)FUNC_0("glEndVideoCaptureNV");
 if(!VAR_3) ++VAR_12;
 VAR_4 = (PFNGLGETVIDEOCAPTURESTREAMDVNVPROC)FUNC_0("glGetVideoCaptureStreamdvNV");
 if(!VAR_4) ++VAR_12;
 VAR_5 = (PFNGLGETVIDEOCAPTURESTREAMFVNVPROC)FUNC_0("glGetVideoCaptureStreamfvNV");
 if(!VAR_5) ++VAR_12;
 VAR_6 = (PFNGLGETVIDEOCAPTURESTREAMIVNVPROC)FUNC_0("glGetVideoCaptureStreamivNV");
 if(!VAR_6) ++VAR_12;
 VAR_7 = (PFNGLGETVIDEOCAPTUREIVNVPROC)FUNC_0("glGetVideoCaptureivNV");
 if(!VAR_7) ++VAR_12;
 VAR_8 = (PFNGLVIDEOCAPTURENVPROC)FUNC_0("glVideoCaptureNV");
 if(!VAR_8) ++VAR_12;
 VAR_9 = (PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC)FUNC_0("glVideoCaptureStreamParameterdvNV");
 if(!VAR_9) ++VAR_12;
 VAR_10 = (PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC)FUNC_0("glVideoCaptureStreamParameterfvNV");
 if(!VAR_10) ++VAR_12;
 VAR_11 = (PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC)FUNC_0("glVideoCaptureStreamParameterivNV");
 if(!VAR_11) ++VAR_12;
 return VAR_12;
}
