
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct SceKernelLwMutexWork {int dummy; } ;
struct TYPE_3__ {int size; int size_user; } ;
typedef TYPE_1__ SceKernelFreeMemorySizeInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char*,int,int ,int ) ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct SceKernelLwMutexWork*,char*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__,void**) ;

void FUNC_5(void) {

 int VAR_10 = 0;
 if (&VAR_9 != ((void*)0)) {
  VAR_10 = VAR_9;
   VAR_8 = FUNC_1("code", VAR_9);

   if (VAR_8 < 0){

   goto failure;
  }
 }else{
  VAR_8 = 0;
 }


 if (FUNC_2((struct SceKernelLwMutexWork*)VAR_7, "sbrk mutex", 0, 0, 0) < 0) {
  goto failure;
 }


 SceKernelFreeMemorySizeInfo VAR_11;
 VAR_11.size = sizeof(SceKernelFreeMemorySizeInfo);
 FUNC_3(&VAR_11);

 if (&VAR_6 != ((void*)0)) {
  VAR_5 = VAR_6;
 }else{
  VAR_5 = VAR_11.size_user - VAR_0;
 }

 VAR_5 -= VAR_10;

 VAR_4 = FUNC_0("Newlib heap", 0x0c20d060, VAR_5, 0);
 if (VAR_4 < 0) {
  goto failure;
 }
 if (FUNC_4(VAR_4, (void**)&VAR_1) < 0) {
  goto failure;
 }
 VAR_3 = VAR_1 + VAR_5;
 VAR_2 = VAR_1;

 return;
failure:
 VAR_8 = 0;
 VAR_4 = 0;
 VAR_1 = 0;
 VAR_2 = 0;
}
