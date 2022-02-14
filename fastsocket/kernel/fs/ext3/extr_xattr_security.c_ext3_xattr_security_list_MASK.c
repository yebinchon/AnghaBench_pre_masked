
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 char const* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char const*,size_t const) ;

__attribute__((used)) static size_t
FUNC_1(struct inode *VAR_2, char *VAR_3, size_t VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 const size_t VAR_7 = VAR_1;
 const size_t VAR_8 = VAR_7 + VAR_6 + 1;


 if (VAR_3 && VAR_8 <= VAR_4) {
  FUNC_0(VAR_3, VAR_0, VAR_7);
  FUNC_0(VAR_3+VAR_7, VAR_5, VAR_6);
  VAR_3[VAR_7 + VAR_6] = '\0';
 }
 return VAR_8;
}
