
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {int dummy; } ;


 int VAR_0 ;
 struct smb_vol* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct smb_vol*) ;
 int FUNC_2 (struct smb_vol*,char*,char const*) ;
 struct smb_vol* FUNC_3 (int,int ) ;

struct smb_vol *
FUNC_4(char *VAR_2, const char *VAR_3)
{
 int VAR_4;
 struct smb_vol *VAR_5;

 VAR_5 = FUNC_3(sizeof(struct smb_vol), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_2(VAR_5, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_5);
  VAR_5 = FUNC_0(VAR_4);
 }

 return VAR_5;
}
