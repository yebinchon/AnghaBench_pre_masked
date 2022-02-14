
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dirtied_when; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct inode *VAR_1, unsigned long VAR_2)
{
 bool VAR_3 = FUNC_0(VAR_1->dirtied_when, VAR_2);







 VAR_3 = VAR_3 && FUNC_1(VAR_1->dirtied_when, VAR_0);

 return VAR_3;
}
