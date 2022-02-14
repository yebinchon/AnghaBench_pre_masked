
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int node_t ;
struct TYPE_3__ {int ** freelist; } ;
typedef TYPE_1__ huff_t ;



__attribute__((used)) static void FUNC_0(huff_t* VAR_0, node_t **VAR_1) {
 *VAR_1 = (node_t *)VAR_0->freelist;
 VAR_0->freelist = VAR_1;
}
