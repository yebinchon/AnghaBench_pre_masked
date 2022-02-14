
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_qos_override; } ;
typedef int kq_index_t ;



__attribute__((used)) static kq_index_t
FUNC_0(struct knote *VAR_0)
{
 return VAR_0->kn_qos_override;
}
