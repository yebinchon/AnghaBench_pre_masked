
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct niu*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct niu *VAR_1, int VAR_2)
{
 u64 VAR_3 = FUNC_3(FUNC_0(VAR_2));
 int VAR_4;

 VAR_3 |= VAR_0;
 FUNC_4(FUNC_0(VAR_2), VAR_3);

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_4)
  FUNC_4(FUNC_1(VAR_2), 0);

 return VAR_4;
}
