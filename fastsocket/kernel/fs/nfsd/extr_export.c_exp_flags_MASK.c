
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct seq_file {int dummy; } ;
struct nfsd4_fs_locations {scalar_t__ locations_count; TYPE_1__* locations; scalar_t__ migrated; } ;
typedef int gid_t ;
struct TYPE_2__ {int hosts; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,int ,char*) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_2, int VAR_3, int VAR_4,
  uid_t VAR_5, uid_t VAR_6, struct nfsd4_fs_locations *VAR_7)
{
 FUNC_3(VAR_2, VAR_3, VAR_0);
 if (VAR_3 & VAR_1)
  FUNC_1(VAR_2, ",fsid=%d", VAR_4);
 if (VAR_5 != (uid_t)-2 && VAR_5 != (0x10000-2))
  FUNC_1(VAR_2, ",anonuid=%u", VAR_5);
 if (VAR_6 != (gid_t)-2 && VAR_6 != (0x10000-2))
  FUNC_1(VAR_2, ",anongid=%u", VAR_6);
 if (VAR_7 && VAR_7->locations_count > 0) {
  char *VAR_8 = (VAR_7->migrated) ? "refer" : "replicas";
  int VAR_9;

  FUNC_1(VAR_2, ",%s=", VAR_8);
  FUNC_0(VAR_2, VAR_7->locations[0].path, ",;@ \t\n\\");
  FUNC_2(VAR_2, '@');
  FUNC_0(VAR_2, VAR_7->locations[0].hosts, ",;@ \t\n\\");
  for (VAR_9 = 1; VAR_9 < VAR_7->locations_count; VAR_9++) {
   FUNC_2(VAR_2, ';');
   FUNC_0(VAR_2, VAR_7->locations[VAR_9].path, ",;@ \t\n\\");
   FUNC_2(VAR_2, '@');
   FUNC_0(VAR_2, VAR_7->locations[VAR_9].hosts, ",;@ \t\n\\");
  }
 }
}
