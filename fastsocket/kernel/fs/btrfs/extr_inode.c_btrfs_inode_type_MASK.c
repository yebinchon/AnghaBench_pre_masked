
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct inode {size_t i_mode; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static inline u8 FUNC_0(struct inode *VAR_3)
{
 return VAR_2[(VAR_3->i_mode & VAR_0) >> VAR_1];
}
