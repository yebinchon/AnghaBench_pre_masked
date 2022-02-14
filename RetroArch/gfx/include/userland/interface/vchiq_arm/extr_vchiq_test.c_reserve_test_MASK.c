
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(int VAR_2, int VAR_3)
{
   int VAR_4 = FUNC_2("/dev/vc-cma", VAR_0);
   int VAR_5 = -1;
   if (VAR_4 >= 0)
   {
      VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_2);
      if (VAR_5 == 0)
      {
         FUNC_3("Sleeping for %d seconds...\n", VAR_3);
         FUNC_4(VAR_3);
      }
      else
         FUNC_3("* failed to ioctl /dev/vc-cma - rc %d\n", VAR_5);
      FUNC_0(VAR_4);
   }
   else
      FUNC_3("* failed to open /dev/vc-cma - rc %d\n", VAR_4);
}
