
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int,int ,int ,int) ;
 int FUNC_3 (struct adapter*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_9, unsigned int VAR_10, int VAR_11,
       int VAR_12, u32 VAR_13)
{
 if (!VAR_10 || VAR_10 > 4)
  return -VAR_2;
 if (FUNC_1(VAR_9, VAR_8) & VAR_0)
  return -VAR_1;
 VAR_11 = VAR_11 ? VAR_5 : 0;
 VAR_12 = VAR_12 ? VAR_7 : 0;
 FUNC_3(VAR_9, VAR_6, VAR_13);
 FUNC_3(VAR_9, VAR_8, VAR_12 |
       VAR_11 | FUNC_0(VAR_10 - 1) | VAR_3);
 return FUNC_2(VAR_9, VAR_8, VAR_0, 0, VAR_4, 5);
}
