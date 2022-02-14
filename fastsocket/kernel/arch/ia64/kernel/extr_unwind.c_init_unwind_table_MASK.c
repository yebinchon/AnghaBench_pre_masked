
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_table_entry {int start_offset; int end_offset; } ;
struct unw_table {char const* name; unsigned long gp; unsigned long start; unsigned long end; int length; struct unw_table_entry const* array; int segment_base; } ;



__attribute__((used)) static void
FUNC_0 (struct unw_table *VAR_0, const char *VAR_1, unsigned long VAR_2,
     unsigned long VAR_3, const void *VAR_4, const void *VAR_5)
{
 const struct unw_table_entry *VAR_6 = VAR_4, *VAR_7 = VAR_5;

 VAR_0->name = VAR_1;
 VAR_0->segment_base = VAR_2;
 VAR_0->gp = VAR_3;
 VAR_0->start = VAR_2 + VAR_6[0].start_offset;
 VAR_0->end = VAR_2 + VAR_7[-1].end_offset;
 VAR_0->array = VAR_6;
 VAR_0->length = VAR_7 - VAR_6;
}
