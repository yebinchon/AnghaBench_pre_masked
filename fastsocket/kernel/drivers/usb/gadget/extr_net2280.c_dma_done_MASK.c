
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ length; scalar_t__ actual; } ;
struct net2280_request {TYPE_1__ req; } ;
struct net2280_ep {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net2280_ep*,struct net2280_request*,int) ;

__attribute__((used)) static inline void
FUNC_1 (
 struct net2280_ep *VAR_1,
 struct net2280_request *VAR_2,
 u32 VAR_3,
 int VAR_4
)
{
 VAR_2->req.actual = VAR_2->req.length - (VAR_0 & VAR_3);
 FUNC_0 (VAR_1, VAR_2, VAR_4);
}
