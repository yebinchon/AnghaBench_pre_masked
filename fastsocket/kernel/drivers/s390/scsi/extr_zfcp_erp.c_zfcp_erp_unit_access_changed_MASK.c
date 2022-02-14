
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_unit {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct zfcp_unit*,int ,char*,void*) ;

__attribute__((used)) static void FUNC_2(struct zfcp_unit *VAR_3, char *VAR_4,
      void *VAR_5)
{
 int VAR_6 = FUNC_0(&VAR_3->status);
 if (!(VAR_6 & (VAR_1 |
   VAR_0)))
  return;

 FUNC_1(VAR_3, VAR_2, VAR_4, VAR_5);
}
