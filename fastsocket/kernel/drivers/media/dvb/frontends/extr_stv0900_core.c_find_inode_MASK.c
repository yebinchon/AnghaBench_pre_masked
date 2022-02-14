
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct stv0900_inode {struct stv0900_inode* next_inode; TYPE_1__* internal; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {scalar_t__ i2c_addr; struct i2c_adapter* i2c_adap; } ;


 struct stv0900_inode* VAR_0 ;

__attribute__((used)) static struct stv0900_inode *FUNC_0(struct i2c_adapter *VAR_1,
       u8 VAR_2)
{
 struct stv0900_inode *VAR_3 = VAR_0;

 if (VAR_3 != ((void*)0)) {



  while ((VAR_3 != ((void*)0)) &&
   ((VAR_3->internal->i2c_adap != VAR_1) ||
   (VAR_3->internal->i2c_addr != VAR_2)))

   VAR_3 = VAR_3->next_inode;

 }

 return VAR_3;
}
