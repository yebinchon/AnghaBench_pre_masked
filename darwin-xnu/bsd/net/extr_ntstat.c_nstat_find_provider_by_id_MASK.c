
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nstat_provider {scalar_t__ nstat_provider_id; struct nstat_provider* next; } ;
typedef scalar_t__ nstat_provider_id_t ;


 struct nstat_provider* VAR_0 ;

__attribute__((used)) static struct nstat_provider*
FUNC_0(
 nstat_provider_id_t VAR_1)
{
 struct nstat_provider *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
 {
  if (VAR_2->nstat_provider_id == VAR_1)
   break;
 }

 return VAR_2;
}
