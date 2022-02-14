
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {int ip_addr; } ;
typedef TYPE_1__ ConnectionInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,char const*,int ,int ,int ,int *,int*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_4 () ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,char const*) ;

int FUNC_7(const char *VAR_3, int *VAR_4, char *VAR_5)
{
 int VAR_6;
 ConnectionInfo *VAR_7;
 ConnectionInfo *VAR_8;
 ConnectionInfo VAR_9;
 int64_t VAR_10;

 VAR_7 = FUNC_4();
 if (VAR_7 == ((void*)0))
 {
  return VAR_2 != 0 ? VAR_2 : VAR_0;
 }

 if ((VAR_6=FUNC_6(VAR_7, &VAR_9, VAR_3)) != 0)

 {
  FUNC_3(VAR_7, 1);
  return VAR_6;
 }

 if ((VAR_8=FUNC_5(&VAR_9, &VAR_6)) == ((void*)0))

 {
  FUNC_2(VAR_7);
  return VAR_6;
 }

 FUNC_1(VAR_5, VAR_9.ip_addr);
 VAR_6 = FUNC_0(VAR_7, VAR_8, VAR_3, 0, 0, VAR_1, ((void*)0), &VAR_10);

 *VAR_4 = VAR_10;

 FUNC_2(VAR_7);
 FUNC_2(VAR_8);

 return VAR_6;
}
