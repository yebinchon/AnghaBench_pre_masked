
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int io_stats; } ;
struct nfs_iostats {long* bytes; } ;
typedef enum nfs_stat_bytecounters { ____Placeholder_nfs_stat_bytecounters } nfs_stat_bytecounters ;


 int FUNC_0 () ;
 struct nfs_iostats* FUNC_1 (int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(const struct nfs_server *VAR_0,
     enum nfs_stat_bytecounters VAR_1,
     long VAR_2)
{
 struct nfs_iostats *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0();
 VAR_3 = FUNC_1(VAR_0->io_stats, VAR_4);
 VAR_3->bytes[VAR_1] += VAR_2;
 FUNC_2();
}
