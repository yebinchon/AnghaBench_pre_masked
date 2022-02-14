
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;



__attribute__((used)) static inline unsigned char FUNC_0(struct inode *VAR_0)
{
 return (VAR_0->i_mode >> 12) & 15;
}
