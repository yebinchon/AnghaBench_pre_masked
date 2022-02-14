
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
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int,int ,int ,int) ;
 int FUNC_3 (struct adapter*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_8, unsigned int VAR_9, int VAR_10,
      int VAR_11, u32 *VAR_12)
{
 int VAR_13;

 if (!VAR_9 || VAR_9 > 4)
  return -VAR_2;
 if (FUNC_1(VAR_8, VAR_7) & VAR_0)
  return -VAR_1;
 VAR_10 = VAR_10 ? VAR_4 : 0;
 VAR_11 = VAR_11 ? VAR_6 : 0;
 FUNC_3(VAR_8, VAR_7, VAR_11 | VAR_10 | FUNC_0(VAR_9 - 1));
 VAR_13 = FUNC_2(VAR_8, VAR_7, VAR_0, 0, VAR_3, 5);
 if (!VAR_13)
  *VAR_12 = FUNC_1(VAR_8, VAR_5);
 return VAR_13;
}
