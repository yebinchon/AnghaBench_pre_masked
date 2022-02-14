
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconn {int (* callback ) (struct netconn*,int ,int ) ;int acceptmbox; } ;
typedef int mqmsg_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct netconn*,int ,int ) ;

__attribute__((used)) static struct netconn* FUNC_3(struct netconn* VAR_3)
{
 struct netconn *VAR_4;

 if(VAR_3==((void*)0)) return ((void*)0);

 FUNC_0(VAR_0, ("netconn_accept(%p)\n", VAR_3));
 FUNC_1(VAR_3->acceptmbox,(mqmsg_t)&VAR_4,VAR_1);
 if(VAR_3->callback)
  (*VAR_3->callback)(VAR_3,VAR_2,0);

 return VAR_4;
}
