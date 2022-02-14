
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int uint64_t ;
typedef int copyio_type_t ;






 int VAR_0 ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 int FUNC_0 (uintptr_t,scalar_t__) ;
 int FUNC_1 (uintptr_t,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char const*,char*,scalar_t__) ;
 int FUNC_5 (char const*,char*,scalar_t__,scalar_t__*) ;
 int FUNC_6 (char const*,char*,scalar_t__) ;
 int FUNC_7 (char const*,int *,scalar_t__) ;
 int VAR_3 ;
 int FUNC_8 (char*,void*,scalar_t__,scalar_t__) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (void*,int *) ;

__attribute__((used)) static int
FUNC_12(copyio_type_t VAR_4, const char *VAR_5, char *VAR_6,
    vm_size_t VAR_7, vm_size_t *VAR_8)
{
 int VAR_9 = 0;
 vm_size_t VAR_10 = 0;
 vm_size_t VAR_11 = 0;
 void * VAR_12 = ((void*)0);


 if (VAR_4 == 128) {
  if ((uintptr_t)VAR_6 & VAR_2)
   return VAR_1;
 } else {
  if ((uintptr_t)VAR_5 & VAR_2)
   return VAR_1;
 }

 if (FUNC_3(VAR_3)) {
  if (VAR_4 == 131 || VAR_4 == 130 || VAR_4 == 129) {
   VAR_12 = (void*)VAR_6;
  } else if (VAR_4 == 128) {
   VAR_12 = (void*)(uintptr_t)VAR_5;
  }
  if (VAR_12)
   VAR_11 = FUNC_11(VAR_12, ((void*)0));
  if (FUNC_2(VAR_11 && VAR_11 < VAR_7))
   FUNC_8("copyio: kernel buffer %p has size %lu < nbytes %lu", VAR_12, VAR_11, VAR_7);
 }
 FUNC_10();






 switch (VAR_4) {
 case 131:
  VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_7);
  break;
 case 130:
  VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, &VAR_10);
  if (VAR_9 != VAR_0) {
   *VAR_8 = VAR_10;
  }
  break;
 case 129:
  VAR_9 = FUNC_7(VAR_5, (uint64_t *)(uintptr_t)VAR_6, VAR_7);
  break;
 case 128:
  VAR_9 = FUNC_6(VAR_5, VAR_6, VAR_7);
  break;
 default:
  VAR_9 = VAR_1;
 }

 FUNC_9();
 return VAR_9;
}
