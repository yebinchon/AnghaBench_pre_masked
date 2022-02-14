
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int ctxlist_mutex; int ctx_count; int ctxlist; } ;
struct drm_ctx_list {int handle; int head; struct drm_file* tag; } ;
struct drm_ctx {int handle; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (struct drm_device*) ;
 struct drm_ctx_list* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct drm_device *VAR_3, void *VAR_4,
        struct drm_file *VAR_5)
{
 struct drm_ctx_list *VAR_6;
 struct drm_ctx *VAR_7 = VAR_4;

 VAR_7->handle = FUNC_2(VAR_3);
 if (VAR_7->handle == VAR_0) {

  VAR_7->handle = FUNC_2(VAR_3);
 }
 FUNC_0("%d\n", VAR_7->handle);
 if (VAR_7->handle == -1) {
  FUNC_0("Not enough free contexts.\n");

  return -VAR_1;
 }

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  FUNC_0("out of memory\n");
  return -VAR_1;
 }

 FUNC_1(&VAR_6->head);
 VAR_6->handle = VAR_7->handle;
 VAR_6->tag = VAR_5;

 FUNC_5(&VAR_3->ctxlist_mutex);
 FUNC_4(&VAR_6->head, &VAR_3->ctxlist);
 ++VAR_3->ctx_count;
 FUNC_6(&VAR_3->ctxlist_mutex);

 return 0;
}
