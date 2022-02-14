
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int ip_addr; } ;
typedef TYPE_1__ ConnectionInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int,char const*,int const,int *,int *,int ,char*,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_4 () ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,char*,int*) ;

int FUNC_7(const char *VAR_3, const int VAR_4, char *VAR_5, char *VAR_6)
{
 int VAR_7;
 int VAR_8;
 char VAR_9[VAR_1 + 1];
 ConnectionInfo *VAR_10;
 ConnectionInfo *VAR_11;
 ConnectionInfo VAR_12;

 VAR_10 = FUNC_4();
 if (VAR_10 == ((void*)0))
 {
  return VAR_2 != 0 ? VAR_2 : VAR_0;
 }

 *VAR_9 = '\0';
 if ((VAR_7=FUNC_6(VAR_10, &VAR_12,
    VAR_9, &VAR_8)) != 0)
 {
  FUNC_3(VAR_10, 1);
  return VAR_7;
 }

 if ((VAR_11=FUNC_5(&VAR_12, &VAR_7)) == ((void*)0))

 {
  FUNC_2(VAR_10);
  return VAR_7;
 }

 FUNC_1(VAR_6, VAR_12.ip_addr);
 VAR_7 = FUNC_0(VAR_10, VAR_11,
  VAR_8, VAR_3, VAR_4, ((void*)0), ((void*)0), 0, "", VAR_5);

 FUNC_2(VAR_10);
 FUNC_2(VAR_11);

 return VAR_7;
}
