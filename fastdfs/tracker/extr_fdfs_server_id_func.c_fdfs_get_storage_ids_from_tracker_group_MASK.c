
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_3__ {int server_count; int leader_index; int * servers; } ;
typedef TYPE_1__ TrackerServerGroup ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int) ;

int FUNC_4(TrackerServerGroup *VAR_1)
{
 TrackerServerInfo *VAR_2;
 TrackerServerInfo *VAR_3;
 TrackerServerInfo *VAR_4;
 TrackerServerInfo *VAR_5;
 TrackerServerInfo VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_3 = &VAR_6;
 VAR_5 = VAR_1->servers + VAR_1->server_count;

 VAR_8 = VAR_1->leader_index;
 if (VAR_8 >= 0)
 {
  VAR_4 = VAR_1->servers + VAR_8;
 }
 else
 {
  VAR_4 = VAR_1->servers;
 }

 VAR_7 = VAR_0;
 for (VAR_9=0; VAR_9<5; VAR_9++)
 {
  for (VAR_2=VAR_4; VAR_2<VAR_5; VAR_2++)
  {
   FUNC_2(VAR_3, VAR_2, sizeof(TrackerServerInfo));
            FUNC_1(VAR_3);
   VAR_7 = FUNC_0(VAR_3);
   if (VAR_7 == 0)
   {
    return VAR_7;
   }
  }

  if (VAR_4 != VAR_1->servers)
  {
   VAR_4 = VAR_1->servers;
  }
  FUNC_3(1);
 }

 return VAR_7;
}
