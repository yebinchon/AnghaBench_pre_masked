
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; int st_mtime; int st_ctime; } ;
struct fs_dirent {char* d_name; unsigned int d_size; int d_attrib; int d_modtime; int d_creatime; } ;
struct fs_dir {char* pathbuf; size_t pathlen; int dhandle; } ;
struct dirent {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 struct dirent* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (char*,int ,int,size_t) ;

struct fs_dirent *FUNC_5(void *VAR_5, struct fs_dirent *VAR_6)
{
   struct fs_dir *VAR_7 = (struct fs_dir *)VAR_5;

   FUNC_0( "vc_hostfs_readdir_r(%p)", VAR_7 );

   if (VAR_7 && VAR_6)
   {
      struct dirent *VAR_8;

      while ((VAR_8 = FUNC_1(VAR_7->dhandle)) != ((void*)0))
      {
         struct stat VAR_9;
         int VAR_10;


         VAR_7->pathbuf[VAR_7->pathlen] = '/';
         FUNC_4(VAR_7->pathbuf, VAR_8->d_name, sizeof(VAR_7->pathbuf), VAR_7->pathlen + 1);
         VAR_10 = FUNC_3(VAR_7->pathbuf, &VAR_9);
         VAR_7->pathbuf[VAR_7->pathlen] = '\0';

         if (VAR_10 == 0)
         {
            FUNC_4(VAR_6->d_name, VAR_8->d_name, sizeof(VAR_6->d_name), 0);
            VAR_6->d_size = (VAR_9.st_size <= 0xffffffff) ? (unsigned int)VAR_9.st_size : 0xffffffff;
            VAR_6->d_attrib = VAR_1;
            if ((VAR_9.st_mode & VAR_4) == 0)
               VAR_6->d_attrib |= VAR_2;
            if (VAR_9.st_mode & VAR_3)
               VAR_6->d_attrib |= VAR_0;
            VAR_6->d_creatime = VAR_9.st_ctime;
            VAR_6->d_modtime = VAR_9.st_mtime;
            FUNC_0( "vc_hostfs_readdir_r() = '%s', %x, %x", VAR_6->d_name, VAR_6->d_size, VAR_6->d_attrib );
            break;
         }
      }

      if (!VAR_8)
      {
         FUNC_0( "vc_hostfs_readdir_r() = NULL" );
         FUNC_2(VAR_7->dhandle);
         VAR_6 = ((void*)0);
      }
   }
   else
   {
      VAR_6 = ((void*)0);
   }

   return VAR_6;
}
