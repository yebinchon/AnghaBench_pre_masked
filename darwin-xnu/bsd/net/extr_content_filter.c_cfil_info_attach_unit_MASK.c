
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct socket {int dummy; } ;
struct content_filter {scalar_t__ cf_necp_control_unit; int cf_sock_count; int cf_sock_entries; } ;
struct cfil_info {struct cfil_entry* cfi_entries; } ;
struct cfil_entry {int cfe_flags; scalar_t__ cfe_necp_control_unit; struct content_filter* cfe_filter; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct cfil_entry*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct content_filter** VAR_5 ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct content_filter*) ;

int
FUNC_6(struct socket *VAR_6, uint32_t VAR_7, struct cfil_info *VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;

 FUNC_0(VAR_1, "");

 FUNC_4(VAR_6);

 FUNC_2(&VAR_4);

 for (VAR_9 = 1;
  VAR_5 != ((void*)0) && VAR_9 <= VAR_2;
  VAR_9++) {
  struct content_filter *VAR_11 = VAR_5[VAR_9 - 1];
  struct cfil_entry *VAR_12;

  if (VAR_11 == ((void*)0))
   continue;
  if (VAR_11->cf_necp_control_unit != VAR_7)
   continue;

  VAR_12 = &VAR_8->cfi_entries[VAR_9 - 1];

  VAR_12->cfe_filter = VAR_11;
  VAR_12->cfe_necp_control_unit = VAR_7;
  FUNC_1(&VAR_11->cf_sock_entries, VAR_12, VAR_3);
  VAR_11->cf_sock_count++;
  FUNC_5(VAR_11);
  VAR_10 = 1;
  VAR_12->cfe_flags |= VAR_0;
  break;
 }

 FUNC_3(&VAR_4);

 return (VAR_10);
}
