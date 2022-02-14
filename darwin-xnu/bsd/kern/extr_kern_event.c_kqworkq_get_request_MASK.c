
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqworkq {struct kqrequest* kqwq_request; } ;
struct kqrequest {int dummy; } ;
typedef size_t kq_index_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;

struct kqrequest *
FUNC_1(struct kqworkq *VAR_1, kq_index_t VAR_2)
{
 FUNC_0(VAR_2 < VAR_0);
 return &VAR_1->kqwq_request[VAR_2];
}
