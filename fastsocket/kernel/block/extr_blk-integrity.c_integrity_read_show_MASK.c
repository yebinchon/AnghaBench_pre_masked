
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_integrity {int flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct blk_integrity *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, "%d\n", (VAR_1->flags & VAR_0) != 0);
}
