
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jfs_ea {scalar_t__ namelen; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct jfs_ea *VAR_8)
{



 if ((VAR_8->namelen >= VAR_3) &&
     !FUNC_0(VAR_8->name, VAR_2, VAR_3))
  return 0;



 if ((VAR_8->namelen >= VAR_7) &&
     !FUNC_0(VAR_8->name, VAR_6, VAR_7))
  return 0;



 if ((VAR_8->namelen >= VAR_1) &&
     !FUNC_0(VAR_8->name, VAR_0,
       VAR_1))
  return 0;



 if ((VAR_8->namelen >= VAR_5) &&
     !FUNC_0(VAR_8->name, VAR_4, VAR_5))
  return 0;







 return 1;
}
