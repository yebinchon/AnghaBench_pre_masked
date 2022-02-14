
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;


 int VAR_0 ;
 char const* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,char const*,size_t const) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static size_t
FUNC_2(struct inode *VAR_3, char *VAR_4, size_t VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 const size_t VAR_8 = VAR_2;
 const size_t VAR_9 = VAR_8 + VAR_7 + 1;

 if (!FUNC_1(VAR_3->i_sb, VAR_0))
  return 0;

 if (VAR_4 && VAR_9 <= VAR_5) {
  FUNC_0(VAR_4, VAR_1, VAR_8);
  FUNC_0(VAR_4+VAR_8, VAR_6, VAR_7);
  VAR_4[VAR_8 + VAR_7] = '\0';
 }
 return VAR_9;
}
