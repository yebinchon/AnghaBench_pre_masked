
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_frame_info_t ;
typedef void opendingux_ctx_data_t ;
typedef int EGLint ;




 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int const,int ,int*,int*,int*,int const*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (void*) ;

__attribute__((used)) static void *FUNC_7(video_frame_info_t *VAR_1, void *VAR_2)
{
   opendingux_ctx_data_t *VAR_3 = (opendingux_ctx_data_t*)
      FUNC_1(1, sizeof(*VAR_3));

   if (!VAR_3)
      return ((void*)0);
   return VAR_3;

error:



   FUNC_6(VAR_3);
   return ((void*)0);
}
