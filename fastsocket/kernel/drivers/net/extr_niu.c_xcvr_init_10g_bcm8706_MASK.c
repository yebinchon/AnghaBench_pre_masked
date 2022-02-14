
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct niu*) ;
 int FUNC_1 (struct niu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct niu*) ;
 int FUNC_7 (struct niu*) ;

__attribute__((used)) static int FUNC_8(struct niu *VAR_7)
{
 int VAR_8 = 0;
 u64 VAR_9;

 if ((VAR_7->flags & VAR_2) &&
     (VAR_7->flags & VAR_3) == 0)
   return VAR_8;

 VAR_9 = FUNC_3(VAR_4);
 VAR_9 &= ~VAR_6;
 VAR_9 |= VAR_5;
 FUNC_5(VAR_4, VAR_9);

 VAR_9 = FUNC_2(VAR_0);
 VAR_9 |= VAR_1;
 FUNC_4(VAR_0, VAR_9);

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8)
  return VAR_8;

 return 0;
}
