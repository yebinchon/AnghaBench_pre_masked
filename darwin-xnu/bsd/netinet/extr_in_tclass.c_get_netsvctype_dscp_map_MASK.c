
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netsvctype_dscp_map {size_t netsvctype; int dscp; } ;
struct net_qos_dscp_map {int * netsvctype_to_dscp; } ;
typedef int errno_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct net_qos_dscp_map VAR_3 ;

__attribute__((used)) static errno_t
FUNC_1(size_t *VAR_4,
    struct netsvctype_dscp_map *VAR_5)
{
 size_t VAR_6;
 struct net_qos_dscp_map *VAR_7 = ((void*)0);




 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return (VAR_0);
 if (*VAR_4 > VAR_1)
  return (VAR_0);

 VAR_7 = &VAR_3;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2, *VAR_4); VAR_6++) {
  VAR_5[VAR_6].netsvctype = VAR_6;
  VAR_5[VAR_6].dscp = VAR_7->netsvctype_to_dscp[VAR_6];

 }
 *VAR_4 = VAR_6;

 return (0);
}
