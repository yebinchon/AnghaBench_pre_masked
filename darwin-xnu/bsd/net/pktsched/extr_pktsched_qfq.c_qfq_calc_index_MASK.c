
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;
struct qfq_class {int cl_handle; int cl_qif; } ;
typedef scalar_t__ pktsched_bitmap_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int,int,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct qfq_class *VAR_4, u_int32_t VAR_5, u_int32_t VAR_6)
{
 u_int64_t VAR_7 = (u_int64_t)VAR_6 *VAR_5;
 pktsched_bitmap_t VAR_8;
 int VAR_9 = 0;

 VAR_8 = (pktsched_bitmap_t)(VAR_7 >> VAR_1);
 if (!VAR_8)
  goto out;

 VAR_9 = FUNC_1(VAR_8) + 1;
 VAR_9 -= !(VAR_7 - (1ULL << (VAR_9 + VAR_1 - 1)));

 if (VAR_9 < 0)
  VAR_9 = 0;
out:
 if (VAR_3) {
  FUNC_3(VAR_0, "%s: %s qid=%d grp=%d W=%u, L=%u, I=%d\n",
      FUNC_2(FUNC_0(VAR_4->cl_qif)), FUNC_4(VAR_4->cl_qif),
      VAR_4->cl_handle, VAR_9, (u_int32_t)(VAR_2/VAR_5),
      VAR_6, VAR_9);
 }
 return (VAR_9);
}
