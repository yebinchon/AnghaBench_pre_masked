
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int uint32_t ;
struct kqueue_info {int dummy; } ;
struct kqueue_dyninfo {int kqdi_info; } ;
struct kqueue {int dummy; } ;
typedef int * proc_t ;
typedef int kqueue_id_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kqueue_dyninfo*,int ,int) ;
 int FUNC_2 (struct kqueue*,struct kqueue_dyninfo*) ;
 int FUNC_3 (struct kqueue*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct kqueue* FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,struct kqueue*) ;
 int FUNC_8 (struct kqueue*) ;

int
FUNC_9(void *VAR_2, kqueue_id_t VAR_3, user_addr_t VAR_4,
  uint32_t VAR_5, int32_t *VAR_6)
{
 proc_t VAR_7 = (proc_t)VAR_2;
 struct kqueue *VAR_8;
 int VAR_9 = 0;
 struct kqueue_dyninfo VAR_10 = { };

 FUNC_0(VAR_7 != ((void*)0));

 if (VAR_5 < sizeof(struct kqueue_info)) {
  return VAR_0;
 }

 FUNC_4(VAR_7);
 VAR_8 = FUNC_6(VAR_7, VAR_3);
 if (!VAR_8) {
  FUNC_5(VAR_7);
  return VAR_1;
 }
 FUNC_8(VAR_8);
 FUNC_5(VAR_7);





 if (VAR_5 >= sizeof(struct kqueue_dyninfo)) {
  VAR_5 = sizeof(struct kqueue_dyninfo);
  VAR_9 = FUNC_2(VAR_8, &VAR_10);
 } else {
  VAR_5 = sizeof(struct kqueue_info);
  VAR_9 = FUNC_3(VAR_8, &VAR_10.kqdi_info);
 }
 if (VAR_9 == 0 && (VAR_9 = FUNC_1(&VAR_10, VAR_4, VAR_5)) == 0) {
  *VAR_6 = VAR_5;
 }
 FUNC_7(VAR_7, VAR_8);
 return VAR_9;
}
