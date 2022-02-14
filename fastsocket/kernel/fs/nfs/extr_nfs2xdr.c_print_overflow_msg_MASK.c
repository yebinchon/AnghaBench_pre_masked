
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {scalar_t__ p; scalar_t__ end; } ;


 int FUNC_0 (char*,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, const struct xdr_stream *VAR_1)
{
 FUNC_0("nfs: %s: prematurely hit end of receive buffer. "
  "Remaining buffer length is %tu words.\n",
  VAR_0, VAR_1->end - VAR_1->p);
}
