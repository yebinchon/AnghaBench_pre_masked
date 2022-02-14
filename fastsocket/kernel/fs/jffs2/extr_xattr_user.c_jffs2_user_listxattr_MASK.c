
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 char const* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static size_t FUNC_1(struct inode *VAR_2, char *VAR_3, size_t VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 size_t VAR_7 = VAR_1 + VAR_6 + 1;

 if (VAR_3 && VAR_7 <= VAR_4) {
  FUNC_0(VAR_3, VAR_0);
  FUNC_0(VAR_3 + VAR_1, VAR_5);
 }

 return VAR_7;
}
