
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
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5()
{
 TrackerServerInfo *VAR_4;
 TrackerServerInfo *VAR_5;
 ConnectionInfo *VAR_6;
 TrackerServerInfo VAR_7;
 int VAR_8;

 VAR_8 = VAR_0;
 VAR_5 = VAR_3.servers + VAR_3.server_count;
 for (VAR_4=VAR_3.servers;
  VAR_4<VAR_5; VAR_4++)
 {
  FUNC_1(&VAR_7, VAR_4,
   sizeof(TrackerServerInfo));
        FUNC_0(&VAR_7);
        if ((VAR_6=FUNC_3(&VAR_7,
   &VAR_8)) == ((void*)0))
  {
   continue;
  }

  VAR_8 = FUNC_4(VAR_6,
   VAR_1, VAR_2, VAR_2);
  FUNC_2(VAR_6,
   VAR_8 != 0 && VAR_8 != VAR_0);
  if (VAR_8 == 0)
  {
   return 0;
  }
 }

 return VAR_8;
}
