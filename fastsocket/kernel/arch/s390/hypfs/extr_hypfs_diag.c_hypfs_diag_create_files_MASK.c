
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x_info_blk_hdr {int dummy; } ;
struct super_block {int dummy; } ;
typedef void dentry ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 void* FUNC_2 () ;
 void* FUNC_3 (struct super_block*,void*,void*) ;
 void* FUNC_4 (struct super_block*,void*,void*) ;
 void* FUNC_5 (struct super_block*,void*,char*,char*) ;
 void* FUNC_6 (struct super_block*,void*,char*) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (int ,void*) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct super_block *VAR_2, struct dentry *VAR_3)
{
 struct dentry *VAR_4, *VAR_5;
 void *VAR_6, *VAR_7;
 int VAR_8, VAR_9;
 void *VAR_10, *VAR_11;

 VAR_10 = FUNC_2();
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_4 = FUNC_6(VAR_2, VAR_3, "systems");
 if (FUNC_0(VAR_4)) {
  VAR_9 = FUNC_1(VAR_4);
  goto err_out;
 }
 VAR_6 = (struct x_info_blk_hdr *)VAR_10;
 VAR_7 = VAR_6 + FUNC_9(VAR_1);
 for (VAR_8 = 0; VAR_8 < FUNC_8(VAR_1, VAR_6); VAR_8++) {
  VAR_7 = FUNC_3(VAR_2, VAR_4, VAR_7);
  if (FUNC_0(VAR_7)) {
   VAR_9 = FUNC_1(VAR_7);
   goto err_out;
  }
 }
 if (FUNC_7(VAR_1, VAR_6) & VAR_0) {
  VAR_11 = FUNC_4(VAR_2, VAR_3, VAR_7);
  if (FUNC_0(VAR_11)) {
   VAR_9 = FUNC_1(VAR_11);
   goto err_out;
  }
 }
 VAR_5 = FUNC_6(VAR_2, VAR_3, "hyp");
 if (FUNC_0(VAR_5)) {
  VAR_9 = FUNC_1(VAR_5);
  goto err_out;
 }
 VAR_11 = FUNC_5(VAR_2, VAR_5, "type", "LPAR Hypervisor");
 if (FUNC_0(VAR_11)) {
  VAR_9 = FUNC_1(VAR_11);
  goto err_out;
 }
 VAR_9 = 0;

err_out:
 return VAR_9;
}
