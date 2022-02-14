
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_3__ {scalar_t__ server_count; int * servers; } ;
typedef TYPE_1__ TrackerServerGroup ;


 scalar_t__ FUNC_0 (int *,char const*,int const) ;

int FUNC_1(TrackerServerGroup *VAR_0,
  const char *VAR_1, const int VAR_2)
{
 TrackerServerInfo *VAR_3;
 TrackerServerInfo *VAR_4;

 if (VAR_0->server_count == 0)
 {
  return -1;
 }

 VAR_4 = VAR_0->servers + VAR_0->server_count;
 for (VAR_3=VAR_0->servers; VAR_3<VAR_4; VAR_3++)
 {
        if (FUNC_0(VAR_3, VAR_1, VAR_2))
  {
   return VAR_3 - VAR_0->servers;
  }
 }

 return -1;
}
