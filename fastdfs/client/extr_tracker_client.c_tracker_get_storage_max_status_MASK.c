
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_6__ {int server_count; int * servers; } ;
typedef TYPE_1__ TrackerServerGroup ;
struct TYPE_7__ {int status; int id; } ;
typedef TYPE_2__ FDFSStorageBrief ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,char const*,char const*,TYPE_2__*) ;

int FUNC_7(TrackerServerGroup *VAR_1, const char *VAR_2, const char *VAR_3, char *VAR_4, int *VAR_5)


{
 ConnectionInfo *VAR_6;
 TrackerServerInfo VAR_7;
 TrackerServerInfo *VAR_8;
 TrackerServerInfo *VAR_9;
 FDFSStorageBrief VAR_10;
 int VAR_11;

 FUNC_2(&VAR_10, 0, sizeof(FDFSStorageBrief));
 VAR_10.status = -1;

 *VAR_4 = '\0';
 *VAR_5 = -1;
 VAR_9 = VAR_1->servers + VAR_1->server_count;
 for (VAR_8=VAR_1->servers; VAR_8<VAR_9; VAR_8++)
 {
  FUNC_1(&VAR_7, VAR_8, sizeof(TrackerServerInfo));
        FUNC_0(&VAR_7);
  if ((VAR_6=FUNC_5(&VAR_7, &VAR_11)) == ((void*)0))
  {
   return VAR_11;
  }

  VAR_11 = FUNC_6(VAR_6, VAR_2, VAR_3, &VAR_10);

  FUNC_4(VAR_6, VAR_11 != 0);

  if (VAR_11 != 0)
  {
   if (VAR_11 == VAR_0)
   {
    continue;
   }
   return VAR_11;
  }

  FUNC_3(VAR_4, VAR_10.id);
  if (VAR_10.status > *VAR_5)
  {
   *VAR_5 = VAR_10.status;
  }
 }

 if (*VAR_5 == -1)
 {
  return VAR_0;
 }

 return 0;
}
