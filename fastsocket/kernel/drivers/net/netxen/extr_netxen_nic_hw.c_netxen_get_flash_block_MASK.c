
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netxen_adapter {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct netxen_adapter*,int,int*) ;

__attribute__((used)) static int FUNC_3(struct netxen_adapter *VAR_0, int VAR_1,
      int VAR_2, __le32 * VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 __le32 *VAR_7;

 VAR_6 = VAR_1;
 VAR_7 = VAR_3;
 for (VAR_4 = 0; VAR_4 < VAR_2 / sizeof(u32); VAR_4++) {
  if (FUNC_2(VAR_0, VAR_6, &VAR_5) == -1)
   return -1;
  *VAR_7 = FUNC_0(VAR_5);
  VAR_7++;
  VAR_6 += sizeof(u32);
 }
 if ((char *)VAR_3 + VAR_2 > (char *)VAR_7) {
  __le32 VAR_8;
  if (FUNC_2(VAR_0, VAR_6, &VAR_5) == -1)
   return -1;
  VAR_8 = FUNC_0(VAR_5);
  FUNC_1(VAR_7, &VAR_8, (char *)VAR_3 + VAR_2 - (char *)VAR_7);
 }

 return 0;
}
