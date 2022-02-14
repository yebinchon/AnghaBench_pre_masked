
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(char *VAR_1[])
{
 FUNC_0("Usage: %s <config_file> [-h <tracker_server>] "
            "[list|delete|set_trunk_server <group_name> [storage_id]]\n"
            "\tthe tracker server format: host[:port], "
            "the tracker default port is %d\n\n",
            VAR_1[0], VAR_0);
}
