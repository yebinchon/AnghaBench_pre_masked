
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_2__ {int leader_index; int * servers; } ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int*) ;

__attribute__((used)) static int FUNC_3()
{
 int VAR_3;
 int VAR_4;
 TrackerServerInfo *VAR_5;
    ConnectionInfo *VAR_6;

 if (VAR_1)
 {
  return 0;
 }

 VAR_4 = VAR_2.leader_index;
 if (VAR_4 < 0)
 {
  return VAR_0;
 }

 VAR_5 = VAR_2.servers + VAR_4;
    if ((VAR_6=FUNC_2(VAR_5, &VAR_3)) == ((void*)0))
    {
        return VAR_3;
 }

 VAR_3 = FUNC_0(VAR_6);
    FUNC_1(VAR_6, VAR_3 != 0);
 return VAR_3;
}
