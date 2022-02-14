
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query {int ref_count; } ;
typedef int libretrodb_query_t ;



void FUNC_0(libretrodb_query_t *VAR_0)
{
   struct query *VAR_1 = (struct query*)VAR_0;
   if (VAR_1)
      VAR_1->ref_count += 1;
}
