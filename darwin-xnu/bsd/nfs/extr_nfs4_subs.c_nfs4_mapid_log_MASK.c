
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* g_guid; } ;
typedef TYPE_1__ guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,char*,int,...) ;

__attribute__((used)) static void
FUNC_1(int VAR_3, const char *VAR_4, int VAR_5, guid_t *VAR_6)
{
 if (VAR_3 && (VAR_2 & VAR_0))
  FUNC_0("nfs4_id2guid: idmap failed for %s %s error %d\n", VAR_4, VAR_5 ? "G" : " ", VAR_3);
 if (!VAR_3 && (VAR_2 & VAR_1))
  FUNC_0("nfs4_id2guid: idmap for %s %s got guid "
         "%02x%02x%02x%02x_%02x%02x%02x%02x_%02x%02x%02x%02x_%02x%02x%02x%02x\n",
         VAR_4, VAR_5 ? "G" : " ",
         VAR_6->g_guid[0], VAR_6->g_guid[1], VAR_6->g_guid[2], VAR_6->g_guid[3],
         VAR_6->g_guid[4], VAR_6->g_guid[5], VAR_6->g_guid[6], VAR_6->g_guid[7],
         VAR_6->g_guid[8], VAR_6->g_guid[9], VAR_6->g_guid[10], VAR_6->g_guid[11],
         VAR_6->g_guid[12], VAR_6->g_guid[13], VAR_6->g_guid[14], VAR_6->g_guid[15]);
}
