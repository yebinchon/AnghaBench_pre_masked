
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (struct sockaddr_un*,int ,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,int ,int ,struct timeval*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char const*,int) ;

int
FUNC_7(const char * VAR_6)
{
 int VAR_7;
 struct sockaddr_un VAR_8;




 VAR_7 = FUNC_5(VAR_0, VAR_2, 0);
 if(VAR_7 < 0)
 {

  FUNC_3("socket(unix)");
  return VAR_1;
 }
 if(!VAR_6)
  VAR_6 = "/var/run/minissdpd.sock";
 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.sun_family = VAR_0;
 FUNC_6(VAR_8.sun_path, VAR_6, sizeof(VAR_8.sun_path));

 if(FUNC_1(VAR_7, (struct sockaddr *)&VAR_8, sizeof(struct sockaddr_un)) < 0)
 {

  FUNC_0(VAR_7);
  return VAR_1;
 }
 return VAR_7;
}
