
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int port; int sock; int ip_addr; } ;
typedef TYPE_1__ ConnectionInfo ;


 int FUNC_0 (TYPE_1__*,int const) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int*) ;

int FUNC_4(const char *VAR_0, const int VAR_1, const int VAR_2)
{
 ConnectionInfo *VAR_3;
 ConnectionInfo VAR_4;
 int VAR_5;

 FUNC_1(VAR_4.ip_addr, VAR_0);
 VAR_4.port = VAR_1;
 VAR_4.sock = -1;
 if ((VAR_3=FUNC_3(&VAR_4, &VAR_5)) == ((void*)0))
 {
  return VAR_5;
 }

 VAR_5 = FUNC_0(VAR_3, VAR_2);
 FUNC_2(VAR_3, VAR_5 != 0);
 return VAR_5;
}
