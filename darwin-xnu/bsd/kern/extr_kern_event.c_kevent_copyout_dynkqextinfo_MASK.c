
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int uint32_t ;
struct kqueue {int dummy; } ;
typedef int * proc_t ;
typedef int kqueue_id_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct kqueue* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,struct kqueue*) ;
 int FUNC_5 (struct kqueue*) ;
 int FUNC_6 (int *,struct kqueue*,int ,int ,int *) ;

int
FUNC_7(void *VAR_1, kqueue_id_t VAR_2, user_addr_t VAR_3,
  uint32_t VAR_4, int32_t *VAR_5)
{
 proc_t VAR_6 = (proc_t)VAR_1;
 struct kqueue *VAR_7;
 int VAR_8;

 FUNC_0(VAR_6 != ((void*)0));

 FUNC_1(VAR_6);
 VAR_7 = FUNC_3(VAR_6, VAR_2);
 if (!VAR_7) {
  FUNC_2(VAR_6);
  return VAR_0;
 }
 FUNC_5(VAR_7);
 FUNC_2(VAR_6);

 VAR_8 = FUNC_6(VAR_6, VAR_7, VAR_3, VAR_4, VAR_5);
 FUNC_4(VAR_6, VAR_7);
 return VAR_8;
}
