
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_hdr {int tid; int attr_id; int method; int class_version; int mgmt_class; int base_version; } ;
typedef int __be64 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct ib_mad_hdr *VAR_4,
         __be16 VAR_5, __be64 VAR_6)
{
 VAR_4->base_version = VAR_1;
 VAR_4->mgmt_class = VAR_2;
 VAR_4->class_version = VAR_0;
 VAR_4->method = VAR_3;
 VAR_4->attr_id = VAR_5;
 VAR_4->tid = VAR_6;
}
