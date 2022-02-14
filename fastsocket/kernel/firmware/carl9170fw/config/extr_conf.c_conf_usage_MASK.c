
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0)
{

 FUNC_0("Usage: %s [option] <kconfig-file>\n", VAR_0);
 FUNC_0("[option] is _one_ of the following:\n");
 FUNC_0("  --listnewconfig         List new options\n");
 FUNC_0("  --askconfig             Start a new configuration using a line-oriented program\n");
 FUNC_0("  --config                Update a configuration using a provided .config as base\n");
 FUNC_0("  --silentconfig          Same as config, but quietly, additionally update deps\n");
 FUNC_0("  --noconfig              Same as silentconfig but set new symbols to no\n");
 FUNC_0("  --defconfig <file>      New config with default defined in <file>\n");
 FUNC_0("  --savedefconfig <file>  Save the minimal current configuration to <file>\n");
 FUNC_0("  --allnoconfig           New config where all options are answered with no\n");
 FUNC_0("  --allyesconfig          New config where all options are answered with yes\n");
 FUNC_0("  --allmodconfig          New config where all options are answered with mod\n");
 FUNC_0("  --alldefconfig          New config with all symbols set to default\n");
 FUNC_0("  --randconfig            New config with random answer to all options\n");
}
