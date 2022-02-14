
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* create_files ) (struct super_block*,struct dentry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct super_block*,struct dentry*) ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct super_block*,struct dentry*,char*,int *) ;
 int FUNC_3 (struct super_block*,struct dentry*,char*,int *,int) ;
 int FUNC_4 (struct super_block*,struct dentry*,char*,int *) ;
 int VAR_14 ;
 int FUNC_5 (struct super_block*,struct dentry*) ;
 int VAR_15 ;

void FUNC_6(struct super_block *VAR_16, struct dentry *VAR_17)
{

 VAR_9 = VAR_0;
 VAR_11 = VAR_2;
 VAR_10 = VAR_1;
 VAR_13 = FUNC_0(VAR_3);

 FUNC_2(VAR_16, VAR_17, "enable", &VAR_7);
 FUNC_3(VAR_16, VAR_17, "dump", &VAR_6, 0666);
 FUNC_2(VAR_16, VAR_17, "buffer", &VAR_8);
 FUNC_4(VAR_16, VAR_17, "buffer_size", &VAR_9);
 FUNC_4(VAR_16, VAR_17, "buffer_watershed", &VAR_10);
 FUNC_4(VAR_16, VAR_17, "cpu_buffer_size", &VAR_11);
 FUNC_2(VAR_16, VAR_17, "cpu_type", &VAR_4);
 FUNC_2(VAR_16, VAR_17, "backtrace_depth", &VAR_5);
 FUNC_2(VAR_16, VAR_17, "pointer_size", &VAR_14);



 FUNC_1(VAR_16, VAR_17);
 if (VAR_12.create_files)
  VAR_12.create_files(VAR_16, VAR_17);
}
