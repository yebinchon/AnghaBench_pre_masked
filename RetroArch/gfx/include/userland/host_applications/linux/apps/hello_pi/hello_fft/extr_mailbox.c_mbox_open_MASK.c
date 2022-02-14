
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*,...) ;

int FUNC_3() {
   int VAR_2;


   VAR_2 = FUNC_1(VAR_0, 0);
   if (VAR_2 < 0) {
      FUNC_2("Can't open device file: %s\n", VAR_0);
      FUNC_2("Try creating a device file with: sudo mknod %s c %d 0\n", VAR_0, VAR_1);
      FUNC_0(-1);
   }
   return VAR_2;
}
