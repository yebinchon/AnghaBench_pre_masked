
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct log_c {int uuid; } ;
struct dm_dirty_log {struct log_c* context; } ;
typedef int region_t ;
typedef int region64 ;
typedef scalar_t__ int64_t ;
typedef int in_sync ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct log_c*,int ,int ,char*,int,char*,size_t*) ;

__attribute__((used)) static int FUNC_1(struct dm_dirty_log *VAR_2, region_t VAR_3,
        int VAR_4)
{
 int VAR_5;
 uint64_t VAR_6 = VAR_3;
 int64_t VAR_7;
 size_t VAR_8;
 struct log_c *VAR_9 = VAR_2->context;
 if (!VAR_4)
  return -VAR_1;

 VAR_8 = sizeof(VAR_7);
 VAR_5 = FUNC_0(VAR_9, VAR_9->uuid, VAR_0,
     (char *)&VAR_6, sizeof(VAR_6),
     (char *)&VAR_7, &VAR_8);
 return (VAR_5) ? 0 : (int)VAR_7;
}
