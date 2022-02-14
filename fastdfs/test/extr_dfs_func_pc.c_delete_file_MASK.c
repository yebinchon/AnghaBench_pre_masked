
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ip_addr; } ;
typedef TYPE_1__ ConnectionInfo ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,char const*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,char const*) ;

int FUNC_4(const char *VAR_1, char *VAR_2)
{
 int VAR_3;
 ConnectionInfo VAR_4;
 ConnectionInfo *VAR_5;

 if ((VAR_3=FUNC_3(VAR_0,
   &VAR_4, VAR_1)) != 0)
 {
  return VAR_3;
 }

 if ((VAR_5=FUNC_0(&VAR_4,
   &VAR_3)) == ((void*)0))
 {
  return VAR_3;
 }

 FUNC_2(VAR_2, VAR_4.ip_addr);
 VAR_3 = FUNC_1(VAR_0, VAR_5, VAR_1);

 return VAR_3;
}
