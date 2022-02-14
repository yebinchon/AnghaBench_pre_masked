
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
struct pfr_ktable {int pfrkt_flags; int ** pfrkt_bytes; int ** pfrkt_packets; int pfrkt_ip6; int pfrkt_ip4; struct pfr_ktable* pfrkt_root; } ;
struct pfr_kentry {int ** pfrke_bytes; int ** pfrke_packets; scalar_t__ pfrke_not; } ;
struct pf_addr {int * addr32; } ;
typedef int sa_family_t ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {int sin6_addr; TYPE_1__ sin_addr; } ;




 int FUNC_0 (struct pfr_kentry*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pf_addr*,int *,int) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;

void
FUNC_5(struct pfr_ktable *VAR_7, struct pf_addr *VAR_8, sa_family_t VAR_9,
    u_int64_t VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 struct pfr_kentry *VAR_14 = ((void*)0);

 FUNC_1(VAR_4, VAR_0);

 if (!(VAR_7->pfrkt_flags & VAR_3) && VAR_7->pfrkt_root != ((void*)0))
  VAR_7 = VAR_7->pfrkt_root;
 if (!(VAR_7->pfrkt_flags & VAR_3))
  return;

 switch (VAR_9) {
 default:
  ;
 }
 if ((VAR_14 == ((void*)0) || VAR_14->pfrke_not) != VAR_13) {
  if (VAR_12 != VAR_1)
   FUNC_3("pfr_update_stats: assertion failed.\n");
  VAR_12 = VAR_2;
 }
 VAR_7->pfrkt_packets[VAR_11][VAR_12]++;
 VAR_7->pfrkt_bytes[VAR_11][VAR_12] += VAR_10;
 if (VAR_14 != ((void*)0) && VAR_12 != VAR_2) {
  VAR_14->pfrke_packets[VAR_11][VAR_12]++;
  VAR_14->pfrke_bytes[VAR_11][VAR_12] += VAR_10;
 }
}
