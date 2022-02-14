
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct enic {int devcmd_lock; } ;


 int FUNC_0 (struct enic*,int,int,int,int,int,int const,int const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct enic *VAR_0, u8 VAR_1,
 u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 const u8 VAR_6 = 0;
 const u8 VAR_7 = 1;
 int VAR_8;




 FUNC_1(&VAR_0->devcmd_lock);
 VAR_8 = FUNC_0(VAR_0,
  VAR_1, VAR_2,
  VAR_3, VAR_4,
  VAR_5, VAR_6,
  VAR_7);
 FUNC_2(&VAR_0->devcmd_lock);

 return VAR_8;
}
