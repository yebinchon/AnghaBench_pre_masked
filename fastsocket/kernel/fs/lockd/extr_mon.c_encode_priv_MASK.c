
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nsm_args {TYPE_1__* priv; } ;
typedef int __be32 ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (struct xdr_stream*,int ) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_2, const struct nsm_args *VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 if (FUNC_0(VAR_4 == ((void*)0)))
  return -VAR_0;
 FUNC_1(VAR_4, VAR_3->priv->data, VAR_1);
 return 0;
}
