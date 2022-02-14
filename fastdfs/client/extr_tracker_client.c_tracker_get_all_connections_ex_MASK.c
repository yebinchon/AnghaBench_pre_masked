
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_3__ {int server_count; int * servers; } ;
typedef TYPE_1__ TrackerServerGroup ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int*) ;

int FUNC_2(TrackerServerGroup *VAR_1)
{
 TrackerServerInfo *VAR_2;
 TrackerServerInfo *VAR_3;
    ConnectionInfo *VAR_4;
    int VAR_5;
 int VAR_6;

 VAR_6 = 0;
 VAR_3 = VAR_1->servers + VAR_1->server_count;
 for (VAR_2=VAR_1->servers; VAR_2<VAR_3; VAR_2++)
 {
  if ((VAR_4=FUNC_1(VAR_2, &VAR_5)) != ((void*)0))
  {
   FUNC_0(VAR_4);
   VAR_6++;
  }
 }

 return VAR_6 > 0 ? 0 : VAR_0;
}
