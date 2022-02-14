
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {int * iocharset; int * local_nls; int * username; scalar_t__ nullauth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (char*,char const*,struct smb_vol*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int,int ) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(struct smb_vol *VAR_4, char *VAR_5,
   const char *VAR_6)
{
 int VAR_7 = 0;

 if (FUNC_2(VAR_5, VAR_6, VAR_4))
  return -VAR_0;

 if (VAR_4->nullauth) {
  FUNC_1(1, "null user");
  VAR_4->username = FUNC_4(1, VAR_3);
  if (VAR_4->username == ((void*)0))
   return -VAR_2;
 } else if (VAR_4->username) {

  FUNC_1(1, "Username: %s", VAR_4->username);
 } else {
  FUNC_3("No username specified");


  return -VAR_0;
 }


 if (VAR_4->iocharset == ((void*)0)) {

  VAR_4->local_nls = FUNC_6();
 } else {
  VAR_4->local_nls = FUNC_5(VAR_4->iocharset);
  if (VAR_4->local_nls == ((void*)0)) {
   FUNC_0(1, "CIFS mount error: iocharset %s not found",
     VAR_4->iocharset);
   return -VAR_1;
  }
 }

 return VAR_7;
}
