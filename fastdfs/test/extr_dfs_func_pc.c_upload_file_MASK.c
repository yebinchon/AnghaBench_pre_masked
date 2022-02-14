
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ip_addr; } ;
typedef TYPE_1__ ConnectionInfo ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int*) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*,int,char const*,int const,int *,int *,int ,char*,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,char*,int*) ;

int FUNC_4(const char *VAR_2, const int VAR_3, char *VAR_4,
  char *VAR_5)
{
 int VAR_6;
 int VAR_7;
 char VAR_8[VAR_0 + 1];
 ConnectionInfo VAR_9;
 ConnectionInfo *VAR_10;

 *VAR_8 = '\0';
 if ((VAR_6=FUNC_3(VAR_1, &VAR_9,
    VAR_8, &VAR_7)) != 0)
 {
  return VAR_6;
 }


 if ((VAR_10=FUNC_0(&VAR_9,
   &VAR_6)) == ((void*)0))
 {
  return VAR_6;
 }

 FUNC_2(VAR_5, VAR_9.ip_addr);
 VAR_6 = FUNC_1(VAR_1, VAR_10,
  VAR_7, VAR_2, VAR_3, ((void*)0), ((void*)0), 0, "", VAR_4);

 return VAR_6;
}
