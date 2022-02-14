
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct xdr_netobj {int len; int data; } ;
struct inode {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct inode*) ;
 unsigned int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline unsigned int
FUNC_2(struct inode *VAR_1, u32 VAR_2,
  struct xdr_netobj *VAR_3)
{
 return (FUNC_0(VAR_1) + VAR_2
   + FUNC_1(VAR_3->data, VAR_3->len))
  & VAR_0;
}
