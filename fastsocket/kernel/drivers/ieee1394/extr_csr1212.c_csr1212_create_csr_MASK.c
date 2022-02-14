
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csr1212_csr {size_t bus_info_len; size_t crc_len; struct csr1212_csr* cache_head; struct csr1212_csr* cache_tail; void* private; struct csr1212_bus_ops* ops; int data; int bus_info_data; int root_kv; } ;
struct csr1212_bus_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct csr1212_csr*) ;
 int VAR_2 ;
 struct csr1212_csr* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct csr1212_csr* FUNC_3 (int ,int ) ;

struct csr1212_csr *FUNC_4(struct csr1212_bus_ops *VAR_3,
           size_t VAR_4, void *VAR_5)
{
 struct csr1212_csr *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6));
 if (!VAR_6)
  return ((void*)0);

 VAR_6->cache_head =
  FUNC_3(VAR_0,
      VAR_1);
 if (!VAR_6->cache_head) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }




 VAR_6->root_kv = FUNC_2(VAR_2);
 if (!VAR_6->root_kv) {
  FUNC_0(VAR_6->cache_head);
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 VAR_6->bus_info_data = VAR_6->cache_head->data;
 VAR_6->bus_info_len = VAR_4;
 VAR_6->crc_len = VAR_4;
 VAR_6->ops = VAR_3;
 VAR_6->private = VAR_5;
 VAR_6->cache_tail = VAR_6->cache_head;

 return VAR_6;
}
