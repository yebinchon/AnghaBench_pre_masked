
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqrequest {int kqr_override_index; int kqr_qos_index; } ;
struct kqworkloop {struct kqrequest kqwl_request; } ;
typedef int kq_index_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static kq_index_t
FUNC_1(struct kqworkloop *VAR_0)
{
 struct kqrequest *VAR_1 = &VAR_0->kqwl_request;
 return FUNC_0(VAR_1->kqr_qos_index, VAR_1->kqr_override_index);
}
