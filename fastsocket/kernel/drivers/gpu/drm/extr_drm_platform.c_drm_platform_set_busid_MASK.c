
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_master {int unique_len; int unique_size; char* unique; } ;
struct drm_device {TYPE_1__* platformdev; int * devname; } ;
struct TYPE_2__ {char* name; int id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,char*,char*,int) ;
 int FUNC_3 (int *,char*,char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_3, struct drm_master *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 VAR_4->unique_len = 13 + FUNC_4(VAR_3->platformdev->name);
 VAR_4->unique_size = VAR_4->unique_len;
 VAR_4->unique = FUNC_1(VAR_4->unique_len + 1, VAR_2);

 if (VAR_4->unique == ((void*)0))
  return -VAR_1;

 VAR_7 = VAR_3->platformdev->id;




 if (VAR_7 == -1)
  VAR_7 = 0;

 VAR_5 = FUNC_2(VAR_4->unique, VAR_4->unique_len,
   "platform:%s:%02d", VAR_3->platformdev->name, VAR_7);

 if (VAR_5 > VAR_4->unique_len) {
  FUNC_0("Unique buffer overflowed\n");
  VAR_6 = -VAR_0;
  goto err;
 }

 VAR_3->devname =
  FUNC_1(FUNC_4(VAR_3->platformdev->name) +
   VAR_4->unique_len + 2, VAR_2);

 if (VAR_3->devname == ((void*)0)) {
  VAR_6 = -VAR_1;
  goto err;
 }

 FUNC_3(VAR_3->devname, "%s@%s", VAR_3->platformdev->name,
  VAR_4->unique);
 return 0;
err:
 return VAR_6;
}
