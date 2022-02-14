
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;

void FUNC_3(int VAR_0)
{
   int VAR_1 = FUNC_1();
   int VAR_2 = 0, VAR_3 = 0;
   FUNC_0(&VAR_2, &VAR_3);
   if (!VAR_2)
      FUNC_2("Camera is not enabled in this build. Try running \"sudo raspi-config\" and ensure that \"camera\" has been enabled\n");
   else if (VAR_1 < VAR_0)
      FUNC_2("Only %dM of gpu_mem is configured. Try running \"sudo raspi-config\" and ensure that \"memory_split\" has a value of %d or greater\n", VAR_1, VAR_0);
   else if (!VAR_3)
      FUNC_2("Camera is not detected. Please check carefully the camera module is installed correctly\n");
   else
      FUNC_2("Failed to run camera app. Please check for firmware updates\n");
}
