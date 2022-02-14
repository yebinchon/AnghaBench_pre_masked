
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* connections; } ;
typedef TYPE_2__ TrackerServerInfo ;
struct TYPE_6__ {int server_count; int leader_index; TYPE_2__* servers; } ;
struct TYPE_4__ {char* ip_addr; int port; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (char*,int const,char*,int,...) ;

__attribute__((used)) static int FUNC_1(char *VAR_1, const int VAR_2)
{
 int VAR_3;
 TrackerServerInfo *VAR_4;
 TrackerServerInfo *VAR_5;

 VAR_3 = FUNC_0(VAR_1, VAR_2, "\ng_tracker_group.server_count=%d, " "g_tracker_group.leader_index=%d\n", VAR_0.server_count, VAR_0.leader_index);




 if (VAR_0.server_count == 0)
 {
  return VAR_3;
 }

 VAR_5 = VAR_0.servers + VAR_0.server_count;
 for (VAR_4=VAR_0.servers; VAR_4<VAR_5; VAR_4++)

 {
  VAR_3 += FUNC_0(VAR_1 + VAR_3, VAR_2 - VAR_3,
   "\t%d. tracker server=%s:%d\n",
   (int)(VAR_4 - VAR_0.servers) + 1,
   VAR_4->connections[0].ip_addr,
            VAR_4->connections[0].port);
 }

 return VAR_3;
}
