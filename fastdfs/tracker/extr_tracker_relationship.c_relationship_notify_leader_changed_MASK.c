
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_2__ {int server_count; int * servers; } ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (int *,int *,int*) ;

__attribute__((used)) static int FUNC_2(ConnectionInfo *VAR_2)
{
 TrackerServerInfo *VAR_3;
 TrackerServerInfo *VAR_4;
 int VAR_5;
 bool VAR_6;
 int VAR_7;

 VAR_5 = VAR_0;
 VAR_4 = VAR_1.servers + VAR_1.server_count;
 VAR_7 = 0;
 for (VAR_3=VAR_1.servers; VAR_3<VAR_4; VAR_3++)

 {
  if ((VAR_5=FUNC_1(VAR_3, VAR_2, &VAR_6)) != 0)

  {
   if (!VAR_6)
   {
    return VAR_5;
   }
  }
  else
  {
   VAR_7++;
  }
 }

 if (VAR_7 == 0)
 {
  return VAR_5;
 }

 VAR_5 = VAR_0;
 VAR_7 = 0;
 for (VAR_3=VAR_1.servers; VAR_3<VAR_4; VAR_3++)

 {
  if ((VAR_5=FUNC_0(VAR_3, VAR_2, &VAR_6)) != 0)

  {
   if (!VAR_6)
   {
    return VAR_5;
   }
  }
  else
  {
   VAR_7++;
  }
 }
 if (VAR_7 == 0)
 {
  return VAR_5;
 }

 return 0;
}
