
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct shortname_info {scalar_t__ upper; scalar_t__ lower; scalar_t__ valid; } ;
struct nls_table {int (* uni2char ) (int ,unsigned char*,int) ;} ;


 scalar_t__ FUNC_0 (unsigned char) ;
 unsigned char FUNC_1 (struct nls_table*,unsigned char) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct nls_table *VAR_0,
        unsigned char *VAR_1, int VAR_2,
        wchar_t *VAR_3, struct shortname_info *VAR_4)
{
 int VAR_5;

 if (FUNC_4(*VAR_3)) {
  VAR_4->valid = 0;
  return 0;
 }
 if (FUNC_3(*VAR_3)) {
  VAR_4->valid = 0;
  VAR_1[0] = '_';
  return 1;
 }

 VAR_5 = VAR_0->uni2char(*VAR_3, VAR_1, VAR_2);
 if (VAR_5 <= 0) {
  VAR_4->valid = 0;
  VAR_1[0] = '_';
  VAR_5 = 1;
 } else if (VAR_5 == 1) {
  unsigned char VAR_6 = VAR_1[0];

  if (VAR_1[0] >= 0x7F) {
   VAR_4->lower = 0;
   VAR_4->upper = 0;
  }

  VAR_1[0] = FUNC_1(VAR_0, VAR_1[0]);
  if (FUNC_0(VAR_1[0])) {
   if (VAR_1[0] == VAR_6)
    VAR_4->lower = 0;
   else
    VAR_4->upper = 0;
  }
 } else {
  VAR_4->lower = 0;
  VAR_4->upper = 0;
 }

 return VAR_5;
}
