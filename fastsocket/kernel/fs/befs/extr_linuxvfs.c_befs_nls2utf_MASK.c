
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct super_block {int dummy; } ;
struct nls_table {int (* char2uni ) (char const*,int,int *) ;int charset; } ;
struct TYPE_2__ {struct nls_table* nls; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct super_block*,char*) ;
 int FUNC_2 (struct super_block*,char*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (char const*,int,int *) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(struct super_block *VAR_4, const char *VAR_5,
      int VAR_6, char **VAR_7, int *VAR_8)
{
 struct nls_table *VAR_9 = FUNC_0(VAR_4)->nls;
 int VAR_10, VAR_11;
 wchar_t VAR_12;
 int VAR_13, VAR_14;
 char *VAR_15;



 int VAR_16 = (3 * VAR_6) + 1;

 FUNC_1(VAR_4, "---> nls2utf()\n");

 if (!VAR_9) {
  FUNC_2(VAR_4, "befs_nls2utf called with no NLS table loaded.");
  return -VAR_1;
 }

 *VAR_7 = VAR_15 = FUNC_4(VAR_16, VAR_3);
 if (!*VAR_7) {
  FUNC_2(VAR_4, "befs_nls2utf() cannot allocate memory");
  *VAR_8 = 0;
  return -VAR_2;
 }

 for (VAR_10 = VAR_11 = 0; VAR_10 < VAR_6; VAR_10 += VAR_13, VAR_11 += VAR_14) {


  VAR_13 = VAR_9->char2uni(&VAR_5[VAR_10], VAR_6 - VAR_10, &VAR_12);
  if (VAR_13 < 0)
   goto conv_err;


  VAR_14 = FUNC_6(VAR_12, &VAR_15[VAR_11], 3);
  if (VAR_14 <= 0)
   goto conv_err;
 }

 VAR_15[VAR_11] = '\0';
 *VAR_8 = VAR_11;

 FUNC_1(VAR_4, "<--- nls2utf()");

 return VAR_10;

      conv_err:
 FUNC_2(VAR_4, "Name using charecter set %s contains a charecter that "
     "cannot be converted to unicode.", VAR_9->charset);
 FUNC_1(VAR_4, "<--- nls2utf()");
 FUNC_3(VAR_15);
 return -VAR_0;
}
