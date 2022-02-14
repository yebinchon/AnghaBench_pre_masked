
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (int,int ) ;
 void* FUNC_3 (int *,size_t,int,int ,int,int ) ;
 int FUNC_4 (void*,size_t) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(char *VAR_7, off_t VAR_8, size_t VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 void *VAR_13;
 int *VAR_14;

 VAR_11 = FUNC_5(VAR_7, VAR_2);
 if (VAR_11 == -1) {
  FUNC_6(VAR_7);
  return -1;
 }

 if (FUNC_1("/proc/bus/pci/*", VAR_7, 0) == 0) {
  VAR_12 = FUNC_2(VAR_11, VAR_3);
  if (VAR_12 == -1)
   FUNC_6("PCIIOC_MMAP_IS_MEM ioctl");
 }

 VAR_13 = FUNC_3(((void*)0), VAR_9, VAR_4|VAR_5, VAR_1, VAR_11, VAR_8);
 if (VAR_13 == VAR_0)
  return 1;

 if (VAR_10) {
  VAR_14 = (int *) VAR_13;
  while (VAR_14 < (int *) (VAR_13 + VAR_9))
   VAR_6 += *VAR_14++;
 }

 VAR_12 = FUNC_4(VAR_13, VAR_9);
 if (VAR_12 == -1) {
  FUNC_6("munmap");
  return -1;
 }

 FUNC_0(VAR_11);
 return 0;
}
