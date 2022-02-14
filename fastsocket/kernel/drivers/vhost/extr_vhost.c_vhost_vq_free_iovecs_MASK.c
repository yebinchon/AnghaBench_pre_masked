
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int * ubuf_info; int * heads; int * log; int * indirect; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vhost_virtqueue *VAR_0)
{
 FUNC_0(VAR_0->indirect);
 VAR_0->indirect = ((void*)0);
 FUNC_0(VAR_0->log);
 VAR_0->log = ((void*)0);
 FUNC_0(VAR_0->heads);
 VAR_0->heads = ((void*)0);
 FUNC_0(VAR_0->ubuf_info);
 VAR_0->ubuf_info = ((void*)0);
}
