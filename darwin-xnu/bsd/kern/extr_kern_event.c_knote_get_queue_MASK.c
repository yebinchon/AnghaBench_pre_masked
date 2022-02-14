
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqtailq {int dummy; } ;
struct knote {int kn_qos_index; } ;


 int FUNC_0 (struct knote*) ;
 struct kqtailq* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct kqtailq *
FUNC_2(struct knote *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0), VAR_0->kn_qos_index);
}
