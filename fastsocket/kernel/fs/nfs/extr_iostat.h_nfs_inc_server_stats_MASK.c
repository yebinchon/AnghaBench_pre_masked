
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int io_stats; } ;
struct nfs_iostats {int * events; } ;
typedef enum nfs_stat_eventcounters { ____Placeholder_nfs_stat_eventcounters } nfs_stat_eventcounters ;


 int FUNC_0 () ;
 struct nfs_iostats* FUNC_1 (int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(const struct nfs_server *VAR_0,
     enum nfs_stat_eventcounters VAR_1)
{
 struct nfs_iostats *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0();
 VAR_2 = FUNC_1(VAR_0->io_stats, VAR_3);
 VAR_2->events[VAR_1]++;
 FUNC_2();
}
