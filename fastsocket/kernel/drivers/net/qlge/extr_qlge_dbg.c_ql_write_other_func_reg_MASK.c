
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int alt_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ql_adapter*,int,int) ;

__attribute__((used)) static int FUNC_1(struct ql_adapter *VAR_3,
     u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 int VAR_7 = 0;

 VAR_6 = VAR_2
    | VAR_1
    | (VAR_3->alt_func << VAR_0)
    | VAR_4;
 VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_5);

 return VAR_7;
}
