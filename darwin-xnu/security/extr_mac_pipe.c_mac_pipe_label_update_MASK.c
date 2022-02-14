
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe {int pipe_label; } ;
struct label {int dummy; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,struct pipe*,int ,struct label*) ;
 int FUNC_1 (int ,struct pipe*,struct label*) ;
 int VAR_0 ;

int
FUNC_2(kauth_cred_t VAR_1, struct pipe *VAR_2,
    struct label *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return (VAR_4);

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_2->pipe_label, VAR_3);

 return (0);
}
