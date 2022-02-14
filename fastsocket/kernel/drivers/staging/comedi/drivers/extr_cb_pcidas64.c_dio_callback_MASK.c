
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,void*) ;

__attribute__((used)) static int FUNC_3(int VAR_0, int VAR_1, int VAR_2, unsigned long VAR_3)
{
 if (VAR_0) {
  FUNC_2(VAR_2, (void *)(VAR_3 + VAR_1));
  FUNC_0("wrote 0x%x to port %i\n", VAR_2, VAR_1);
  return 0;
 } else {
  return FUNC_1((void *)(VAR_3 + VAR_1));
 }
}
