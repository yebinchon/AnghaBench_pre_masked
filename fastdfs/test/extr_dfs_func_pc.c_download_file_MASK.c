
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int ip_addr; } ;
typedef TYPE_1__ ConnectionInfo ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int*) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*,char const*,int ,int ,int ,int *,int*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,char const*) ;

int FUNC_4(const char *VAR_2, int *VAR_3, char *VAR_4)
{
 int VAR_5;
 ConnectionInfo VAR_6;
 ConnectionInfo *VAR_7;
 int64_t VAR_8;

 if ((VAR_5=FUNC_3(VAR_1,
   &VAR_6, VAR_2)) != 0)
 {
  return VAR_5;
 }

 if ((VAR_7=FUNC_0(&VAR_6,
   &VAR_5)) == ((void*)0))
 {
  return VAR_5;
 }

 FUNC_2(VAR_4, VAR_6.ip_addr);
 VAR_5 = FUNC_1(VAR_1, VAR_7,
   VAR_2, 0, 0, VAR_0, ((void*)0), &VAR_8);
 *VAR_3 = VAR_8;

 return VAR_5;
}
