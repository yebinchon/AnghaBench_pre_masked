
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct zfcp_adapter*,int *,int *,char*,void*) ;
 int FUNC_2 (struct zfcp_adapter*,int) ;
 int FUNC_3 (struct zfcp_adapter*,char*,int *) ;
 int FUNC_4 (struct zfcp_adapter*) ;

__attribute__((used)) static int FUNC_5(struct zfcp_adapter *VAR_3,
        int VAR_4, char *VAR_5, void *VAR_6)
{
 FUNC_2(VAR_3, VAR_4);
 FUNC_4(VAR_3);


 if (FUNC_0(&VAR_3->status) & VAR_2) {
  FUNC_3(VAR_3, "erareo1", ((void*)0));
  return -VAR_0;
 }
 return FUNC_1(VAR_1,
           VAR_3, ((void*)0), ((void*)0), VAR_5, VAR_6);
}
