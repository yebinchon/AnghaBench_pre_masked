
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_hashtable {int * h_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct idmap_hashtable *VAR_2)
{
 if (VAR_2->h_entries != ((void*)0))
  return;
 VAR_2->h_entries = FUNC_0(VAR_1,
   sizeof(*VAR_2->h_entries),
   VAR_0);
}
