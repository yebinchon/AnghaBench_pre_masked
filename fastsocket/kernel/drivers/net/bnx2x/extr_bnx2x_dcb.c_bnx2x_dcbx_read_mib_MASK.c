
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lldp_remote_mib {scalar_t__ prefix_seq_num; scalar_t__ suffix_seq_num; } ;
struct lldp_local_mib {scalar_t__ prefix_seq_num; scalar_t__ suffix_seq_num; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;


 int FUNC_2 (struct bnx2x*,scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_1,
          u32 *VAR_2,
          u32 VAR_3,
          int VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6, VAR_7, VAR_8;
 struct lldp_remote_mib *VAR_9 ;
 struct lldp_local_mib *VAR_10;

 switch (VAR_4) {
 case 129:
  VAR_6 = sizeof(struct lldp_local_mib);
  break;
 case 128:
  VAR_6 = sizeof(struct lldp_remote_mib);
  break;
 default:
  return 1;
 }

 VAR_3 += FUNC_1(VAR_1) * VAR_6;

 do {
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_6);

  VAR_5++;

  switch (VAR_4) {
  case 129:
   VAR_10 = (struct lldp_local_mib *) VAR_2;
   VAR_7 = VAR_10->prefix_seq_num;
   VAR_8 = VAR_10->suffix_seq_num;
   break;
  case 128:
   VAR_9 = (struct lldp_remote_mib *) VAR_2;
   VAR_7 = VAR_9->prefix_seq_num;
   VAR_8 = VAR_9->suffix_seq_num;
   break;
  default:
   return 1;
  }
 } while ((VAR_7 != VAR_8) &&
        (VAR_5 < VAR_0));

 if (VAR_5 >= VAR_0) {
  FUNC_0("MIB could not be read\n");
  return 1;
 }

 return 0;
}
