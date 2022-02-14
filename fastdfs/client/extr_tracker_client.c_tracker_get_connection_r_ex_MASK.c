
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_3__ {int server_index; int server_count; int * servers; } ;
typedef TYPE_1__ TrackerServerGroup ;
typedef int ConnectionInfo ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int *,int*) ;

ConnectionInfo *FUNC_3(TrackerServerGroup *VAR_0,
  TrackerServerInfo *VAR_1, int *VAR_2)
{
 ConnectionInfo *VAR_3;
 TrackerServerInfo *VAR_4;
 TrackerServerInfo *VAR_5;
 TrackerServerInfo *VAR_6;
 int VAR_7;

 VAR_7 = VAR_0->server_index;
 if (VAR_7 >= VAR_0->server_count)
 {
  VAR_7 = 0;
 }

 do
 {
 VAR_4 = VAR_0->servers + VAR_7;
 FUNC_1(VAR_1, VAR_4, sizeof(TrackerServerInfo));
    FUNC_0(VAR_1);
 if ((VAR_3=FUNC_2(VAR_1, VAR_2)) != ((void*)0))
 {
  break;
 }

 VAR_6 = VAR_0->servers + VAR_0->server_count;
 for (VAR_5=VAR_4+1; VAR_5<VAR_6; VAR_5++)
 {
  FUNC_1(VAR_1, VAR_5, sizeof(TrackerServerInfo));
        FUNC_0(VAR_1);
  if ((VAR_3=FUNC_2(VAR_1, VAR_2)) != ((void*)0))
  {
   VAR_0->server_index = VAR_5 -
       VAR_0->servers;
   break;
  }
 }

 if (VAR_3 != ((void*)0))
 {
  break;
 }

 for (VAR_5=VAR_0->servers; VAR_5<VAR_4; VAR_5++)
 {
  FUNC_1(VAR_1, VAR_5, sizeof(TrackerServerInfo));
        FUNC_0(VAR_1);
  if ((VAR_3=FUNC_2(VAR_1, VAR_2)) != ((void*)0))
  {
   VAR_0->server_index = VAR_5 -
       VAR_0->servers;
   break;
  }
 }
 } while (0);

 VAR_0->server_index++;
 if (VAR_0->server_index >= VAR_0->server_count)
 {
  VAR_0->server_index = 0;
 }

 return VAR_3;
}
