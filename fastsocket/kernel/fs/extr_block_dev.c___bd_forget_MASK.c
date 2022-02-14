
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_data; int * i_mapping; int * i_bdev; int i_devices; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct inode *VAR_0)
{
 FUNC_0(&VAR_0->i_devices);
 VAR_0->i_bdev = ((void*)0);
 VAR_0->i_mapping = &VAR_0->i_data;
}
