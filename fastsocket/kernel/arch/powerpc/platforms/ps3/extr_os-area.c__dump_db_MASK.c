
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_area_db {char* version; char* index_64; char* count_64; char* index_32; char* count_32; char* index_16; char* count_16; int magic_num; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char const*,int,char*) ;

__attribute__((used)) static void FUNC_2(const struct os_area_db *VAR_0, const char *VAR_1,
 int VAR_2)
{
 char VAR_3[sizeof(VAR_0->magic_num) + 1];

 FUNC_0(VAR_3, VAR_0->magic_num, sizeof(VAR_0->magic_num));
 FUNC_1("%s:%d: db.magic_num:      '%s'\n", VAR_1, VAR_2,
  VAR_3);
 FUNC_1("%s:%d: db.version:         %u\n", VAR_1, VAR_2,
  VAR_0->version);
 FUNC_1("%s:%d: db.index_64:        %u\n", VAR_1, VAR_2,
  VAR_0->index_64);
 FUNC_1("%s:%d: db.count_64:        %u\n", VAR_1, VAR_2,
  VAR_0->count_64);
 FUNC_1("%s:%d: db.index_32:        %u\n", VAR_1, VAR_2,
  VAR_0->index_32);
 FUNC_1("%s:%d: db.count_32:        %u\n", VAR_1, VAR_2,
  VAR_0->count_32);
 FUNC_1("%s:%d: db.index_16:        %u\n", VAR_1, VAR_2,
  VAR_0->index_16);
 FUNC_1("%s:%d: db.count_16:        %u\n", VAR_1, VAR_2,
  VAR_0->count_16);
}
