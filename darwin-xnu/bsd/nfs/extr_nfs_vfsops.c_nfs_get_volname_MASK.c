
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* f_mntfromname; } ;
struct mount {TYPE_1__ mnt_vfsstat; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (char const*,int) ;

__attribute__((used)) static void
FUNC_2(struct mount *VAR_1, char *VAR_2, size_t VAR_3)
{
 const char *VAR_4, *VAR_5;
 const char *VAR_6 = VAR_1->mnt_vfsstat.f_mntfromname;
 size_t VAR_7 = FUNC_1(VAR_6, VAR_0+1);

 if (VAR_7 > VAR_0 || VAR_7 == 0) {
  FUNC_0(VAR_2, "Bad volname", VAR_3);
  return;
 }


 for (VAR_4 = &VAR_6[VAR_7-1]; VAR_4 != VAR_6 && *VAR_4 == '/'; VAR_4--) {
  VAR_7--;
 }


 VAR_5 = VAR_4 = ((void*)0);
 for(size_t VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_6[VAR_8] == '/')
   VAR_4 = &VAR_6[VAR_8+1];

  else if (VAR_5 == ((void*)0) && VAR_6[VAR_8] == ':')
   VAR_5 = &VAR_6[VAR_8+1];
 }





 if (VAR_4 == ((void*)0) || *VAR_4 == '\0')
  VAR_4 = VAR_5;

 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_6;

 VAR_7 = &VAR_6[VAR_7] - VAR_4;
 VAR_3 = VAR_7+1 < VAR_3 ? VAR_7+1 : VAR_3;

 FUNC_0(VAR_2, VAR_4, VAR_3);
}
