
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_3__ {int server_index; int server_count; int * servers; } ;
typedef TYPE_1__ TrackerServerGroup ;
typedef int ConnectionInfo ;


 int * FUNC_0 (int *,int*) ;

ConnectionInfo *FUNC_1(TrackerServerGroup *VAR_0)
{
 ConnectionInfo *VAR_1;
 TrackerServerInfo *VAR_2;
 TrackerServerInfo *VAR_3;
 TrackerServerInfo *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = VAR_0->server_index;
 if (VAR_5 >= VAR_0->server_count)
 {
  VAR_5 = 0;
 }

 do
 {
 VAR_2 = VAR_0->servers + VAR_5;
 if ((VAR_1=FUNC_0(VAR_2, &VAR_6)) != ((void*)0))
 {
  break;
 }

 VAR_4 = VAR_0->servers + VAR_0->server_count;
 for (VAR_3=VAR_2+1; VAR_3<VAR_4; VAR_3++)
 {
  if ((VAR_1=FUNC_0(VAR_3, &VAR_6)) != ((void*)0))
  {
   VAR_0->server_index = VAR_3 -
       VAR_0->servers;
   break;
  }
 }

 if (VAR_1 != ((void*)0))
 {
  break;
 }

 for (VAR_3=VAR_0->servers; VAR_3<VAR_2; VAR_3++)
 {
  if ((VAR_1=FUNC_0(VAR_3, &VAR_6)) != ((void*)0))
  {
   VAR_0->server_index = VAR_3 -
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

 return VAR_1;
}
