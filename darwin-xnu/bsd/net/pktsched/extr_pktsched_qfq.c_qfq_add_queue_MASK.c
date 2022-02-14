
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct qfq_if {scalar_t__ qif_wsum; int qif_ifq; } ;
struct qfq_class {int dummy; } ;
typedef int classq_pkt_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct qfq_class* FUNC_1 (struct qfq_if*,int,int,int,int,int,int ) ;
 int * FUNC_2 (struct qfq_if*,int) ;

int
FUNC_3(struct qfq_if *VAR_7, u_int32_t VAR_8, u_int32_t VAR_9,
    u_int32_t VAR_10, u_int32_t VAR_11, u_int32_t VAR_12, struct qfq_class **VAR_13,
    classq_pkt_type_t VAR_14)
{
 struct qfq_class *VAR_15;
 u_int32_t VAR_16;

 FUNC_0(VAR_7->qif_ifq);

 if (FUNC_2(VAR_7, VAR_12) != ((void*)0))
  return (VAR_0);


 if (VAR_9 == 0 || VAR_9 > VAR_3)
  return (VAR_1);

 VAR_16 = (VAR_6 / (VAR_6 / VAR_9));
 if (VAR_7->qif_wsum + VAR_16 > VAR_4)
  return (VAR_1);

 if (VAR_10 == 0 || VAR_10 > (1 << VAR_5))
  return (VAR_1);

 VAR_15 = FUNC_1(VAR_7, VAR_9, VAR_8, VAR_11, VAR_10, VAR_12, VAR_14);
 if (VAR_15 == ((void*)0))
  return (VAR_2);

 if (VAR_13 != ((void*)0))
  *VAR_13 = VAR_15;

 return (0);
}
