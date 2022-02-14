
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_io_tree {int dummy; } ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (struct extent_io_tree*) ;

void FUNC_2(struct extent_io_tree *VAR_0, int VAR_1)
{
 FUNC_0(FUNC_1(VAR_0), VAR_1, "Locking error: "
      "Extent tree was modified by another "
      "thread while locked.");
}
