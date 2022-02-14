
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int sock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int,char*,char const*) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(const char *VAR_3)
{
 struct sockaddr_un VAR_4;
 int VAR_5, VAR_6;

 VAR_4.sun_family = VAR_0;
 FUNC_2(VAR_4.sun_path, sizeof(VAR_4.sun_path), "%s", VAR_3);

 VAR_5 = FUNC_3(VAR_0, VAR_1, 0);
 if (VAR_5 < 0) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_6 = FUNC_1(VAR_5, (struct sockaddr *) &VAR_4, sizeof(VAR_4));
 if (VAR_6) {
  VAR_6 = -VAR_2;
  goto out_close;
 }

 return VAR_5;

out_close:
 FUNC_0(VAR_5);
out:
 return VAR_6;
}
