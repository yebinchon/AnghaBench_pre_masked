
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int,struct dentry*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(unsigned VAR_1, unsigned int VAR_2, unsigned VAR_3,
        struct dentry *VAR_4)
{
 unsigned VAR_5;
 int VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, VAR_4);
  if (VAR_6)
   return VAR_6;
 }

 return VAR_6;
}
