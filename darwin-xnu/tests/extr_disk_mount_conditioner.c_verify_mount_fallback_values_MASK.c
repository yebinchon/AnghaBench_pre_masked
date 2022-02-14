
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int segwritecnt; int segreadcnt; int maxwritecnt; int maxreadcnt; int ioqueue_depth; int member_0; } ;
typedef TYPE_1__ disk_conditioner_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,unsigned int,char*) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char const*,int ,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_4, disk_conditioner_info *VAR_5)
{
 int VAR_6;
 disk_conditioner_info VAR_7 = {0};

 VAR_6 = FUNC_3(VAR_4, VAR_1, VAR_5, 0);
 VAR_2;
 FUNC_0(0, VAR_6, "fsctl(DISK_CONDITIONER_IOC_SET)");

 VAR_6 = FUNC_3(VAR_4, VAR_0, &VAR_7, 0);
 VAR_2;
 FUNC_0(0, VAR_6, "fsctl(DISK_CONDITIONER_IOC_GET) after SET");



 FUNC_1(VAR_7.ioqueue_depth, 0u, "ioqueue_depth is the value from the mount");
 FUNC_1(VAR_7.maxreadcnt, 0u, "maxreadcnt is value from the mount");
 FUNC_1(VAR_7.maxwritecnt, 0u, "maxwritecnt is value from the mount");
 FUNC_1(VAR_7.segreadcnt, 0u, "segreadcnt is value from the mount");
 FUNC_1(VAR_7.segwritecnt, 0u, "segwritecnt is value from the mount");
 FUNC_2(VAR_7.ioqueue_depth, VAR_3, "ioqueue_depth is the value from the mount");
 FUNC_2(VAR_7.maxreadcnt, VAR_3, "maxreadcnt is value from the mount");
 FUNC_2(VAR_7.maxwritecnt, VAR_3, "maxwritecnt is value from the mount");
 FUNC_2(VAR_7.segreadcnt, VAR_3, "segreadcnt is value from the mount");
 FUNC_2(VAR_7.segwritecnt, VAR_3, "segwritecnt is value from the mount");
}
