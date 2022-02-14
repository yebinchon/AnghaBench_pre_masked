
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(int VAR_7)
{
 unsigned long VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 u32 VAR_11;

 if (!VAR_6 || !VAR_4)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_4(&VAR_5, VAR_8);
 VAR_11 = FUNC_0(VAR_6);
 if (VAR_7) {
  VAR_10 &= VAR_3;
  VAR_11 |= VAR_1;
 } else {
  VAR_10 |= VAR_2;
  VAR_11 &= ~VAR_1;
 }
 FUNC_1(VAR_11, VAR_6);
 FUNC_5(&VAR_5, VAR_8);

 VAR_9 = FUNC_3(VAR_4, VAR_10);
 if (VAR_9)
  return VAR_9;

 return 0;
}
