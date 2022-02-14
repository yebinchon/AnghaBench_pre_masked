
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ps; } ;
struct rdma_id_private {TYPE_1__ id; } ;
struct idr {int dummy; } ;






 struct idr VAR_0 ;
 struct idr VAR_1 ;
 struct idr VAR_2 ;
 struct idr VAR_3 ;

__attribute__((used)) static struct idr *FUNC_0(struct rdma_id_private *VAR_4)
{
 switch (VAR_4->id.ps) {
 case 129:
  return &VAR_2;
 case 128:
  return &VAR_3;
 case 130:
  return &VAR_1;
 case 131:
  return &VAR_0;
 default:
  return ((void*)0);
 }
}
