
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int u_int32_t ;
struct ifclassq {int ifcq_type; int ifcq_dropcnt; int ifcq_xmitcnt; } ;
struct if_ifclassq_stats {int ifqs_scheduler; int ifqs_dropcnt; int ifqs_xmitcnt; int ifqs_maxlen; int ifqs_len; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (struct ifclassq*) ;
 int FUNC_3 (struct ifclassq*) ;
 int FUNC_4 (struct ifclassq*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct if_ifclassq_stats*,int ) ;
 struct if_ifclassq_stats* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct ifclassq*,int,struct if_ifclassq_stats*) ;

int
FUNC_9(struct ifclassq *VAR_6, u_int32_t VAR_7, void *VAR_8,
    u_int32_t *VAR_9)
{
 struct if_ifclassq_stats *VAR_10;
 int VAR_11;

 if (*VAR_9 < sizeof (*VAR_10))
  return (VAR_0);

 VAR_10 = FUNC_6(sizeof (*VAR_10), VAR_3, VAR_4 | VAR_5);
 if (VAR_10 == ((void*)0))
  return (VAR_1);

 FUNC_2(VAR_6);
 if (!FUNC_0(VAR_6)) {
  FUNC_4(VAR_6);
  FUNC_5(VAR_10, VAR_3);
  return (VAR_2);
 }

 VAR_10->ifqs_len = FUNC_1(VAR_6);
 VAR_10->ifqs_maxlen = FUNC_3(VAR_6);
 *(&VAR_10->ifqs_xmitcnt) = *(&VAR_6->ifcq_xmitcnt);
 *(&VAR_10->ifqs_dropcnt) = *(&VAR_6->ifcq_dropcnt);
 VAR_10->ifqs_scheduler = VAR_6->ifcq_type;

 VAR_11 = FUNC_8(VAR_6, VAR_7, VAR_10);
 FUNC_4(VAR_6);

 if (VAR_11 == 0 && (VAR_11 = FUNC_7((caddr_t)VAR_10,
     (user_addr_t)(uintptr_t)VAR_8, sizeof (*VAR_10))) == 0)
  *VAR_9 = sizeof (*VAR_10);

 FUNC_5(VAR_10, VAR_3);

 return (VAR_11);
}
