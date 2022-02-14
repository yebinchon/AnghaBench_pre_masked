
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_2__ {int server_count; int * servers; } ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int*) ;

__attribute__((used)) static int FUNC_5()
{
 TrackerServerInfo *VAR_2;
 TrackerServerInfo *VAR_3;
 ConnectionInfo *VAR_4;
 TrackerServerInfo VAR_5;
 int VAR_6;

 VAR_6 = VAR_0;
 VAR_3 = VAR_1.servers + VAR_1.server_count;
 for (VAR_2=VAR_1.servers;
  VAR_2<VAR_3; VAR_2++)
 {
  FUNC_1(&VAR_5, VAR_2, sizeof(TrackerServerInfo));
        FUNC_0(&VAR_5);
        if ((VAR_4=FUNC_4(&VAR_5,
   &VAR_6)) == ((void*)0))
  {
   continue;
  }

        VAR_6 = FUNC_2(VAR_4);
  FUNC_3(VAR_4,
   VAR_6 != 0 && VAR_6 != VAR_0);
  if (VAR_6 == 0)
  {
   return 0;
  }
 }

 return VAR_6;
}
