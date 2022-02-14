
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ifbond_ref ;
typedef int UInt32 ;
struct TYPE_8__ {int ifma_addr; int ifma_ifp; } ;
struct TYPE_7__ {int verbose; } ;
struct TYPE_6__ {char* ifb_name; int * ifb_distributing_array; TYPE_5__* ifb_ifma_slow_proto; int ifb_retain_count; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static __inline__ void
FUNC_7(ifbond_ref VAR_3)
{
    UInt32 VAR_4;

    VAR_4 = FUNC_2(&VAR_3->ifb_retain_count);
    switch (VAR_4) {
    case 0:
 FUNC_5("ifbond_release: retain count is 0\n");
 break;
    case 1:
 if (VAR_2->verbose) {
     FUNC_6("ifbond_release(%s)\n", VAR_3->ifb_name);
 }
 if (VAR_3->ifb_ifma_slow_proto != ((void*)0)) {
     if (VAR_2->verbose) {
  FUNC_6("ifbond_release(%s) removing multicast\n",
         VAR_3->ifb_name);
     }
     (void) FUNC_4(VAR_3->ifb_ifma_slow_proto->ifma_ifp,
         VAR_3->ifb_ifma_slow_proto->ifma_addr);
     FUNC_1(VAR_3->ifb_ifma_slow_proto);
 }
 if (VAR_3->ifb_distributing_array != ((void*)0)) {
     FUNC_0(VAR_3->ifb_distributing_array, VAR_0);
 }
 FUNC_3(&VAR_1, VAR_3);
 break;
    default:
 break;
    }
    return;
}
