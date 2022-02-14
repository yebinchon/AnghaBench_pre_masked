
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_attr_hdr {void* length; void* type; } ;


 void* FUNC_0 (size_t) ;

__attribute__((used)) static inline void FUNC_1(struct wlp_attr_hdr *VAR_0, unsigned VAR_1,
        size_t VAR_2)
{
 VAR_0->type = FUNC_0(VAR_1);
 VAR_0->length = FUNC_0(VAR_2);
}
