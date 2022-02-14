
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netsvctype_dscp_map {int netsvctype; size_t dscp; } ;
struct net_qos_dscp_map {size_t* netsvctype_to_dscp; size_t* sotc_to_dscp; } ;
typedef int errno_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 struct net_qos_dscp_map VAR_8 ;
 int * VAR_9 ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static errno_t
FUNC_3(size_t VAR_10,
    const struct netsvctype_dscp_map *VAR_11)
{
 size_t VAR_12;
 struct net_qos_dscp_map *VAR_13 = ((void*)0);
 int VAR_14;




 if (VAR_10 > VAR_6 || VAR_11 == ((void*)0))
  return (VAR_0);




 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  if (!FUNC_1(VAR_11[VAR_12].netsvctype))
   return (VAR_0);
  if (VAR_11[VAR_12].dscp > VAR_6)
   return (VAR_0);
 }

 VAR_13 = &VAR_8;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_14 = VAR_11[VAR_12].netsvctype;

  VAR_13->netsvctype_to_dscp[VAR_14] =
      VAR_11[VAR_12].dscp;
 }
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  switch (VAR_14) {
   case 135:
   case 134:
   case 129:
   case 128:
   case 131:
   case 136:
   case 133:
   case 132: {
    size_t VAR_15;

    VAR_15 = FUNC_2(VAR_9[VAR_14]);
    if (VAR_15 != VAR_1) {
     VAR_13->sotc_to_dscp[VAR_15] =
         VAR_11[VAR_14].dscp;
    }
    break;
   }
   case 130:

    break;
   default:

    FUNC_0(0);
  }
 }

 VAR_13->sotc_to_dscp[VAR_4] = VAR_5;


 VAR_13->sotc_to_dscp[VAR_2] =
    VAR_13->sotc_to_dscp[VAR_3];

 return (0);
}
