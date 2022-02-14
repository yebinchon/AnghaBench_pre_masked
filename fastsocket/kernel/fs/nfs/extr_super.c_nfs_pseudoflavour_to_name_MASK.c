
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rpc_authflavor_t ;
__attribute__((used)) static const char *FUNC_0(rpc_authflavor_t VAR_0)
{
 static const struct {
  rpc_authflavor_t flavour;
  const char *str;
 } VAR_1[] = {
  { 130, "null" },
  { 129, "sys" },
  { 139, "krb5" },
  { 138, "krb5i" },
  { 137, "krb5p" },
  { 136, "lkey" },
  { 135, "lkeyi" },
  { 134, "lkeyp" },
  { 133, "spkm" },
  { 132, "spkmi" },
  { 131, "spkmp" },
  { 128, "unknown" }
 };
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2].flavour != 128; VAR_2++) {
  if (VAR_1[VAR_2].flavour == VAR_0)
   break;
 }
 return VAR_1[VAR_2].str;
}
