
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ unicode_t ;
struct super_block {int dummy; } ;
struct nls_table {int (* uni2char ) (scalar_t__,char*,int) ;int charset; } ;
struct TYPE_2__ {struct nls_table* nls; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct super_block*,char*) ;
 int FUNC_2 (struct super_block*,char*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (scalar_t__,char*,int) ;
 int FUNC_6 (char const*,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_7(struct super_block *VAR_5, const char *VAR_6,
      int VAR_7, char **VAR_8, int *VAR_9)
{
 struct nls_table *VAR_10 = FUNC_0(VAR_5)->nls;
 int VAR_11, VAR_12;
 unicode_t VAR_13;
 int VAR_14, VAR_15;
 char *VAR_16;




 int VAR_17 = VAR_7 + 1;

 FUNC_1(VAR_5, "---> utf2nls()");

 if (!VAR_10) {
  FUNC_2(VAR_5, "befs_utf2nls called with no NLS table loaded");
  return -VAR_1;
 }

 *VAR_8 = VAR_16 = FUNC_4(VAR_17, VAR_3);
 if (!*VAR_8) {
  FUNC_2(VAR_5, "befs_utf2nls() cannot allocate memory");
  *VAR_9 = 0;
  return -VAR_2;
 }

 for (VAR_11 = VAR_12 = 0; VAR_11 < VAR_7; VAR_11 += VAR_15, VAR_12 += VAR_14) {


  VAR_15 = FUNC_6(&VAR_6[VAR_11], VAR_7 - VAR_11, &VAR_13);
  if (VAR_15 < 0)
   goto conv_err;


  if (VAR_13 > VAR_4)
   goto conv_err;
  VAR_14 = VAR_10->uni2char(VAR_13, &VAR_16[VAR_12], VAR_7 - VAR_12);
  if (VAR_14 < 0)
   goto conv_err;
 }
 VAR_16[VAR_12] = '\0';
 *VAR_9 = VAR_12;

 FUNC_1(VAR_5, "<--- utf2nls()");

 return VAR_12;

      conv_err:
 FUNC_2(VAR_5, "Name using character set %s contains a character that "
     "cannot be converted to unicode.", VAR_10->charset);
 FUNC_1(VAR_5, "<--- utf2nls()");
 FUNC_3(VAR_16);
 return -VAR_0;
}
