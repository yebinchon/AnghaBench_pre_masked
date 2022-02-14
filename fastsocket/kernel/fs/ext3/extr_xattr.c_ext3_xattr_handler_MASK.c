
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int dummy; } ;


 int FUNC_0 (struct xattr_handler**) ;
 struct xattr_handler** VAR_0 ;

__attribute__((used)) static inline struct xattr_handler *
FUNC_1(int VAR_1)
{
 struct xattr_handler *VAR_2 = ((void*)0);

 if (VAR_1 > 0 && VAR_1 < FUNC_0(VAR_0))
  VAR_2 = VAR_0[VAR_1];
 return VAR_2;
}
