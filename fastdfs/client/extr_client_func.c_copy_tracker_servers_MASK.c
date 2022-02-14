
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TrackerServerInfo ;
struct TYPE_4__ {int server_count; int servers; } ;
typedef TYPE_1__ TrackerServerGroup ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int ,int,int ) ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(TrackerServerGroup *VAR_2,
  const char *VAR_3, char **VAR_4)
{
 char **VAR_5;
 char **VAR_6;
 TrackerServerInfo VAR_7;
    int VAR_8;

 FUNC_4(&VAR_7, 0, sizeof(TrackerServerInfo));
    FUNC_2(&VAR_7);

 VAR_6 = VAR_4 + VAR_2->server_count;
 VAR_2->server_count = 0;
 for (VAR_5=VAR_4; VAR_5<VAR_6; VAR_5++)
 {
        if ((VAR_8=FUNC_1(*VAR_5,
                        VAR_0, &VAR_7)) != 0)
        {
            return VAR_8;
        }

  if (FUNC_0(&VAR_7, VAR_2->servers,
   VAR_2->server_count,
   sizeof(TrackerServerInfo),
   VAR_1) == ((void*)0))
  {
   FUNC_3(VAR_2, &VAR_7);
   VAR_2->server_count++;
  }
 }
 return 0;
}
