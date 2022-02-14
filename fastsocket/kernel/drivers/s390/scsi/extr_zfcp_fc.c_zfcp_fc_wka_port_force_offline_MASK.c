
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_wka_port {int mutex; int status; int work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct zfcp_wka_port *VAR_1)
{
 FUNC_0(&VAR_1->work);
 FUNC_1(&VAR_1->mutex);
 VAR_1->status = VAR_0;
 FUNC_2(&VAR_1->mutex);
}
