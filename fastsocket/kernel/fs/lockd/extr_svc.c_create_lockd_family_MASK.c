
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int dummy; } ;


 int FUNC_0 (struct svc_serv*,char*,int const,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct svc_serv *VAR_2, const int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, "udp", VAR_3, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(VAR_2, "tcp", VAR_3, VAR_0);
}
