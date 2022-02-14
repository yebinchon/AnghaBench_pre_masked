
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct netxen_adapter {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct netxen_adapter*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct netxen_adapter *VAR_0, int VAR_1,
      u8 *VAR_2, size_t VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = VAR_1; VAR_4 < (VAR_1 + VAR_3); VAR_4 += 4) {
  int VAR_6;
  VAR_5 = FUNC_1(VAR_0, VAR_4, &VAR_6);
  if (VAR_5 != 0)
   break;
  *(__le32 *)VAR_2 = FUNC_0(VAR_6);
  VAR_2 += 4;
 }

 return VAR_5;
}
