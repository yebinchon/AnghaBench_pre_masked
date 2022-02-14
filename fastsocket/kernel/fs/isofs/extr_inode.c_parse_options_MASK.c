
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct iso9660_options {char map; int rock; int joliet; int cruft; int hide; int showassoc; unsigned char check; int nocompress; int blocksize; int fmode; int dmode; int uid_set; int gid_set; int gid; int uid; int utf8; int overriderockperm; int session; int sbsector; int * iocharset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int *) ;
 char* FUNC_3 (char**,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(char *VAR_3, struct iso9660_options *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 VAR_4->map = 'n';
 VAR_4->rock = 1;
 VAR_4->joliet = 1;
 VAR_4->cruft = 0;
 VAR_4->hide = 0;
 VAR_4->showassoc = 0;
 VAR_4->check = 'u';
 VAR_4->nocompress = 0;
 VAR_4->blocksize = 1024;
 VAR_4->fmode = VAR_4->dmode = VAR_0;
 VAR_4->uid_set = 0;
 VAR_4->gid_set = 0;
 VAR_4->gid = 0;
 VAR_4->uid = 0;
 VAR_4->iocharset = ((void*)0);
 VAR_4->utf8 = 0;
 VAR_4->overriderockperm = 0;
 VAR_4->session=-1;
 VAR_4->sbsector=-1;
 if (!VAR_3)
  return 1;

 while ((VAR_5 = FUNC_3(&VAR_3, ",")) != ((void*)0)) {
  int VAR_7;
  substring_t VAR_8[VAR_1];
  unsigned VAR_9;

  if (!*VAR_5)
   continue;

  VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_8);
  switch (VAR_7) {
  case 135:
   VAR_4->rock = 0;
   break;
  case 136:
   VAR_4->joliet = 0;
   break;
  case 144:
   VAR_4->hide = 1;
   break;
  case 129:
  case 131:
   VAR_4->showassoc = 1;
   break;
  case 147:
   VAR_4->cruft = 1;
   break;
  case 128:
   VAR_4->utf8 = 1;
   break;





  case 141:
   VAR_4->map = 'a';
   break;
  case 139:
   VAR_4->map = 'o';
   break;
  case 140:
   VAR_4->map = 'n';
   break;
  case 132:
   if (FUNC_0(&VAR_8[0], &VAR_6))
    return 0;
   VAR_9 = VAR_6;
   if (VAR_9 > 99)
    return 0;
   VAR_4->session = VAR_9 + 1;
   break;
  case 133:
   if (FUNC_0(&VAR_8[0], &VAR_6))
    return 0;
   VAR_4->sbsector = VAR_6;
   break;
  case 149:
   VAR_4->check = 'r';
   break;
  case 148:
   VAR_4->check = 's';
   break;
  case 143:
   break;
  case 130:
   if (FUNC_0(&VAR_8[0], &VAR_6))
    return 0;
   VAR_4->uid = VAR_6;
   VAR_4->uid_set = 1;
   break;
  case 145:
   if (FUNC_0(&VAR_8[0], &VAR_6))
    return 0;
   VAR_4->gid = VAR_6;
   VAR_4->gid_set = 1;
   break;
  case 138:
   if (FUNC_0(&VAR_8[0], &VAR_6))
    return 0;
   VAR_4->fmode = VAR_6;
   break;
  case 146:
   if (FUNC_0(&VAR_8[0], &VAR_6))
    return 0;
   VAR_4->dmode = VAR_6;
   break;
  case 134:
   VAR_4->overriderockperm = 1;
   break;
  case 150:
   if (FUNC_0(&VAR_8[0], &VAR_6))
    return 0;
   VAR_9 = VAR_6;
   if (VAR_9 != 512 && VAR_9 != 1024 && VAR_9 != 2048)
    return 0;
   VAR_4->blocksize = VAR_9;
   break;
  case 137:
   VAR_4->nocompress = 1;
   break;
  default:
   return 0;
  }
 }
 return 1;
}
