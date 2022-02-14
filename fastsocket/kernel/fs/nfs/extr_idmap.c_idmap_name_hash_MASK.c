
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_hashtable {struct idmap_hashent* h_entries; } ;
struct idmap_hashent {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (char const*,size_t) ;

__attribute__((used)) static inline struct idmap_hashent *
FUNC_1(struct idmap_hashtable* VAR_1, const char *VAR_2, size_t VAR_3)
{
 if (VAR_1->h_entries == ((void*)0))
  return ((void*)0);
 return &VAR_1->h_entries[FUNC_0(VAR_2, VAR_3) % VAR_0];
}
