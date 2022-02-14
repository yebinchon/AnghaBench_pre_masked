
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int method; } ;
struct ib_sa_mad {TYPE_1__ mad_hdr; } ;
struct mcast_req {struct ib_sa_mad sa_mad; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mcast_req *VAR_1)
{
 struct ib_sa_mad *VAR_2 = &VAR_1->sa_mad;

 VAR_2->mad_hdr.method = VAR_0;
}
