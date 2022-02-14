
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tcq_if {int ** tif_classes; int tif_ifq; } ;
struct tcq_class {int dummy; } ;
typedef int classq_pkt_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct tcq_class* FUNC_1 (struct tcq_if*,int,int ,int,int ,int ) ;
 int * FUNC_2 (struct tcq_if*,int ) ;

int
FUNC_3(struct tcq_if *VAR_4, int VAR_5, u_int32_t VAR_6,
    int VAR_7, u_int32_t VAR_8, struct tcq_class **VAR_9, classq_pkt_type_t VAR_10)
{
 struct tcq_class *VAR_11;

 FUNC_0(VAR_4->tif_ifq);


 if (VAR_5 >= VAR_3)
  return (VAR_1);
 if (VAR_4->tif_classes[VAR_5] != ((void*)0))
  return (VAR_0);
 if (FUNC_2(VAR_4, VAR_8) != ((void*)0))
  return (VAR_0);

 VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);
 if (VAR_11 == ((void*)0))
  return (VAR_2);

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_11;

 return (0);
}
