
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {char* pfrt_anchor; char* pfrt_name; } ;



void
FUNC_0(struct pfr_table *VAR_0)
{
 VAR_0->pfrt_anchor[sizeof (VAR_0->pfrt_anchor) - 1] = '\0';
 VAR_0->pfrt_name[sizeof (VAR_0->pfrt_name) - 1] = '\0';
}
