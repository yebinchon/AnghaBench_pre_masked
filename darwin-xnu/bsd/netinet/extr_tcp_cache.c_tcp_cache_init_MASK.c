
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int32_t ;
struct tcp_heuristics_head {int dummy; } ;
struct tcp_cache_head {int dummy; } ;
struct TYPE_4__ {int tcp_caches; int tch_mtx; } ;
struct TYPE_3__ {int tcp_heuristics; int thh_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;

void FUNC_9(void)
{
 uint64_t VAR_13 = VAR_2 / 1024 / 1024;
 int VAR_14;
 VAR_8 = FUNC_8((u_int32_t)(VAR_13 >> 2));
 if (VAR_8 < 32)
  VAR_8 = 32;
 else if (VAR_8 > 1024)
  VAR_8 = 1024;

 VAR_3 = FUNC_2(sizeof(struct tcp_cache_head) * VAR_8,
     VAR_0, VAR_1);
 if (VAR_3 == ((void*)0))
  FUNC_7("Allocating tcp_cache failed at boot-time!");

 VAR_7 = FUNC_5();
 VAR_6 = FUNC_4("tcpcache", VAR_7);
 VAR_5 = FUNC_3();

 VAR_12 = FUNC_2(sizeof(struct tcp_heuristics_head) * VAR_8,
     VAR_0, VAR_1);
 if (VAR_12 == ((void*)0))
  FUNC_7("Allocating tcp_heuristic failed at boot-time!");

 VAR_11 = FUNC_5();
 VAR_10 = FUNC_4("tcpheuristic", VAR_11);
 VAR_9 = FUNC_3();

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  FUNC_6(&VAR_3[VAR_14].tch_mtx, VAR_6,
      VAR_5);
  FUNC_1(&VAR_3[VAR_14].tcp_caches);

  FUNC_6(&VAR_12[VAR_14].thh_mtx, VAR_10,
      VAR_9);
  FUNC_1(&VAR_12[VAR_14].tcp_heuristics);
 }

 VAR_4 = FUNC_0();
}
