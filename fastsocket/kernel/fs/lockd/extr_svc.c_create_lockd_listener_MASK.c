
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int dummy; } ;
struct svc_serv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct svc_serv*,char const*,int *,int const,unsigned short const,int ) ;
 struct svc_xprt* FUNC_1 (struct svc_serv*,char const*,int const,int ) ;
 int FUNC_2 (struct svc_xprt*) ;

__attribute__((used)) static int FUNC_3(struct svc_serv *VAR_2, const char *VAR_3,
     const int VAR_4, const unsigned short VAR_5)
{
 struct svc_xprt *VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, 0);
 if (VAR_6 == ((void*)0))
  return FUNC_0(VAR_2, VAR_3, &VAR_1, VAR_4, VAR_5,
      VAR_0);
 FUNC_2(VAR_6);
 return 0;
}
