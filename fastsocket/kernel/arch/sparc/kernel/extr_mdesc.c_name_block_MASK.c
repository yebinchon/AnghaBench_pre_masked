
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdesc_hdr {int node_sz; } ;


 scalar_t__ FUNC_0 (struct mdesc_hdr*) ;

__attribute__((used)) static void *FUNC_1(struct mdesc_hdr *VAR_0)
{
 return ((void *) FUNC_0(VAR_0)) + VAR_0->node_sz;
}
