
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifclassq {int dummy; } ;
typedef int mbuf_svc_class_t ;


 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*,int ,int *,int *,int) ;
 int FUNC_2 (struct ifclassq*) ;
 int FUNC_3 (struct ifclassq*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

int
FUNC_6(struct ifclassq *VAR_1, mbuf_svc_class_t VAR_2, u_int32_t *VAR_3,
    u_int32_t *VAR_4)
{
 int VAR_5 = 0;

 FUNC_2(VAR_1);
 if (VAR_2 == VAR_0) {
  FUNC_5(VAR_3 != ((void*)0));
  *VAR_3 = FUNC_0(VAR_1);
 } else {
  FUNC_5(FUNC_4(VAR_2));
  FUNC_5(VAR_3 != ((void*)0) && VAR_4 != ((void*)0));
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 }
 FUNC_3(VAR_1);

 return (VAR_5);
}
