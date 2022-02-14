
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sockaddr_ib {void* sib_sid_mask; void* sib_sid; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {scalar_t__ ps; } ;
struct rdma_id_private {TYPE_1__ id; } ;
struct idr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct sockaddr*) ;
 scalar_t__ FUNC_2 (struct rdma_id_private*) ;
 void* FUNC_3 (int) ;
 struct idr VAR_7 ;
 int FUNC_4 (int ) ;
 struct idr VAR_8 ;
 struct idr VAR_9 ;

__attribute__((used)) static struct idr *FUNC_5(struct rdma_id_private *VAR_10)
{
 struct idr *VAR_11 = ((void*)0);
 struct sockaddr_ib *VAR_12;
 u64 VAR_13, VAR_14, VAR_15;

 VAR_12 = (struct sockaddr_ib *) FUNC_2(VAR_10);
 VAR_14 = FUNC_0(VAR_12->sib_sid_mask) & VAR_1;
 VAR_15 = FUNC_0(VAR_12->sib_sid) & VAR_14;

 if ((VAR_10->id.ps == VAR_4) && (VAR_15 == (VAR_0 & VAR_14))) {
  VAR_13 = VAR_0;
  VAR_11 = &VAR_7;
 } else if (((VAR_10->id.ps == VAR_4) || (VAR_10->id.ps == VAR_5)) &&
     (VAR_15 == (VAR_2 & VAR_14))) {
  VAR_13 = VAR_2;
  VAR_11 = &VAR_8;
 } else if (((VAR_10->id.ps == VAR_4) || (VAR_10->id.ps == VAR_6)) &&
     (VAR_15 == (VAR_3 & VAR_14))) {
  VAR_13 = VAR_3;
  VAR_11 = &VAR_9;
 }

 if (VAR_11) {
  VAR_12->sib_sid = FUNC_3(VAR_13 | FUNC_4(FUNC_1((struct sockaddr *) VAR_12)));
  VAR_12->sib_sid_mask = FUNC_3(VAR_1 |
      FUNC_0(VAR_12->sib_sid_mask));
 }
 return VAR_11;
}
