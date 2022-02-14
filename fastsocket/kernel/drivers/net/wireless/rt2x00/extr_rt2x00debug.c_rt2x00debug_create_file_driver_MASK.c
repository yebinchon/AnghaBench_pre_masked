
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00debug_intf {int driver_folder; TYPE_2__* rt2x00dev; } ;
struct dentry {int dummy; } ;
struct debugfs_blob_wrapper {char* data; int size; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {char* name; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_0 (char const*,int ,int ,struct debugfs_blob_wrapper*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct dentry *FUNC_4(const char *VAR_4,
           struct rt2x00debug_intf
           *VAR_5,
           struct debugfs_blob_wrapper
           *VAR_6)
{
 char *VAR_7;

 VAR_7 = FUNC_1(3 * VAR_2, VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_6->data = VAR_7;
 VAR_7 += FUNC_2(VAR_7, "driver:\t%s\n", VAR_5->rt2x00dev->ops->name);
 VAR_7 += FUNC_2(VAR_7, "version:\t%s\n", VAR_0);
 VAR_6->size = FUNC_3(VAR_6->data);

 return FUNC_0(VAR_4, VAR_3, VAR_5->driver_folder, VAR_6);
}
