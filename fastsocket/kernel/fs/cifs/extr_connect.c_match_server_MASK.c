
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct smb_vol {int srcaddr; } ;
struct TCP_Server_Info {int dummy; } ;


 int FUNC_0 (struct TCP_Server_Info*,struct sockaddr*,struct sockaddr*) ;
 int FUNC_1 (struct TCP_Server_Info*,struct sockaddr*) ;
 int FUNC_2 (struct TCP_Server_Info*,struct smb_vol*) ;

__attribute__((used)) static int FUNC_3(struct TCP_Server_Info *VAR_0, struct sockaddr *VAR_1,
    struct smb_vol *VAR_2)
{
 if (!FUNC_0(VAR_0, VAR_1,
      (struct sockaddr *)&VAR_2->srcaddr))
  return 0;

 if (!FUNC_1(VAR_0, VAR_1))
  return 0;

 if (!FUNC_2(VAR_0, VAR_2))
  return 0;

 return 1;
}
