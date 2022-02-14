
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct ifclassq {int dummy; } ;
struct ifnet {struct ifclassq if_snd; } ;
typedef int mbuf_svc_class_t ;


 scalar_t__ FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (struct ifclassq*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct ifclassq*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;

void
FUNC_6(struct ifnet *VAR_1, mbuf_svc_class_t VAR_2, u_int32_t VAR_3,
    u_int32_t *VAR_4, u_int32_t *VAR_5, int VAR_6)
{
 struct ifclassq *VAR_7 = &VAR_1->if_snd;
 u_int32_t VAR_8 = 0, VAR_9 = 0;
 u_int32_t VAR_10 = 0, VAR_11 = 0;

 FUNC_5(VAR_2 == VAR_0 || FUNC_4(VAR_2));
 FUNC_5(VAR_3 != 0);

 if (!VAR_6)
  FUNC_1(VAR_7);

 if (FUNC_0(VAR_7))
  FUNC_2(VAR_7, VAR_2, VAR_3, VAR_8, VAR_9);

 if (!VAR_6)
  FUNC_3(VAR_7);

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_8 + VAR_10;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_9 + VAR_11;
}
