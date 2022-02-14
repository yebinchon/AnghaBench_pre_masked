
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_info_t ;
typedef int input_driver_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;

__attribute__((used)) static void *FUNC_2(const video_info_t *VAR_0,
      input_driver_t **VAR_1, void **VAR_2)
{
   (void)VAR_0;
   (void)VAR_1;
   (void)VAR_2;
   FUNC_0("Sanity check fail! Threaded mustn't be reinit.\n");
   FUNC_1();
   return ((void*)0);
}
