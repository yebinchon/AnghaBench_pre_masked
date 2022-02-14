
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
typedef int FILE_ALL_INFO ;


 int FUNC_0 (int,struct cifs_tcon*,char const*,int *,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,struct cifs_tcon*,char const*,int *,int ,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;

__attribute__((used)) static int
FUNC_4(int VAR_5, struct cifs_tcon *VAR_6,
     struct cifs_sb_info *VAR_7, const char *VAR_8)
{
 int VAR_9;
 FILE_ALL_INFO *VAR_10;

 VAR_10 = FUNC_3(sizeof(FILE_ALL_INFO), VAR_4);
 if (VAR_10 == ((void*)0))
  return -VAR_2;

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_8, VAR_10,
         0 , VAR_7->local_nls,
         VAR_7->mnt_cifs_flags &
    VAR_0);

 if (VAR_9 == -VAR_3 || VAR_9 == -VAR_1)
  VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_8, VAR_10,
    VAR_7->local_nls, VAR_7->mnt_cifs_flags &
      VAR_0);
 FUNC_2(VAR_10);
 return VAR_9;
}
