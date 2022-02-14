
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum x509_name_attr_type { ____Placeholder_x509_name_attr_type } x509_name_attr_type ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static char * FUNC_1(enum x509_name_attr_type VAR_0)
{

 switch (VAR_0) {
 case 131:
  return "[N/A]";
 case 133:
  return "DC";
 case 134:
  return "CN";
 case 135:
  return "C";
 case 132:
  return "L";
 case 128:
  return "ST";
 case 130:
  return "O";
 case 129:
  return "OU";
 }
 return "?";
}
