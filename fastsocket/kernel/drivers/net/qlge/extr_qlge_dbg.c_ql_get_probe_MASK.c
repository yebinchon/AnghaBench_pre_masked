
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ql_adapter*,int ) ;
 int FUNC_1 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static unsigned int *FUNC_2(struct ql_adapter *VAR_7, u32 VAR_8,
     u32 VAR_9, u32 *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (!((VAR_9 >> VAR_11) & 1))
   continue;
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   VAR_13 = VAR_8
    | VAR_1
    | VAR_12
    | (VAR_11 << VAR_4);
   FUNC_1(VAR_7, VAR_0, VAR_13);
   VAR_14 = FUNC_0(VAR_7, VAR_6);
   if (VAR_12 == 0) {
    *VAR_10 = VAR_13;
    VAR_10++;
   }
   VAR_13 |= VAR_5;
   FUNC_1(VAR_7, VAR_0, VAR_13);
   VAR_15 = FUNC_0(VAR_7, VAR_6);
   *VAR_10 = VAR_14;
   VAR_10++;
   *VAR_10 = VAR_15;
   VAR_10++;
  }
 }
 return VAR_10;
}
