
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int ip_addr; } ;
typedef TYPE_1__ ConnectionInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,char const*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_4 () ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,char const*) ;

int FUNC_7(const char *VAR_2, char *VAR_3)
{
 int VAR_4;
 ConnectionInfo *VAR_5;
 ConnectionInfo *VAR_6;
 ConnectionInfo VAR_7;

 VAR_5 = FUNC_4();
 if (VAR_5 == ((void*)0))
 {
  return VAR_1 != 0 ? VAR_1 : VAR_0;
 }

 if ((VAR_4=FUNC_6(VAR_5, &VAR_7, VAR_2)) != 0)

 {
  FUNC_3(VAR_5, 1);
  return VAR_4;
 }

 if ((VAR_6=FUNC_5(&VAR_7, &VAR_4)) == ((void*)0))

 {
  FUNC_2(VAR_5);
  return VAR_4;
 }

 FUNC_1(VAR_3, VAR_7.ip_addr);
 VAR_4 = FUNC_0(VAR_5, VAR_6, VAR_2);

 FUNC_2(VAR_5);
 FUNC_2(VAR_6);

 return VAR_4;
}
