
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_call_type {int name; } ;
struct afs_call {size_t request_size; size_t reply_max; int rx_queue; int waitq; void* buffer; void* request; struct afs_call_type const* type; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct afs_call*,int ,int ) ;
 int FUNC_1 (struct afs_call*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (size_t,int ) ;
 struct afs_call* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;

struct afs_call *FUNC_8(const struct afs_call_type *VAR_2,
         size_t VAR_3, size_t VAR_4)
{
 struct afs_call *VAR_5;

 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  goto nomem_call;

 FUNC_0("CALL %p{%s} [%d]",
        VAR_5, VAR_2->name, FUNC_3(&VAR_1));
 FUNC_2(&VAR_1);

 VAR_5->type = VAR_2;
 VAR_5->request_size = VAR_3;
 VAR_5->reply_max = VAR_4;

 if (VAR_3) {
  VAR_5->request = FUNC_5(VAR_3, VAR_0);
  if (!VAR_5->request)
   goto nomem_free;
 }

 if (VAR_4) {
  VAR_5->buffer = FUNC_5(VAR_4, VAR_0);
  if (!VAR_5->buffer)
   goto nomem_free;
 }

 FUNC_4(&VAR_5->waitq);
 FUNC_7(&VAR_5->rx_queue);
 return VAR_5;

nomem_free:
 FUNC_1(VAR_5);
nomem_call:
 return ((void*)0);
}
