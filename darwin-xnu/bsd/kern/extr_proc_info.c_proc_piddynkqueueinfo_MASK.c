
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;
typedef int uint32_t ;
typedef scalar_t__ proc_t ;
typedef int kqueue_id_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;


 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__,int ,int *) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int ,int ) ;

int
FUNC_5(int VAR_7, int VAR_8, kqueue_id_t VAR_9,
  user_addr_t VAR_10, uint32_t VAR_11, int32_t *VAR_12)
{
 proc_t VAR_13;
 int VAR_14;

 if (VAR_10 == VAR_6) {
  return VAR_1;
 }

 VAR_13 = FUNC_2(VAR_7);
 if (VAR_13 == VAR_5) {
  return VAR_3;
 }

 VAR_14 = FUNC_4(VAR_13, VAR_4, 0, VAR_0);
 if (VAR_14) {
  goto out;
 }

 switch (VAR_8) {
 case 128:
  VAR_14 = FUNC_1(VAR_13, VAR_9, VAR_10, VAR_11, VAR_12);
  break;
 case 129:
  VAR_14 = FUNC_0(VAR_13, VAR_9, VAR_10, VAR_11, VAR_12);
  break;
 default:
  VAR_14 = VAR_2;
  break;
 }

out:
 FUNC_3(VAR_13);

 return VAR_14;
}
