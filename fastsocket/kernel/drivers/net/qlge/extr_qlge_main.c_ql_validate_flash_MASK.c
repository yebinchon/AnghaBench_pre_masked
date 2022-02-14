
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ql_adapter {int ndev; int flash; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*,...) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_3(struct ql_adapter *VAR_1, u32 VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5;
 u16 VAR_6 = 0;
 __le16 *VAR_7 = (__le16 *)&VAR_1->flash;

 VAR_4 = FUNC_2((char *)&VAR_1->flash, VAR_3, 4);
 if (VAR_4) {
  FUNC_1(VAR_1, VAR_0, VAR_1->ndev, "Invalid flash signature.\n");
  return VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_6 += FUNC_0(*VAR_7++);

 if (VAR_6)
  FUNC_1(VAR_1, VAR_0, VAR_1->ndev,
     "Invalid flash checksum, csum = 0x%.04x.\n", VAR_6);

 return VAR_6;
}
