
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* FUNC_0 (char*,void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_4;

 VAR_3 = FUNC_0("fuse", VAR_2);
 if (!VAR_3) {
  VAR_4 = -VAR_0;
  goto out_err;
 }

 VAR_1 = FUNC_0("connections", VAR_3);
 if (!VAR_1) {
  VAR_4 = -VAR_0;
  goto out_fuse_unregister;
 }

 return 0;

 out_fuse_unregister:
 FUNC_1(VAR_3);
 out_err:
 return VAR_4;
}
