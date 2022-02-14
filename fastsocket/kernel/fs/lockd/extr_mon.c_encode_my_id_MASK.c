
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct nsm_args {int proc; int vers; int prog; } ;
typedef int __be32 ;
struct TYPE_2__ {int nodename; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* FUNC_3 () ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_1, const struct nsm_args *VAR_2)
{
 int VAR_3;
 __be32 *VAR_4;

 VAR_3 = FUNC_0(VAR_1, FUNC_3()->nodename);
 if (FUNC_2(VAR_3 != 0))
  return VAR_3;
 VAR_4 = FUNC_4(VAR_1, 3 * sizeof(u32));
 if (FUNC_2(VAR_4 == ((void*)0)))
  return -VAR_0;
 *VAR_4++ = FUNC_1(VAR_2->prog);
 *VAR_4++ = FUNC_1(VAR_2->vers);
 *VAR_4++ = FUNC_1(VAR_2->proc);
 return 0;
}
