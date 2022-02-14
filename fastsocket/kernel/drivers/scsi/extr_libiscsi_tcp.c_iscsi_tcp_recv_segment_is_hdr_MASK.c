
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ done; } ;
struct TYPE_4__ {TYPE_1__ segment; } ;
struct iscsi_tcp_conn {TYPE_2__ in; } ;


 scalar_t__ VAR_0 ;

inline int FUNC_0(struct iscsi_tcp_conn *VAR_1)
{
 return VAR_1->in.segment.done == VAR_0;
}
