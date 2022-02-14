
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode_trace_paths_context {int count; scalar_t__ path; } ;
struct vnode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int,struct vnode*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct vnode*,char*,int*) ;

__attribute__((used)) static int FUNC_3(struct vnode *VAR_3, void *VAR_4) {
 int VAR_5, VAR_6;
 struct vnode_trace_paths_context *VAR_7;

 VAR_7 = VAR_4;

 VAR_5 = sizeof (VAR_7->path);
 VAR_6 = FUNC_2(VAR_3, (char *)VAR_7->path, &VAR_5);


 if (!VAR_6) {
  FUNC_0(VAR_7->path, VAR_5, VAR_3,
    VAR_0 | VAR_1);

  if (++(VAR_7->count) == 1000) {
   FUNC_1();
   VAR_7->count = 0;
  }
 }

 return VAR_2;
}
