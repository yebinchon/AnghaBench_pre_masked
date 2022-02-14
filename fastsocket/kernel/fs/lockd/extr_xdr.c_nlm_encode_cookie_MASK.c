
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_cookie {int len; int data; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static inline __be32 *
FUNC_3(__be32 *VAR_0, struct nlm_cookie *VAR_1)
{
 *VAR_0++ = FUNC_1(VAR_1->len);
 FUNC_2(VAR_0, VAR_1->data, VAR_1->len);
 VAR_0+=FUNC_0(VAR_1->len);
 return VAR_0;
}
