
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_dir {int * dhandle; } ;


 int FUNC_0 (char*,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fs_dir*) ;

int FUNC_3(void *VAR_0)
{
   struct fs_dir *VAR_1 = (struct fs_dir *)VAR_0;
   int VAR_2 = -1;

   FUNC_0( "vc_hostfs_closedir(%p)", VAR_0 );

   if (VAR_0 && VAR_1->dhandle)
   {
      (void)FUNC_1(VAR_1->dhandle);
      VAR_1->dhandle = ((void*)0);
      FUNC_2(VAR_1);
      VAR_2 = 0;
   }

   return VAR_2;
}
