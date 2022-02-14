
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_sid {int num_subauth; int * sub_auth; int revision; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,struct cifs_sid*) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct cifs_sid *VAR_1, char *VAR_2)
{




 if (VAR_2 < (char *)VAR_1 + 8) {
  FUNC_0(1, "ACL too small to parse SID %p", VAR_1);
  return -VAR_0;
 }
 return 0;
}
