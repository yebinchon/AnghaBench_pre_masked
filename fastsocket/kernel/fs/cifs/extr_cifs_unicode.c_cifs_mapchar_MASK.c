
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int (* uni2char ) (int const,char*,int ) ;} ;
typedef int __u16 ;


 int VAR_0 ;






 int FUNC_0 (int const,char*,int ) ;

__attribute__((used)) static int
FUNC_1(char *VAR_1, const __u16 VAR_2, const struct nls_table *VAR_3,
      bool VAR_4)
{
 int VAR_5 = 1;

 if (!VAR_4)
  goto cp_convert;






 switch (VAR_2) {
 case 132:
  *VAR_1 = ':';
  break;
 case 133:
  *VAR_1 = '*';
  break;
 case 128:
  *VAR_1 = '?';
  break;
 case 129:
  *VAR_1 = '|';
  break;
 case 131:
  *VAR_1 = '>';
  break;
 case 130:
  *VAR_1 = '<';
  break;
 default:
  goto cp_convert;
 }

out:
 return VAR_5;

cp_convert:
 VAR_5 = VAR_3->uni2char(VAR_2, VAR_1, VAR_0);
 if (VAR_5 <= 0) {
  *VAR_1 = '?';
  VAR_5 = 1;
 }
 goto out;
}
