
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct sysctl_req {scalar_t__ newptr; scalar_t__ oldptr; size_t oldidx; } ;
struct sysctl_oid {int dummy; } ;
struct content_filter {int cf_necp_control_unit; int cf_sock_count; int cf_flags; int cf_kcunit; } ;
struct cfil_filter_stat {int cfs_len; int cfs_necp_control_unit; int cfs_sock_count; int cfs_flags; int cfs_filter_id; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct sysctl_req*,struct cfil_filter_stat*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct cfil_filter_stat*,int) ;
 int FUNC_2 (size_t) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct content_filter** VAR_4 ;

int
FUNC_5(struct sysctl_oid *VAR_5, void *VAR_6, int VAR_7,
 struct sysctl_req *VAR_8)
{
#pragma unused(oidp, arg1, arg2)
 int VAR_9 = 0;
 size_t VAR_10 = 0;
 u_int32_t VAR_11;


 if (VAR_8->newptr != VAR_2)
  return (VAR_0);

 FUNC_3(&VAR_3);

 for (VAR_11 = 0; VAR_4 != ((void*)0) && VAR_11 < VAR_1; VAR_11++) {
  struct cfil_filter_stat VAR_12;
  struct content_filter *VAR_13 = VAR_4[VAR_11];

  if (VAR_13 == ((void*)0))
   continue;


  if (VAR_8->oldptr == VAR_2) {
   VAR_10 += sizeof(struct cfil_filter_stat);
   continue;
  }

  FUNC_1(&VAR_12, sizeof(struct cfil_filter_stat));
  VAR_12.cfs_len = sizeof(struct cfil_filter_stat);
  VAR_12.cfs_filter_id = VAR_13->cf_kcunit;
  VAR_12.cfs_flags = VAR_13->cf_flags;
  VAR_12.cfs_sock_count = VAR_13->cf_sock_count;
  VAR_12.cfs_necp_control_unit = VAR_13->cf_necp_control_unit;

  VAR_9 = FUNC_0(VAR_8, &VAR_12,
   sizeof (struct cfil_filter_stat));
  if (VAR_9 != 0)
   break;
 }

 if (VAR_8->oldptr == VAR_2)
  VAR_8->oldidx = VAR_10;

 FUNC_4(&VAR_3);
 return (VAR_9);
}
