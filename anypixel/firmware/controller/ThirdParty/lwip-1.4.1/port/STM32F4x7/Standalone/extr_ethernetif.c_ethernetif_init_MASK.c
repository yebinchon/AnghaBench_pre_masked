
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {char* hostname; int linkoutput; int output; int * name; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct netif*) ;
 int VAR_4 ;

err_t FUNC_2(struct netif *VAR_5)
{
  FUNC_0("netif != NULL", (VAR_5 != ((void*)0)));






  VAR_5->name[0] = VAR_1;
  VAR_5->name[1] = VAR_2;




  VAR_5->output = VAR_3;
  VAR_5->linkoutput = VAR_4;


  FUNC_1(VAR_5);

  return VAR_0;
}
