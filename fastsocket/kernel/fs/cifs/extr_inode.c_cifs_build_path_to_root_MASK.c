
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int Flags; int treeName; } ;
struct cifs_sb_info {int prepathlen; int mnt_cifs_flags; int prepath; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;

char *FUNC_3(struct cifs_sb_info *VAR_4,
    struct cifs_tcon *VAR_5)
{
 int VAR_6 = VAR_4->prepathlen;
 int VAR_7;
 char *VAR_8 = ((void*)0);


 if (VAR_6 == 0) {
  VAR_8 = FUNC_0(1, VAR_1);
  if (VAR_8)
   VAR_8[0] = 0;
  return VAR_8;
 }

 if (VAR_5->Flags & VAR_3)
  VAR_7 = FUNC_2(VAR_5->treeName, VAR_2 + 1);
 else
  VAR_7 = 0;

 VAR_8 = FUNC_0(VAR_7 + VAR_6 + 1, VAR_1);
 if (VAR_8 == ((void*)0))
  return VAR_8;

 if (VAR_7) {
  FUNC_1(VAR_8, VAR_5->treeName, VAR_7);



  if (VAR_4->mnt_cifs_flags & VAR_0) {
   int VAR_9;
   for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
    if (VAR_8[VAR_9] == '\\')
     VAR_8[VAR_9] = '/';
   }
  }
 }
 FUNC_1(VAR_8 + VAR_7, VAR_4->prepath, VAR_6);
 VAR_8[VAR_7 + VAR_6] = 0;
 return VAR_8;
}
