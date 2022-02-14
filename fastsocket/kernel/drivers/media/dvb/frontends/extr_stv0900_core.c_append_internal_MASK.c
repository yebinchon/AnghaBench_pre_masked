
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_internal {int dummy; } ;
struct stv0900_inode {struct stv0900_inode* next_inode; struct stv0900_internal* internal; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int ) ;
 struct stv0900_inode* VAR_1 ;

__attribute__((used)) static struct stv0900_inode *FUNC_1(struct stv0900_internal *VAR_2)
{
 struct stv0900_inode *VAR_3 = VAR_1;

 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_0(sizeof(struct stv0900_inode), VAR_0);
  VAR_1 = VAR_3;
 } else {
  while (VAR_3->next_inode != ((void*)0))
   VAR_3 = VAR_3->next_inode;

  VAR_3->next_inode = FUNC_0(sizeof(struct stv0900_inode),
        VAR_0);
  if (VAR_3->next_inode != ((void*)0))
   VAR_3 = VAR_3->next_inode;
  else
   VAR_3 = ((void*)0);
 }

 if (VAR_3 != ((void*)0)) {
  VAR_3->internal = VAR_2;
  VAR_3->next_inode = ((void*)0);
 }

 return VAR_3;
}
