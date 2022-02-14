
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {int adapter; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,struct zfcp_port*,int *,char*,void*) ;
 int FUNC_2 (struct zfcp_port*,int) ;
 int FUNC_3 (struct zfcp_port*) ;

__attribute__((used)) static void FUNC_4(struct zfcp_port *VAR_2,
      int VAR_3, char *VAR_4, void *VAR_5)
{
 FUNC_2(VAR_2, VAR_3);
 FUNC_3(VAR_2);

 if (FUNC_0(&VAR_2->status) & VAR_1)
  return;

 FUNC_1(VAR_0,
    VAR_2->adapter, VAR_2, ((void*)0), VAR_4, VAR_5);
}
