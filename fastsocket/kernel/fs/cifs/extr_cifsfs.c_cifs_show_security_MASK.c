
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct TCP_Server_Info {int secType; int sec_mode; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,char*) ;

__attribute__((used)) static void
FUNC_1(struct seq_file *VAR_2, struct TCP_Server_Info *VAR_3)
{
 FUNC_0(VAR_2, ",sec=");

 switch (VAR_3->secType) {
 case 131:
  FUNC_0(VAR_2, "lanman");
  break;
 case 129:
  FUNC_0(VAR_2, "ntlmv2");
  break;
 case 130:
  FUNC_0(VAR_2, "ntlm");
  break;
 case 132:
  FUNC_0(VAR_2, "krb5");
  break;
 case 128:
  FUNC_0(VAR_2, "ntlmssp");
  break;
 default:

  FUNC_0(VAR_2, "unknown");
  break;
 }

 if (VAR_3->sec_mode & (VAR_1 | VAR_0))
  FUNC_0(VAR_2, "i");
}
