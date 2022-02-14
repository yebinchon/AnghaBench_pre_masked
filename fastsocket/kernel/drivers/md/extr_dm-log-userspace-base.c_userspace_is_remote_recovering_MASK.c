
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct log_c {scalar_t__ in_sync_hint; int uuid; } ;
struct dm_dirty_log {struct log_c* context; } ;
typedef scalar_t__ region_t ;
typedef int region64 ;
typedef int pkg ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (struct log_c*,int ,int ,char*,int,char*,size_t*) ;

__attribute__((used)) static int FUNC_1(struct dm_dirty_log *VAR_3,
       region_t VAR_4)
{
 int VAR_5;
 uint64_t VAR_6 = VAR_4;
 struct log_c *VAR_7 = VAR_3->context;
 static unsigned long long VAR_8;
 struct {
  int64_t is_recovering;
  uint64_t in_sync_hint;
 } VAR_9;
 size_t VAR_10 = sizeof(VAR_9);
 if (VAR_4 < VAR_7->in_sync_hint)
  return 0;
 else if (VAR_2 < VAR_8)
  return 1;

 VAR_8 = VAR_2 + (VAR_1 / 4);
 VAR_5 = FUNC_0(VAR_7, VAR_7->uuid, VAR_0,
     (char *)&VAR_6, sizeof(VAR_6),
     (char *)&VAR_9, &VAR_10);
 if (VAR_5)
  return 1;

 VAR_7->in_sync_hint = VAR_9.in_sync_hint;

 return (int)VAR_9.is_recovering;
}
