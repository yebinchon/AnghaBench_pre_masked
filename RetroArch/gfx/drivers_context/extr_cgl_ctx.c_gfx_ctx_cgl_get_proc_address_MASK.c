
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfx_ctx_proc_t ;
typedef int CFURLRef ;
typedef int CFStringRef ;
typedef int CFBundleRef ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char const*,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static gfx_ctx_proc_t FUNC_6(const char *VAR_3)
{
   CFURLRef VAR_4 = FUNC_5(VAR_0,
         FUNC_3
         ("/System/Library/Frameworks/OpenGL.framework"),
         VAR_2, 1);
   CFBundleRef VAR_5 = FUNC_0(VAR_0, VAR_4);
   CFStringRef VAR_6 = FUNC_4(VAR_0, VAR_3,
         VAR_1);
   gfx_ctx_proc_t VAR_7 = (gfx_ctx_proc_t)FUNC_1(
         VAR_5, VAR_6);

   FUNC_2(VAR_4);
   FUNC_2(VAR_6);
   FUNC_2(VAR_5);

   return VAR_7;
}
