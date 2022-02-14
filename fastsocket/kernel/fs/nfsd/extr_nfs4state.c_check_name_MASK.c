
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct xdr_netobj VAR_1)
{
 if (VAR_1.len == 0)
  return 0;
 if (VAR_1.len > VAR_0) {
  FUNC_0("NFSD: check_name: name too long(%d)!\n", VAR_1.len);
  return 0;
 }
 return 1;
}
