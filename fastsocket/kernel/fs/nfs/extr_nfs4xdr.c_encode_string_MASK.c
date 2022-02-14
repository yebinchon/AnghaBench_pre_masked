
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,unsigned int) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_0, unsigned int VAR_1, const char *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_2(VAR_0, 4 + VAR_1);
 FUNC_0(VAR_3 == ((void*)0));
 FUNC_1(VAR_3, VAR_2, VAR_1);
}
