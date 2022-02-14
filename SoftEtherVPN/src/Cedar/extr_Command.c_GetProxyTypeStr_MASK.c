
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;





 int * FUNC_0 (char*) ;

wchar_t *FUNC_1(UINT VAR_0)
{
 switch (VAR_0)
 {
 case 130:

  return FUNC_0("PROTO_DIRECT_TCP");

 case 129:
  return FUNC_0("PROTO_HTTP_PROXY");

 case 128:
  return FUNC_0("PROTO_SOCKS_PROXY");

 default:
  return FUNC_0("PROTO_UNKNOWN");
 }
}
