
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct mountres {unsigned int* auth_count; void** auth_flavors; } ;
typedef void* rpc_authflavor_t ;
typedef int entries ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_2, struct mountres *VAR_3)
{
 rpc_authflavor_t *VAR_4 = VAR_3->auth_flavors;
 unsigned int *VAR_5 = VAR_3->auth_count;
 u32 VAR_6, VAR_7;
 __be32 *VAR_8;

 if (*VAR_5 == 0)
  return 0;

 VAR_8 = FUNC_3(VAR_2, sizeof(VAR_6));
 if (FUNC_2(VAR_8 == ((void*)0)))
  return -VAR_0;
 VAR_6 = FUNC_1(*VAR_8);
 FUNC_0("NFS: received %u auth flavors\n", VAR_6);
 if (VAR_6 > VAR_1)
  VAR_6 = VAR_1;

 VAR_8 = FUNC_3(VAR_2, sizeof(u32) * VAR_6);
 if (FUNC_2(VAR_8 == ((void*)0)))
  return -VAR_0;

 if (VAR_6 > *VAR_5)
  VAR_6 = *VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_4[VAR_7] = FUNC_1(*VAR_8++);
  FUNC_0("NFS:   auth flavor[%u]: %d\n", VAR_7, VAR_4[VAR_7]);
 }
 *VAR_5 = VAR_7;

 return 0;
}
