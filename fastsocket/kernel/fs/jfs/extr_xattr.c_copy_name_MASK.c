
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jfs_ea {int namelen; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct jfs_ea*) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static inline int FUNC_2(char *VAR_2, struct jfs_ea *VAR_3)
{
 int VAR_4 = VAR_3->namelen;

 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_2, VAR_0, VAR_1);
  VAR_2 += VAR_1;
  VAR_4 += VAR_1;
 }
 FUNC_1(VAR_2, VAR_3->name, VAR_3->namelen);
 VAR_2[VAR_3->namelen] = 0;

 return VAR_4;
}
