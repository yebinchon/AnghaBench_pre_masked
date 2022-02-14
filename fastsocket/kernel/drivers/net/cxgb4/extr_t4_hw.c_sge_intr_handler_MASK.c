
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intr_info {int member_0; char* member_1; int member_2; int member_3; int const member_4; } ;
struct adapter {int pdev_dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned long long) ;


 int FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*,int ,struct intr_info const*) ;
 scalar_t__ FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_3)
{
 u64 VAR_4;

 static const struct intr_info VAR_5[] = {
  { 140,
    "SGE received CPL exceeding IQE size", -1, 1 },
  { 134,
    "SGE GTS CIDX increment too large", -1, 0 },
  { 139, "SGE received 0-length CPL", -1, 0 },
  { 132, ((void*)0), -1, 0, 128 },
  { 133, ((void*)0), -1, 0, 128 },
  { 131, ((void*)0), -1, 0, 129 },
  { 137 | 138,
    "SGE IQID > 1023 received CPL for FL", -1, 0 },
  { 141, "SGE DBP 3 pidx increment too large", -1,
    0 },
  { 142, "SGE DBP 2 pidx increment too large", -1,
    0 },
  { 143, "SGE DBP 1 pidx increment too large", -1,
    0 },
  { 144, "SGE DBP 0 pidx increment too large", -1,
    0 },
  { 135,
    "SGE too many priority ingress contexts", -1, 0 },
  { 136,
    "SGE too many priority egress contexts", -1, 0 },
  { 130, "SGE illegal ingress QID", -1, 0 },
  { 145, "SGE illegal egress QID", -1, 0 },
  { 0 }
 };

 VAR_4 = (u64)FUNC_3(VAR_3, VAR_0) |
  ((u64)FUNC_3(VAR_3, VAR_1) << 32);
 if (VAR_4) {
  FUNC_0(VAR_3->pdev_dev, "SGE parity error (%#llx)\n",
    (unsigned long long)VAR_4);
  FUNC_4(VAR_3, VAR_0, VAR_4);
  FUNC_4(VAR_3, VAR_1, VAR_4 >> 32);
 }

 if (FUNC_2(VAR_3, VAR_2, VAR_5) ||
     VAR_4 != 0)
  FUNC_1(VAR_3);
}
