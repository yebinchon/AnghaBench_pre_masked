
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ,void*) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static int FUNC_2(int VAR_1, void *VAR_2)
{
   int VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2);

   if (VAR_3 < 0) {
      FUNC_1("ioctl_set_msg failed:%d\n", VAR_3);
   }






   return VAR_3;
}
