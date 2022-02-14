
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection_params {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static void FUNC_1(struct tls_connection_params *VAR_3,
     const char *VAR_4)
{
 if (VAR_4 == ((void*)0))
  return;
 if (FUNC_0(VAR_4, "tls_allow_md5=1"))
  VAR_3->flags |= VAR_0;
 if (FUNC_0(VAR_4, "tls_disable_time_checks=1"))
  VAR_3->flags |= VAR_2;
 if (FUNC_0(VAR_4, "tls_disable_session_ticket=1"))
  VAR_3->flags |= VAR_1;
 if (FUNC_0(VAR_4, "tls_disable_session_ticket=0"))
  VAR_3->flags &= ~VAR_1;
}
