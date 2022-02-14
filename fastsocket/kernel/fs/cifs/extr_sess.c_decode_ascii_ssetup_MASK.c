
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
struct cifs_ses {void* serverNOS; int flags; void* serverOS; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (void*,char*,int) ;
 int FUNC_4 (void*,char*,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(char **VAR_2, __u16 VAR_3,
          struct cifs_ses *VAR_4,
          const struct nls_table *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 char *VAR_8 = *VAR_2;

 FUNC_0(1, "decode sessetup ascii. bleft %d", VAR_3);

 VAR_7 = FUNC_5(VAR_8, VAR_3);
 if (VAR_7 >= VAR_3)
  return VAR_6;

 FUNC_1(VAR_4->serverOS);

 VAR_4->serverOS = FUNC_2(VAR_7 + 1, VAR_1);
 if (VAR_4->serverOS)
  FUNC_4(VAR_4->serverOS, VAR_8, VAR_7);
 if (FUNC_3(VAR_4->serverOS, "OS/2", 4) == 0) {
   FUNC_0(1, "OS/2 server");
   VAR_4->flags |= VAR_0;
 }

 VAR_8 += VAR_7 + 1;
 VAR_3 -= VAR_7 + 1;

 VAR_7 = FUNC_5(VAR_8, VAR_3);
 if (VAR_7 >= VAR_3)
  return VAR_6;

 FUNC_1(VAR_4->serverNOS);

 VAR_4->serverNOS = FUNC_2(VAR_7 + 1, VAR_1);
 if (VAR_4->serverNOS)
  FUNC_4(VAR_4->serverNOS, VAR_8, VAR_7);

 VAR_8 += VAR_7 + 1;
 VAR_3 -= VAR_7 + 1;

 VAR_7 = FUNC_5(VAR_8, VAR_3);
 if (VAR_7 > VAR_3)
  return VAR_6;






 FUNC_0(1, "ascii: bytes left %d", VAR_3);

 return VAR_6;
}
