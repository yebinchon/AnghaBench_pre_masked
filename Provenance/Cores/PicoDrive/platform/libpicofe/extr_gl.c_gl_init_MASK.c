
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef scalar_t__ EGLint ;
typedef int EGLNativeWindowType ;
typedef int EGLNativeDisplayType ;
typedef int * EGLConfig ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (int,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (scalar_t__,scalar_t__*,int **,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int *,int *) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_16 ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int *) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ,int ,int,int,int ,int ,int ,void*) ;
 int FUNC_17 (int ,int ,int ) ;
 void* VAR_17 ;
 void* VAR_18 ;
 scalar_t__ FUNC_18 (char*) ;
 int FUNC_19 (void**,void**,int*) ;
 int VAR_19 ;

int FUNC_20(void *VAR_20, void *VAR_21, int *VAR_22)
{
 EGLConfig VAR_23 = ((void*)0);
 GLuint VAR_24 = 0;
 void *VAR_25 = ((void*)0);
 EGLint VAR_26;
 int VAR_27 = -1;
 int VAR_28;
 EGLint VAR_29[] =
 {
  VAR_0
 };

 VAR_28 = FUNC_19(&VAR_20, &VAR_21, VAR_22);
 if (VAR_28 != 0) {
  FUNC_8(VAR_19, "gl_platform_init failed with %d\n", VAR_28);
  goto out;
 }

 VAR_25 = FUNC_0(1, 1024 * 512 * 2);
 if (VAR_25 == ((void*)0)) {
  FUNC_8(VAR_19, "OOM\n");
  goto out;
 }

 VAR_15 = FUNC_4((EGLNativeDisplayType)VAR_20);
 if (VAR_15 == VAR_2) {
  FUNC_8(VAR_19, "Failed to get EGL display\n");
  goto out;
 }

 if (!FUNC_6(VAR_15, ((void*)0), ((void*)0))) {
  FUNC_8(VAR_19, "Failed to initialize EGL\n");
  goto out;
 }

 if (!FUNC_1(VAR_15, VAR_29, &VAR_23, 1, &VAR_26)) {
  FUNC_8(VAR_19, "Failed to choose config (%x)\n", FUNC_5());
  goto out;
 }

 if (VAR_23 == ((void*)0) || VAR_26 == 0) {
  FUNC_8(VAR_19, "No EGL configs available\n");
  goto out;
 }

 VAR_16 = FUNC_3(VAR_15, VAR_23,
  (EGLNativeWindowType)VAR_21, ((void*)0));
 if (VAR_16 == VAR_3) {
  FUNC_8(VAR_19, "Unable to create EGL surface (%x)\n",
   FUNC_5());
  goto out;
 }

 VAR_14 = FUNC_2(VAR_15, VAR_23, VAR_1, ((void*)0));
 if (VAR_14 == VAR_1) {
  FUNC_8(VAR_19, "Unable to create EGL context (%x)\n",
   FUNC_5());
  goto out;
 }

 FUNC_7(VAR_15, VAR_16, VAR_16, VAR_14);

 FUNC_11(VAR_8);

 FUNC_14(1, &VAR_24);

 FUNC_10(VAR_8, VAR_24);

 FUNC_16(VAR_8, 0, VAR_7, 1024, 512, 0, VAR_7,
  VAR_12, VAR_25);
 if (FUNC_18("glTexImage2D"))
  goto out;


 FUNC_17(VAR_8, VAR_11, VAR_6);
 FUNC_17(VAR_8, VAR_10, VAR_6);


 FUNC_15();
 FUNC_13(VAR_5);
 FUNC_11(VAR_4);

 FUNC_12(VAR_9);
 FUNC_12(VAR_13);

 if (FUNC_18("init"))
  goto out;

 VAR_17 = (void *)VAR_15;
 VAR_18 = (void *)VAR_16;
 VAR_27 = 0;
out:
 FUNC_9(VAR_25);
 return VAR_27;
}
