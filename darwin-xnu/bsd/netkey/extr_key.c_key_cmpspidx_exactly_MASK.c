
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_4__ {int end; int start; } ;
struct TYPE_3__ {int end; int start; } ;
struct secpolicyindex {scalar_t__ prefs; scalar_t__ prefd; scalar_t__ ul_proto; scalar_t__ internal_if; TYPE_2__ dst_range; TYPE_1__ src_range; int dst; int src; } ;


 scalar_t__ FUNC_0 (struct sockaddr*,struct sockaddr*,int) ;

__attribute__((used)) static int
FUNC_1(
      struct secpolicyindex *VAR_0,
      struct secpolicyindex *VAR_1)
{

 if (VAR_0 == ((void*)0) && VAR_1 == ((void*)0))
  return 1;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return 0;

 if (VAR_0->prefs != VAR_1->prefs
  || VAR_0->prefd != VAR_1->prefd
  || VAR_0->ul_proto != VAR_1->ul_proto
  || VAR_0->internal_if != VAR_1->internal_if)
  return 0;

 if (FUNC_0((struct sockaddr *)&VAR_0->src,
      (struct sockaddr *)&VAR_1->src, 1) != 0) {
  return 0;
 }
 if (FUNC_0((struct sockaddr *)&VAR_0->dst,
      (struct sockaddr *)&VAR_1->dst, 1) != 0) {
  return 0;
 }

    if (FUNC_0((struct sockaddr *)&VAR_0->src_range.start,
      (struct sockaddr *)&VAR_1->src_range.start, 1) != 0) {
  return 0;
 }
    if (FUNC_0((struct sockaddr *)&VAR_0->src_range.end,
      (struct sockaddr *)&VAR_1->src_range.end, 1) != 0) {
  return 0;
 }
 if (FUNC_0((struct sockaddr *)&VAR_0->dst_range.start,
      (struct sockaddr *)&VAR_1->dst_range.start, 1) != 0) {
  return 0;
 }
    if (FUNC_0((struct sockaddr *)&VAR_0->dst_range.end,
      (struct sockaddr *)&VAR_1->dst_range.end, 1) != 0) {
  return 0;
 }

 return 1;
}
