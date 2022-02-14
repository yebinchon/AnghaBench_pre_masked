
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backref_edge {int dummy; } ;
struct backref_cache {int nr_edges; } ;


 int VAR_0 ;
 struct backref_edge* FUNC_0 (int,int ) ;

__attribute__((used)) static struct backref_edge *FUNC_1(struct backref_cache *VAR_1)
{
 struct backref_edge *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (VAR_2)
  VAR_1->nr_edges++;
 return VAR_2;
}
